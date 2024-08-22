// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWIOSURFACEPOLLER_H
#define BWIOSURFACEPOLLER_H

@class NSMutableArray;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface BWIOSurfacePoller : NSObject {
    NSObject<OS_dispatch_source> *_pollingTimer;
    os_unfair_lock_s _trackedSurfacesLock;
    NSMutableArray *_trackedSurfaces;
}




+(id)defaultPoller;
+(void)trackSurface:(struct __IOSurface *)arg0 useCountIsZeroHandler:(id)arg1 ;
-(id)init;
-(void)_pollingTimerFired;
-(void)_startPolling;
-(void)_stopPolling;
-(void)dealloc;
-(void)trackSurface:(struct __IOSurface *)arg0 useCountIsZeroHandler:(id)arg1 ;


@end


#endif