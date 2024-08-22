// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKUIMETALRESOURCEMANAGER_H
#define CLKUIMETALRESOURCEMANAGER_H

@protocol MTLDevice, MTLTexture;


#import "CLKUIResourceManager.h"

@interface CLKUIMetalResourceManager : CLKUIResourceManager {
    id<MTLDevice> *_device;
    id<MTLTexture> *_nilTexture;
}




+(id)sharedCommandQueue;
+(id)sharedDevice;
+(id)sharedMetalInstance;
+(id)sharedNilTexture;
+(void)addCompletedErrorCheckToCommandBuffer:(id)arg0 forCase:(id)arg1 ;
-(id)_newAtlasForUuid:(id)arg0 ;
-(id)init;
-(void)_purgeAtlases:(id)arg0 ;


@end


#endif