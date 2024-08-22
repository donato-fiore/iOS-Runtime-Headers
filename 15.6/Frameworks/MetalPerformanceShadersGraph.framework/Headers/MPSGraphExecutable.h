// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHEXECUTABLE_H
#define MPSGRAPHEXECUTABLE_H

@class NSArray, NSDictionary, NSString, NSFileManager;

#import <Foundation/Foundation.h>

#import "MPSGraph.h"

@interface MPSGraphExecutable : NSObject {
    MPSGraph *_graph;
    shared_ptr<mlir::MLIRContext> _executableContext;
    *void _builder;
    OwningModuleRef _originalModule;
    *void _symbolTable;
    NSUInteger _compilerOptions;
    NSUInteger _aneCompilerSpatialSplitting;
    unordered_map<std::string, std::unique_ptr<GPURuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<GPURuntime>>>> _runtimeCache;
    unordered_map<std::string, std::unique_ptr<BaseRuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<BaseRuntime>>>> _newRuntimeCache;
    unordered_map<std::string, mlir::OwningModuleRef, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlir::OwningModuleRef>>> _optimizedModuleCache;
    unordered_map<std::string, mlir::OwningModuleRef, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlir::OwningModuleRef>>> _optimizedNoDeviceModuleCache;
    _opaque_pthread_mutex_t _executableMutex;
    NSArray *_targetOperations;
    NSDictionary *_feeds;
    NSUInteger _modelUID;
    NSUInteger _compilationID;
    NSUInteger _evDumpModuleFlag;
    NSUInteger _sharedEventSignalValue;
    NSString *_evDumpModulePath;
    NSString *_modelFileArchivePath;
    NSFileManager *_fileManager;
    BOOL _useScratchPadContext;
    BOOL _useLegacyRuntime;
    BOOL _enableCommitAndContinue;
    BOOL _forceANERuntimeHack;
    BOOL _compileANEInMemory;
    BOOL _enableProfilingOpNames;
    BOOL _runPlacementPass;
    BOOL _useCostModel;
    NSUInteger _optimizationProfile;
}


@property (readonly) NSArray *feedTensors; // ivar: _feedTensorArray
@property NSUInteger options; // ivar: _options
@property (readonly) NSArray *targetTensors; // ivar: _targetTensorArray


-(*void)getNewRuntimeForDevice:(id)arg0 module:(struct ModuleOp )arg1 ;
-(*void)getRuntimeForDevice:(id)arg0 module:(struct ModuleOp )arg1 ;
-(BOOL)isExecutableForFeeds:(id)arg0 targetTensors:(id)arg1 targetOperations:(id)arg2 compilationDescriptor:(id)arg3 ;
-(id)allocateTargetsForDevice:(id)arg0 inputsArray:(id)arg1 ;
-(id)allocateTensorDataTargetsForDevice:(id)arg0 inputsArray:(id)arg1 ;
-(id)debugDescription;
-(id)encodeToCommandBuffer:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)encodeWithMPSCommandBuffer:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)getIR;
-(id)getInputShapes;
-(id)getOperationsToVisitForOperation:(id)arg0 visitedOperations:(id)arg1 ;
-(id)getOutputShapes;
-(id)getTargetShapesForDevice:(id)arg0 inputsArray:(id)arg1 ;
-(id)getTensorDataArraysWithDevice:(id)arg0 feedsDictionary:(id)arg1 resultsDictionary:(id)arg2 inputsArray:(id)arg3 resultsArray:(id)arg4 newRuntime:(BOOL)arg5 ;
-(id)initWithGraph:(id)arg0 feeds:(id)arg1 targetTensors:(id)arg2 targetOperations:(id)arg3 executableDescriptor:(id)arg4 ;
-(id)initWithMILProgram:(*void)arg0 executableDescriptor:(id)arg1 ;
-(id)initWithMLIRModule:(struct ModuleOp )arg0 executableDescriptor:(id)arg1 ;
-(id)initWithMLIRSource:(id)arg0 executableDescriptor:(id)arg1 ;
-(id)initWithMLIRSourceFromURL:(id)arg0 executableDescriptor:(id)arg1 ;
-(id)initializeWithMLIRModule:(struct ModuleOp )arg0 executableDescriptor:(id)arg1 ;
-(id)runAsyncWithCommandQueue:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)runAsyncWithDevice:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)runAsyncWithMTLCommandQueue:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)runInternalWithDevice:(id)arg0 commandBuffer:(id)arg1 feeds:(id)arg2 results:(id)arg3 executionDescriptor:(id)arg4 executableExecutionDescriptor:(id)arg5 mpsGraphOwnedCommandBuffer:(BOOL)arg6 ;
-(id)runInternalWithDevice:(id)arg0 commandBuffer:(id)arg1 feedsDictionary:(id)arg2 resultsDictionary:(id)arg3 executionDescriptor:(id)arg4 executableExecutionDescriptor:(id)arg5 mpsGraphOwnedCommandBuffer:(BOOL)arg6 ;
-(id)runWithDevice:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(id)runWithMTLCommandQueue:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 ;
-(id)runWithMTLCommandQueue:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 ;
-(struct ModuleOp )specializeWithDevice:(id)arg0 inputsArray:(id)arg1 compilationDescriptor:(id)arg2 ;
-(struct ModuleOp )specializedModuleWithDevice:(id)arg0 inputShapes:(id)arg1 compilationDescriptor:(id)arg2 ;
-(struct OwningModuleRef )cloneForFeeds:(id)arg0 targetTensors:(id)arg1 targetOperations:(id)arg2 ;
-(struct OwningModuleRef )optimizationPassesWithDevice:(id)arg0 sourceModule:(*void)arg1 fileToStoreName:(id)arg2 ;
-(void)commonPostInit:(*void)arg0 ;
-(void)commonPreInit;
-(void)dealloc;
-(void)dump;
-(void)encodeInternalWithMPSCommandBuffer:(id)arg0 inputsArray:(id)arg1 resultsArray:(id)arg2 executionDescriptor:(id)arg3 executableExecutionDescriptor:(id)arg4 ;
-(void)fileBackModule:(*void)arg0 withPath:(id)arg1 ;
-(void)initializeMLIR;
-(void)recurseFeeds:(id)arg0 targetTensors:(id)arg1 targetOperations:(id)arg2 ;
-(void)recurseOperation:(id)arg0 operationsRecursed:(id)arg1 tensorToValueMap:(*void)arg2 ;
-(void)sanitizeExternalModuleWithVariableFetchHandler:(id)arg0 ;
-(void)specializeWithDevice:(id)arg0 inputShapes:(id)arg1 compilationDescriptor:(id)arg2 ;
-(void)specializeWithDevice:(id)arg0 inputTypes:(id)arg1 compilationDescriptor:(id)arg2 ;


@end


#endif