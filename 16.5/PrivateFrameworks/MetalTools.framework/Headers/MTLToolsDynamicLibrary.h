// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTOOLSDYNAMICLIBRARY_H
#define MTLTOOLSDYNAMICLIBRARY_H

@class NSArray, NSString, MTLDebugInstrumentationData;
@protocol MTLDynamicLibrarySPI, OS_dispatch_data, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsDynamicLibrary : MTLToolsObject <MTLDynamicLibrarySPI>

 {
    NSArray *_relocations;
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
@property (readonly) NSString *libraryPath;
@property (readonly) *? libraryUUID;
@property (copy, nonatomic) NSArray *relocations;
@property (readonly, nonatomic) BOOL shaderValidationEnabled;
@property (readonly) Class superclass;


-(BOOL)serializeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)serializeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif