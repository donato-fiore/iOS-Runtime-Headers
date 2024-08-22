// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISAVPLAYER_H
#define ISAVPLAYER_H

@class AVPlayer;
@protocol OS_dispatch_queue;


#import "ISRateCurveRequest.h"

@interface ISAVPlayer : AVPlayer {
    ISRateCurveRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_initializedDispatchQueue;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *actualDispatchQueue; // ivar: _actualDispatchQueue


+(BOOL)isAppleInternal;
+(BOOL)isSpringBoard;
-(id)dispatchQueue;
-(id)init;
-(id)initWithDispatchQueue:(id)arg0 ;
-(void)_cancelRateCurveRequest;
-(void)_setRate:(float)arg0 ;
-(void)dealloc;
-(void)playToTime:(struct ? )arg0 withInitialRate:(float)arg1 overDuration:(CGFloat)arg2 progressHandler:(id)arg3 ;
-(void)setAllowsPixelBufferPoolSharing:(BOOL)arg0 ;
-(void)setRate:(float)arg0 ;
-(void)setUsesDedicatedNotificationQueueForMediaServices:(BOOL)arg0 ;


@end


#endif