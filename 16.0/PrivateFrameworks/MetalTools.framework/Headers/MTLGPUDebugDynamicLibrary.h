// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGDYNAMICLIBRARY_H
#define MTLGPUDEBUGDYNAMICLIBRARY_H

@class NSString, MTLDebugInstrumentationData, NSArray;
@protocol MTLDynamicLibrarySPI, OS_dispatch_data, MTLDevice;


#import "MTLToolsDynamicLibrary.h"
#import "MTLGPUDebugImageData.h"

@interface MTLGPUDebugDynamicLibrary : MTLToolsDynamicLibrary <MTLDynamicLibrarySPI>



@property (readonly) NSObject<OS_dispatch_data> *binaryData;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSArray *exportedFunctions;
@property (readonly) NSArray *exportedVariables;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MTLGPUDebugImageData *imageData; // ivar: _imageData
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSString *installName;
@property (copy) NSString *label;
@property (readonly) NSString *libraryPath;
@property (readonly) *? libraryUUID;
@property (copy, nonatomic) NSArray *relocations;
@property (readonly, nonatomic) BOOL shaderValidationEnabled;
@property (readonly) Class superclass;


-(id)initWithDynamicLibrary:(id)arg0 device:(id)arg1 ;
-(void)dealloc;
-(void)prepareForUsage;


@end


#endif