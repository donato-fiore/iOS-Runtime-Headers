// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLDYNAMICLIBRARY_H
#define _MTLDYNAMICLIBRARY_H

@class MTLObjectWithLabel, NSString, NSArray;
@protocol MTLDynamicLibrarySPI, OS_dispatch_data, MTLDevice;


#import "MTLDynamicLibraryContainer.h"
#import "MTLDebugInstrumentationData.h"

@interface _MTLDynamicLibrary : MTLObjectWithLabel <MTLDynamicLibrarySPI>

 {
    MTLDynamicLibraryContainer *_container;
}


@property (readonly) NSObject<OS_dispatch_data> *binaryData;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSArray *exportedFunctions;
@property (readonly) NSArray *exportedVariables;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSString *installName;
@property (copy) NSString *label;
@property (readonly) NSString *libraryPath; // ivar: _libraryPath
@property (readonly) *? libraryUUID;
@property (copy, nonatomic) NSArray *relocations; // ivar: _relocations
@property (readonly, nonatomic) BOOL shaderValidationEnabled; // ivar: _shaderValidationEnabled
@property (readonly) Class superclass;


-(BOOL)serializeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)serializeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)airData;
-(id)container;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithLibrary:(id)arg0 binaryData:(id)arg1 device:(id)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 device:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif