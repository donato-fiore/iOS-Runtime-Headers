// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHEXECUTABLE_H
#define MPSGRAPHEXECUTABLE_H

@class NSArray, NSDictionary, NSString, NSFileManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPSGraph.h"
#import "MPSGraphCompilationDescriptor.h"

@interface MPSGraphExecutable : NSObject {
    MPSGraph *_graph;
    shared_ptr<mlir::MLIRContext> _executableContext;
    *void _builder;
    OwningOpRef<mlir::ModuleOp> _originalModule;
    *void _symbolTable;
    MPSGraphCompilationDescriptor *_originalCompilationDescriptor;
    unordered_map<std::string, std::unique_ptr<GPURuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<GPURuntime>>>> _runtimeCache;
    unordered_map<std::string, std::unique_ptr<BaseRuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<BaseRuntime>>>> _newRuntimeCache;
    unordered_map<std::string, mlir::OwningOpRef<mlir::ModuleOp>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlir::OwningOpRef<mlir::ModuleOp>>>> _optimizedModuleCache;
    unordered_map<std::string, mlir::OwningOpRef<mlir::ModuleOp>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlir::OwningOpRef<mlir::ModuleOp>>>> _optimizedNoDeviceModuleCache;
    _opaque_pthread_mutex_t _executableMutex;
    _opaque_pthread_mutex_t _originalModuleMutex;
    NSObject<OS_dispatch_queue> *_specializationDispatchQueue;
    atomic<int> _specializationsPending;
    atomic<bool> _originalModuleIsOptimized;
    NSArray *_targetOperations;
    NSDictionary *_feeds;
    NSUInteger _modelUID;
    NSUInteger _compilationID;
    NSUInteger _evDumpModuleFlag;
    NSUInteger _sharedEventSignalValue;
    NSString *_evDumpModulePath;
    NSString *_modelFileArchivePath;
    NSString *_dumpCompiledProductsPath;
    NSFileManager *_fileManager;
    BOOL _enableCommitAndContinue;
    BOOL _forceANERuntimeHack;
    BOOL _enableProfilingOpNames;
    BOOL _briefProfilingOpNames;
    BOOL _runPlacementPass;
    BOOL _useCostModel;
    BOOL _oldCostModelPass;
    BOOL _printCostModel;
    BOOL _printANEPlacementAnalysis;
    NSUInteger _forcePlacementOnDevice;
}


@property (readonly) NSArray *feedTensors; // ivar: _feedTensorArray
@property NSUInteger options; // ivar: _options
@property (readonly) NSArray *targetTensors; // ivar: _targetTensorArray


+(NSUInteger)getValidateNetworkSupportedVersion;
+(id)executablesWithMLIRSourceForMultipleModules:(id)arg0 executableDescriptor:(id)arg1 regionNames:(id)arg2 ;
+(struct __CFDictionary *)validateNetworkWithParams:(struct __CFDictionary *)arg0 apiVersion:(NSUInteger)arg1 ;
-(*void)getNewRuntimeForDevice:(id)arg0 module:(struct ModuleOp )arg1 ;
-(BOOL)isExecutableForFeeds:(id)arg0 targetTensors:(id)arg1 targetOperations:(id)arg2 compilationDescriptor:(id)arg3 ;
-(id)allocateTensorDataTargetsForDevice:(id)arg0 inputsArray:(id)arg1 ;
-(id)debugDescription;
-(id)emitObjCToURL:(id)arg0 test:(BOOL)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)encodeWithMPSCommandBuffer:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)getIR;
-(id)getInputShapes;
-(id)getOperationsToVisitForOperation:(id)arg0 visitedOperations:(id)arg1 ;
-(id)getOutputShapes;
-(id)getOutputTypesWithDevice:(id)arg0 inputTypes:(id)arg1 compilationDescriptor:(id)arg2 ;
-(id)getTargetShapesForDevice:(id)arg0 inputsArray:(id)arg1 ;
-(id)getTensorDataArraysWithDevice:(id)arg0 feedsDictionary:(id)arg1 resultsDictionary:(id)arg2 inputsArray:(id)arg3 resultsArray:(id)arg4 ;
-(id)initWithCoreMLPackage:(id)arg0 executableDescriptor:(id)arg1 ;
-(id)initWithGraph:(id)arg0 device:(id)arg1 feeds:(id)arg2 targetTensors:(id)arg3 targetOperations:(id)arg4 executableDescriptor:(id)arg5 ;
-(id)initWithMILProgram:(*void)arg0 executableDescriptor:(id)arg1 ;
-(id)initWithMILProgramWithURL:(id)arg0 executableDescriptor:(id)arg1 ;
-(id)initWithMLIRModule:(struct ModuleOp )arg0 executableDescriptor:(id)arg1 ;
-(id)initWithMLIRSource:(id)arg0 executableDescriptor:(id)arg1 ;
-(id)initWithMLIRSourceFromURL:(id)arg0 executableDescriptor:(id)arg1 ;
-(id)initializeWithMLIRModule:(struct ModuleOp )arg0 executableDescriptor:(id)arg1 ;
-(id)runAsyncWithCommandQueue:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)runAsyncWithDevice:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)runAsyncWithMTLCommandQueue:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)runInternalWithDevice:(id)arg0 commandBuffer:(id)arg1 feeds:(id)arg2 results:(id)arg3 executableExecutionDescriptor:(id)arg4 mpsGraphOwnedCommandBuffer:(BOOL)arg5 ;
-(id)runInternalWithDevice:(id)arg0 commandBuffer:(id)arg1 feedsDictionary:(id)arg2 resultsDictionary:(id)arg3 executableExecutionDescriptor:(id)arg4 mpsGraphOwnedCommandBuffer:(BOOL)arg5 ;
-(id)runWithDevice:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)runWithMTLCommandQueue:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 ;
-(id)runWithMTLCommandQueue:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(struct ModuleOp )specializeWithDevice:(id)arg0 inputsArray:(id)arg1 compilationDescriptor:(id)arg2 ;
-(struct ModuleOp )specializedModuleWithDevice:(id)arg0 inputShapes:(id)arg1 compilationDescriptor:(id)arg2 ;
-(struct OwningOpRef<mlir::ModuleOp> )cloneForFeeds:(id)arg0 targetTensors:(id)arg1 targetOperations:(id)arg2 ;
-(struct OwningOpRef<mlir::ModuleOp> )optimizationPassesWithDevice:(id)arg0 sourceModule:(*void)arg1 fileToStoreName:(id)arg2 compilationDescriptor:(id)arg3 ;
-(void)aneRegionOpsHashSet:(*void)arg0 ;
-(void)commonPostInit:(*void)arg0 ;
-(void)commonPreInitWithDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)dump;
-(void)emitObjUnitTestToUrl:(id)arg0 ;
-(void)fileBackModule:(*void)arg0 withPath:(id)arg1 ;
-(void)initializeMLIR;
-(void)optimizeOriginalModuleWithCompilationDescriptor:(id)arg0 ;
-(void)sanitizeExternalModuleWithVariableFetchHandler:(id)arg0 ;
-(void)specializeWithDevice:(id)arg0 inputShapes:(id)arg1 compilationDescriptor:(id)arg2 ;
-(void)specializeWithDevice:(id)arg0 inputTypes:(id)arg1 compilationDescriptor:(id)arg2 ;


@end


#endif