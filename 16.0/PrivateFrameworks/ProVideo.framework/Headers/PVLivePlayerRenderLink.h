// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVLIVEPLAYERRENDERLINK_H
#define PVLIVEPLAYERRENDERLINK_H


#import <Foundation/Foundation.h>

#import "PVLivePlayer.h"

@interface PVLivePlayerRenderLink : NSObject {
    ? _lastTime;
    unsigned int _throttledFPS;
    *HGSynchronizable _lock;
    PVLivePlayer *_player;
}




-(BOOL)setThrottledFPS:(unsigned int)arg0 ;
-(BOOL)skipThrottledRenderLinkTime:(struct ? )arg0 ;
-(id)init;
-(unsigned int)_throttledRenderLinkFPS_NoLock;
-(unsigned int)thermalPolicyThrottledFPS;
-(unsigned int)throttledFPS;
-(void)dealloc;
-(void)rebuild;
-(void)registerWithPlayer:(id)arg0 ;
-(void)signalDroppedRenderLink;
-(void)signalPlayer:(struct ? )arg0 ;
-(void)teardown;


@end


#endif