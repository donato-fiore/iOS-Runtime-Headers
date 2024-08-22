// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VFXSCENELOADOPTIONS_H
#define VFXSCENELOADOPTIONS_H

@class NSString, NSURL;
@protocol MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>


@interface VFXSceneLoadOptions : NSObject {
    ? clientID;
    ? metalLibraryURL;
    ? systemRegistrationOptions;
}


@property (nonatomic) BOOL allowLoadingFromFuture; // ivar: allowLoadingFromFuture
@property (nonatomic) BOOL automaticallyPrepareScene; // ivar: automaticallyPrepareScene
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, retain) NSObject<MTLCommandQueue> *commandQueue; // ivar: commandQueue
@property (nonatomic, retain) NSObject<MTLDevice> *device; // ivar: device
@property (nonatomic) BOOL enableParallelDecoding; // ivar: enableParallelDecoding
@property (nonatomic) BOOL enableRuntimeScriptCompilation; // ivar: enableRuntimeScriptCompilation
@property (nonatomic) BOOL loadBindingsMetadata; // ivar: loadBindingsMetadata
@property (nonatomic, copy) NSURL *metalLibraryURL;
@property (nonatomic) BOOL setupAsTemplate; // ivar: setupAsTemplate
@property (nonatomic) BOOL setupAsyncRuntime; // ivar: setupAsyncRuntime
@property (nonatomic) BOOL setupRenderer; // ivar: setupRenderer


-(id)init;


@end


#endif