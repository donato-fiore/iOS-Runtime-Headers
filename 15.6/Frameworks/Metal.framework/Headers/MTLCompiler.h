// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCOMPILER_H
#define MTLCOMPILER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MTLDevice.h"

@interface MTLCompiler : NSObject {
    _MTLDevice *_device;
    shared_ptr<MTLCompilerCache> _shaderCache;
}


@property (readonly) *MTLCompilerConnectionManager compilerConnectionManager; // ivar: _compilerConnectionManager
@property (readonly) NSUInteger compilerFlags; // ivar: _compilerFlags
@property (readonly) unsigned int compilerId; // ivar: _compilerId
@property (readonly) NSObject<OS_dispatch_queue> *compilerQueue; // ivar: _compilerQueue
@property (readonly, copy) NSString *pluginPath; // ivar: _pluginPath


-(*void)getProgramObject:(id)arg0 destinationArchive:(id)arg1 sourceBinaryArchives:(id)arg2 variantKey:(struct VariantKey *)arg3 requiredBinaryKeys:(*void)arg4 failOnMiss:(BOOL)arg5 ;
-(*void)getProgramObjectForFunction:(id)arg0 variantKey:(struct VariantKey *)arg1 requiredBinaryKeys:(*void)arg2 sourceBinaryArchives:(id)arg3 ;
-(*void)getShaderCacheKeys;
-(?)addCompiledOutput:(?)arg0 importedSymbols:(?)arg1 importedLibraries:(?)arg2 hashKeyfunctionCache;
-(?)cacheCompilerData:(?)arg0 cachedData:(?)arg1 hashMap:(?)arg2 libraryDatafunctionCache;
-(BOOL)addComputePipelineStateWithDescriptor:(id)arg0 destinationBinaryArchive:(id)arg1 error:(*id)arg2 ;
-(BOOL)addComputePipelineStateWithDescriptor:(id)arg0 destinationBinaryArchive:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)addRenderPipelineStateWithDescriptor:(id)arg0 destinationBinaryArchive:(id)arg1 error:(*id)arg2 ;
-(BOOL)addRenderPipelineStateWithDescriptor:(id)arg0 destinationBinaryArchive:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)addTileRenderPipelineStateWithDescriptor:(id)arg0 destinationBinaryArchive:(id)arg1 error:(*id)arg2 ;
-(BOOL)addTileRenderPipelineStateWithDescriptor:(id)arg0 destinationBinaryArchive:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)copyShaderCacheToPath:(id)arg0 ;
-(BOOL)validateLanguageAndAIRVersionForFunction:(id)arg0 completionHandler:(id)arg1 ;
-(id)compileDynamicLibrary:(id)arg0 computePipelineDescriptor:(id)arg1 error:(*id)arg2 ;
-(id)createVertexStageAndLinkPipelineWithFragment:(*void)arg0 fragmentVariant:(id)arg1 vertexFunction:(id)arg2 serializedVertexDescriptor:(id)arg3 descriptor:(id)arg4 destinationArchive:(id)arg5 options:(NSUInteger)arg6 reflection:(*id)arg7 compileStatistics:(id)arg8 fragmentCompileTimeData:(id)arg9 error:(*id)arg10 completionHandler:(id)arg11 ;
-(id)initWithTargetData:(id)arg0 cacheUUID:(struct ? *)arg1 pluginPath:(id)arg2 device:(id)arg3 compilerFlags:(NSUInteger)arg4 ;
-(id)lookupBinaryInArchives:(id)arg0 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 completionHandler:(id)arg4 ;
-(id)newComputePipelineStateWithDescriptorInternal:(id)arg0 options:(NSUInteger)arg1 pipelineCache:(id)arg2 destinationBinaryArchive:(id)arg3 reflection:(*id)arg4 error:(*id)arg5 completionHandler:(id)arg6 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 completionHandler:(id)arg4 ;
-(id)newRenderPipelineStateWithDescriptorInternal:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 destinationBinaryArchive:(id)arg3 error:(*id)arg4 completionHandler:(id)arg5 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 completionHandler:(id)arg4 ;
-(id)pipelineStateWithVariant:(struct VariantEntry *)arg0 descriptor:(id)arg1 options:(NSUInteger)arg2 computeProgram:(*void)arg3 kernelDriverCompileTimeData:(id)arg4 serializedComputeDataDescriptor:(id)arg5 compileTimeStatistics:(id)arg6 reflection:(*id)arg7 error:(*id)arg8 completionHandler:(id)arg9 ;
-(struct ? )getGPUCompilerHashForScript:(struct PipelineScript *)arg0 type:(NSUInteger)arg1 ;
-(struct ? )getHashForScript:(*void)arg0 function:(id)arg1 compilerOptions:(*char *)arg2 compilerOptionsSize:(NSUInteger)arg3 ;
-(struct ? )hashKeyForLibraryRequest:(struct MTLCompileLibraryRequestData *)arg0 ;
-(struct ? )hashKeyForStatelessCompilationRequest:(id)arg0 ;
-(struct ? )libraryCacheStats;
-(struct ? )pipelineCacheStats;
-(struct MTLFunctionId )getFunctionId:(id)arg0 ;
-(struct VariantEntry *)computeVariantEntryWithDescriptor:(id)arg0 options:(NSUInteger)arg1 serializedComputeDataDescriptor:(id)arg2 asyncCompile:(BOOL)arg3 pipelineCache:(id)arg4 destinationBinaryArchive:(id)arg5 computeProgram:(struct MTLProgramObject **)arg6 kernelDriverCompileTimeData:(*id)arg7 compileTimeStatistics:(id)arg8 ;
-(struct vector<std::pair<CompilerOutputType, MTLBinaryKey *>, std::allocator<std::pair<CompilerOutputType, MTLBinaryKey *>>> )requiredKeysForFunction:(id)arg0 variantKey:(struct VariantKey *)arg1 frameworkData:(id)arg2 compilerOptions:(int)arg3 ;
-(void)addCompiledOutput:(id)arg0 cachedCompiledOutput:(id)arg1 importedSymbols:(id)arg2 importedLibraries:(id)arg3 hashKey:(struct ? *)arg4 functionCache:(struct MultiLevelPipelineCache *)arg5 ;
-(void)addFunctionKeys:(*void)arg0 function:(id)arg1 driverData:(id)arg2 frameworkData:(id)arg3 compilerOptions:(int)arg4 ;
-(void)allowLibrariesFromOtherPlatforms;
-(void)compileDynamicLibrary:(id)arg0 computePipelineDescriptor:(id)arg1 completionHandler:(id)arg2 ;
-(void)compileFunction:(id)arg0 frameworkData:(id)arg1 driverKeyData:(id)arg2 options:(NSUInteger)arg3 pipelineCache:(id)arg4 completionHandler:(id)arg5 ;
-(void)compileFunction:(id)arg0 frameworkData:(id)arg1 driverKeyData:(id)arg2 options:(NSUInteger)arg3 pipelineCache:(id)arg4 sync:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)compileFunction:(id)arg0 serializedData:(id)arg1 stateData:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)compileFunction:(id)arg0 serializedPipelineData:(id)arg1 stateData:(id)arg2 linkDataSize:(NSUInteger)arg3 frameworkLinking:(BOOL)arg4 options:(unsigned int)arg5 pipelineCache:(id)arg6 sync:(BOOL)arg7 completionHandler:(id)arg8 ;
-(void)compileFunction:(id)arg0 serializedPipelineData:(id)arg1 stateData:(id)arg2 linkDataSize:(NSUInteger)arg3 frameworkLinking:(BOOL)arg4 options:(unsigned int)arg5 sync:(BOOL)arg6 completionHandler:(id)arg7 ;
-(void)compileFunction:(id)arg0 visibleFunctions:(id)arg1 privateVisibleFunctions:(id)arg2 visibleFunctionGroups:(id)arg3 frameworkData:(id)arg4 driverKeyData:(id)arg5 options:(NSUInteger)arg6 pipelineCache:(id)arg7 sync:(BOOL)arg8 completionHandler:(id)arg9 ;
-(void)compileFunction:(id)arg0 visibleFunctions:(id)arg1 visibleFunctionGroups:(id)arg2 frameworkData:(id)arg3 driverKeyData:(id)arg4 options:(NSUInteger)arg5 pipelineCache:(id)arg6 sync:(BOOL)arg7 completionHandler:(id)arg8 ;
-(void)compileFunctionRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)compileFunctionRequestInternal:(id)arg0 frameworkLinking:(BOOL)arg1 linkDataSize:(NSUInteger)arg2 reflectionOnly:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)compileLibraryRequest:(struct MTLCompileLibraryRequestData )arg0 completionHandler:(id)arg1 ;
-(void)compileRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)compileRequest:(id)arg0 pipelineCache:(id)arg1 completionHandler:(id)arg2 ;
-(void)compileRequest:(id)arg0 pipelineCache:(id)arg1 sync:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)compileStatelessFunctionRequest:(id)arg0 reflectionOnly:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)initializeFunctionRequestScriptAndFunctionId:(id)arg0 script:(*void)arg1 driverCompilerOptions:(id)arg2 ;
-(void)reflectionWithFunction:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)reflectionWithFunction:(id)arg0 options:(NSUInteger)arg1 sync:(BOOL)arg2 binaryArchives:(id)arg3 completionHandler:(id)arg4 ;
-(void)reflectionWithFunction:(id)arg0 options:(NSUInteger)arg1 sync:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)reflectionWithFunction:(id)arg0 options:(NSUInteger)arg1 sync:(BOOL)arg2 pipelineLibrary:(id)arg3 binaryArchives:(id)arg4 completionHandler:(id)arg5 ;
-(void)reflectionWithFunction:(id)arg0 options:(NSUInteger)arg1 sync:(BOOL)arg2 pipelineLibrary:(id)arg3 completionHandler:(id)arg4 ;
-(void)releaseCompilerOutputBlocks:(*void)arg0 ;
-(void)statelessBackendCompileRequestInternal:(struct MTLCompilerFunctionRequest *)arg0 sync:(BOOL)arg1 compilerHash:(struct ? *)arg2 reflectionOnly:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)unloadShaderCaches;


@end


#endif