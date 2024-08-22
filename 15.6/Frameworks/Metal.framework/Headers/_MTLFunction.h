// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MTLFUNCTION_H
#define _MTLFUNCTION_H

@class MTLObjectWithLabel, NSArray, NSDictionary, NSString, NSData;
@protocol MTLFunctionSPI, OS_dispatch_data, MTLDevice, MTLFunctionHandle;


#import "MTLType.h"
#import "MTLDebugInstrumentationData.h"

@interface _MTLFunction : MTLObjectWithLabel <MTLFunctionSPI>

 {
    NSArray *_vertexAttributes;
    NSArray *_functionConstants;
    NSDictionary *_functionConstantDictionary;
    NSObject<OS_dispatch_data> *_precompiledOutput;
    MTLType *_returnType;
    NSArray *_arguments;
    ? _functionConstantSpecializationHash;
    NSArray *_relocations;
}


@property NSArray *arguments;
@property (readonly) NSUInteger bitCodeOffset;
@property (nonatomic) unsigned char bitcodeType;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData; // ivar: _debugInstrumentationData
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (copy) NSString *filePath;
@property NSArray *functionConstants;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly, nonatomic) NSObject<MTLFunctionHandle> *functionHandle;
@property (readonly) NSObject<OS_dispatch_data> *functionInputs;
@property (readonly) NSUInteger functionType; // ivar: _functionType
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *importedLibraries; // ivar: _importedLibraries
@property (readonly) NSArray *importedSymbols; // ivar: _importedSymbols
@property (copy) NSString *label;
@property (readonly) *MTLLibraryData libraryData; // ivar: _libraryData
@property NSInteger lineNumber;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) BOOL needsFunctionConstantValues;
@property (readonly) NSUInteger options; // ivar: _options
@property (readonly) NSInteger patchControlPointCount;
@property (readonly) NSUInteger patchType;
@property NSData *pluginData;
@property NSObject<OS_dispatch_data> *precompiledOutput;
@property (copy, nonatomic) NSArray *relocations;
@property (readonly) NSUInteger renderTargetArrayIndexType;
@property MTLType *returnType;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) Class superclass;
@property (copy) NSString *unpackedFilePath; // ivar: _unpackedFilePath
@property (readonly) id *vendorPrivate; // ivar: _vendorPrivate
@property NSArray *vertexAttributes;


-(NSUInteger)bitCodeFileSize;
-(id)bitcodeData;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 libraryData:(struct MTLLibraryData *)arg2 device:(id)arg3 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 pipelineLibrary:(id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 binaryArchives:(id)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 functionReflection:(id)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 pipelineLibrary:(id)arg2 ;
-(id)newFunctionWithPluginData:(id)arg0 bitcodeType:(unsigned char)arg1 ;
-(id)reflectionWithOptions:(NSUInteger)arg0 ;
-(id)reflectionWithOptions:(NSUInteger)arg0 binaryArchives:(id)arg1 ;
-(id)reflectionWithOptions:(NSUInteger)arg0 pipelineLibrary:(id)arg1 ;
-(struct ? *)bitCodeHash;
-(struct ? *)functionConstantSpecializationHash;
-(unsigned int)functionRef;
-(void)dealloc;
-(void)reflectionWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif