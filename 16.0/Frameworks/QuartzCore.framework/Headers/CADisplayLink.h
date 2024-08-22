// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADISPLAYLINK_H
#define CADISPLAYLINK_H


#import <Foundation/Foundation.h>

#import "CADisplay.h"

@interface CADisplayLink : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) NSInteger actualFramesPerSecond;
@property (readonly, nonatomic) CADisplay *display;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) NSInteger frameInterval;
@property (readonly, nonatomic) CGFloat heartbeatRate;
@property unsigned int highFrameRateReason;
@property (readonly, nonatomic) CGFloat maximumRefreshRate;
@property (readonly, nonatomic) NSInteger minimumFrameDuration;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) CAFrameRateRange preferredFrameRateRange;
@property (nonatomic) NSInteger preferredFramesPerSecond;
@property (nonatomic) NSInteger priority;
@property (readonly, nonatomic) CGFloat targetTimestamp;
@property (readonly, nonatomic) CGFloat timestamp;
@property (nonatomic) CGFloat timingOffset;
@property (retain, nonatomic) id *userInfo;


+(BOOL)supportsExpectedWakeupBeforeCommitDeadline;
+(CGFloat)expectedWakeupBeforeCommitDeadline:(CGFloat)arg0 ;
+(NSInteger)willFireInfoVersion;
+(id)displayLinkWithDisplay:(id)arg0 target:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithTarget:(id)arg0 selector:(SEL)arg1 ;
+(void)dispatchDeferredDisplayLinks;
+(void)dispatchDeferredDisplayLinksWithDisplayId:(unsigned int)arg0 ;
+(void)setWillFireHandler:(id)arg0 ;
-(id)_initWithDisplayLinkItem:(*void)arg0 ;
-(void)addToRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;


@end


#endif