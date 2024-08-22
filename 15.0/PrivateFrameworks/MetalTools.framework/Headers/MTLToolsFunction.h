// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSFUNCTION_H
#define MTLTOOLSFUNCTION_H

@class NSArray, NSString, MTLDebugInstrumentationData, NSDictionary, MTLType;
@protocol MTLFunctionSPI, MTLDevice, MTLFunctionHandle;


#import "MTLToolsObject.h"

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI>

 {
    NSArray *_relocations;
}


@property (readonly) NSArray *arguments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, copy) NSString *filePath;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly, nonatomic) NSObject<MTLFunctionHandle> *functionHandle;
@property (readonly) NSUInteger functionType;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSArray *importedSymbols;
@property (copy) NSString *label;
@property (readonly) NSInteger lineNumber;
@property (readonly) NSString *name;
@property (readonly) NSUInteger options;
@property (readonly) NSInteger patchControlPointCount;
@property (readonly) NSUInteger patchType;
@property (copy, nonatomic) NSArray *relocations;
@property (readonly) NSUInteger renderTargetArrayIndexType;
@property (readonly) MTLType *returnType;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *unpackedFilePath;
@property (readonly) NSArray *vertexAttributes;


-(id)bitcodeData;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)functionInputs;
-(id)initWithFunction:(id)arg0 library:(id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 pipelineLibrary:(id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 binaryArchives:(id)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 pipelineLibrary:(id)arg2 ;
-(id)newFunctionWithPluginData:(id)arg0 bitcodeType:(unsigned char)arg1 ;
-(id)precompiledOutput;
-(id)reflectionWithOptions:(NSUInteger)arg0 ;
-(id)reflectionWithOptions:(NSUInteger)arg0 binaryArchives:(id)arg1 ;
-(id)reflectionWithOptions:(NSUInteger)arg0 pipelineLibrary:(id)arg1 ;
-(struct ? *)bitCodeHash;
-(void)dealloc;
-(void)reflectionWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif