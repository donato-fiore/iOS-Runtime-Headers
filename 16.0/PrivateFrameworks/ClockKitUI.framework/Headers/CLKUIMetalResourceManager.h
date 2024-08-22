// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKUIMETALRESOURCEMANAGER_H
#define CLKUIMETALRESOURCEMANAGER_H

@protocol MTLDevice, MTLTexture;


#import "CLKUIResourceManager.h"

@interface CLKUIMetalResourceManager : CLKUIResourceManager {
    id<MTLDevice> *_device;
    id<MTLTexture> *_nilTexture2D;
    id<MTLTexture> *_nilTextureCube;
}




+(id)sharedCommandQueue;
+(id)sharedDevice;
+(id)sharedMetalInstance;
+(id)sharedNilTexture2D;
+(id)sharedNilTextureCube;
+(void)addCompletedErrorCheckToCommandBuffer:(id)arg0 forCase:(id)arg1 ;
-(id)_newAtlasForUuid:(id)arg0 nilTexture:(id)arg1 ;
-(id)_newAtlasForUuid:(id)arg0 nullTexture:(id)arg1 ;
-(id)init;
-(id)nullAtlas2D;
-(id)nullAtlasCube;
-(void)_purgeAtlases:(id)arg0 ;


@end


#endif