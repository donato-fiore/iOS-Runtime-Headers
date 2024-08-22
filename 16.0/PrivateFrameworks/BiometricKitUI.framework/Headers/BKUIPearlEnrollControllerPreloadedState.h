// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIPEARLENROLLCONTROLLERPRELOADEDSTATE_H
#define BKUIPEARLENROLLCONTROLLERPRELOADEDSTATE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "BKUIPearlAudioSession.h"
#import "BKUIPearlVideoCaptureSession.h"

@interface BKUIPearlEnrollControllerPreloadedState : NSObject {
    NSArray *_cachedEntryAnimationImages;
    BKUIPearlAudioSession *_cachedAudioSession;
    BKUIPearlVideoCaptureSession *_cachedVideoCaptureSession;
}




-(id)acquireCachedAudioSession;
-(id)acquireCachedEntryAnimationImages;
-(id)acquireCachedVideoCaptureSession;
-(void)cacheAudioSession:(id)arg0 ;
-(void)cacheEntryAnimationImages:(id)arg0 ;
-(void)cacheVideoCaptureSession:(id)arg0 ;


@end


#endif