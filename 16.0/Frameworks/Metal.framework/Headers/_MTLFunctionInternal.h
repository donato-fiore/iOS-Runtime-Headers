// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLFUNCTIONINTERNAL_H
#define _MTLFUNCTIONINTERNAL_H

@class MTLFunction, NSString;
@protocol OS_dispatch_queue;



@interface _MTLFunctionInternal : MTLFunction {
    MTLFunctionData _functionData;
    unsigned char _publicMetadataInitialized;
    unsigned char _privateMetadataInitialized;
    unsigned char _sourceArchiveMetadataInitialized;
    unsigned char _stitchableFunctionMetadataInitialized;
    *void _programObject;
    NSString *_filePath;
    NSInteger _lineNumber;
    NSObject<OS_dispatch_queue> *_functionQueue;
}




-(*void)programObject;
-(BOOL)needsFunctionConstantValues;
-(BOOL)specializedFunctionHash:(struct ? *)arg0 requestData:(*id)arg1 constants:(id)arg2 specializedName:(id)arg3 privateFunctions:(id)arg4 completionHandler:(id)arg5 ;
-(NSInteger)lineNumber;
-(NSInteger)patchControlPointCount;
-(NSUInteger)bitCodeFileSize;
-(NSUInteger)bitCodeOffset;
-(NSUInteger)patchType;
-(NSUInteger)renderTargetArrayIndexType;
-(NSUInteger)sourceArchiveOffset;
-(id)arguments;
-(id)filePath;
-(id)functionConstants;
-(id)functionConstantsDictionary;
-(id)functionInputs;
-(id)importedLibraries;
-(id)importedSymbols;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 libraryData:(struct MTLLibraryData *)arg2 functionData:(struct MTLFunctionData *)arg3 device:(id)arg4 ;
-(id)newFunctionWithPluginData:(id)arg0 bitcodeType:(unsigned char)arg1 ;
-(id)newSpecializedFunctionWithDescriptor:(id)arg0 destinationArchive:(id)arg1 functionCache:(id)arg2 error:(*id)arg3 ;
-(id)pluginData;
-(id)precompiledOutput;
-(id)relocations;
-(id)returnType;
-(id)stageInputAttributes;
-(id)unpackedFilePath;
-(id)vertexAttributes;
-(struct ? *)bitCodeHash;
-(struct MTLFunctionData *)functionData;
-(unsigned char)bitcodeType;
-(void)dealloc;
-(void)initializePrivateMetadata;
-(void)initializePublicMetadata;
-(void)initializeSourceArchive;
-(void)initializeStitchableFunctionMetadata;
-(void)newSpecializedFunctionWithDescriptor:(id)arg0 destinationArchive:(id)arg1 functionCache:(id)arg2 sync:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)setArguments:(id)arg0 ;
-(void)setBitcodeType:(unsigned char)arg0 ;
-(void)setFilePath:(id)arg0 ;
-(void)setFunctionConstantSpecializationHash:(struct ? *)arg0 ;
-(void)setFunctionConstants:(id)arg0 ;
-(void)setLineNumber:(NSInteger)arg0 ;
-(void)setOptions:(NSUInteger)arg0 ;
-(void)setPluginData:(id)arg0 ;
-(void)setPrecompiledOutput:(id)arg0 ;
-(void)setRelocations:(id)arg0 ;
-(void)setReturnType:(id)arg0 ;
-(void)setSourceArchiveOffset:(NSUInteger)arg0 ;
-(void)setStageInputAttributes:(id)arg0 ;
-(void)setUnpackedFilePath:(id)arg0 ;
-(void)setVertexAttributes:(id)arg0 ;


@end


#endif