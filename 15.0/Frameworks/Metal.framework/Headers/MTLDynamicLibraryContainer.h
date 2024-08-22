// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDYNAMICLIBRARYCONTAINER_H
#define MTLDYNAMICLIBRARYCONTAINER_H

@class NSArray, NSString, NSData;
@protocol MTLDevice, OS_dispatch_data;

#import <Foundation/Foundation.h>

#import "MTLLoadedFile.h"
#import "MTLDebugInstrumentationData.h"

@interface MTLDynamicLibraryContainer : NSObject {
    MTLLoadedFile *_fileMapping;
    id<MTLDevice> *_device;
    NSObject<OS_dispatch_data> *_vendorData;
    NSArray *_exportedFunctions;
    NSArray *_exportedVariables;
    NSArray *_importedSymbols;
    NSArray *_importedLibraries;
    NSString *_installName;
    NSData *_airData;
    NSUInteger _airOffset;
    NSUInteger _airSize;
    int _airVersion;
    ? _libraryUUID;
    MTLDebugInstrumentationData *_debugInstrumentationData;
}




-(BOOL)serializeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)airData;
-(id)initWithLibrary:(struct MTLLibraryData *)arg0 binaryData:(id)arg1 device:(id)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 device:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)release;


@end


#endif