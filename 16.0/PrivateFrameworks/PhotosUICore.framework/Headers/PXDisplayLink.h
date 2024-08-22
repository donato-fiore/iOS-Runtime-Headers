// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISPLAYLINK_H
#define PXDISPLAYLINK_H

@class CADisplayLink, NSString;
@protocol PXDisplayLinkProtocol;

#import <Foundation/Foundation.h>


@interface PXDisplayLink : NSObject <PXDisplayLinkProtocol>

 {
    CADisplayLink *_displayLink;
    CGFloat _updateCycleTimestamp;
    CGFloat _updateCycleTargetTimestamp;
}


@property (readonly, nonatomic) CGFloat currentMediaTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) NSUInteger frameRateRangeType; // ivar: _frameRateRangeType
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) BOOL isHighFrameRateActive; // ivar: _isHighFrameRateActive
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) NSInteger preferredFramesPerSecond;
@property (readonly, nonatomic) NSString *runloopModes; // ivar: _runloopModes
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) CGFloat targetTimestamp;
@property (readonly, nonatomic) CGFloat timestamp;


+(BOOL)highFramerateRequiresReasonAndRange;
-(id)init;
-(id)initWithWeakTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)initWithWeakTarget:(id)arg0 selector:(SEL)arg1 deferredStart:(BOOL)arg2 ;
-(id)initWithWeakTarget:(id)arg0 selector:(SEL)arg1 deferredStart:(BOOL)arg2 runloopModes:(id)arg3 preferredFramesPerSecond:(NSInteger)arg4 ;
-(void)_addToRunLoop;
-(void)_tick:(id)arg0 ;
-(void)_updateIsHighFrameRateActive;
-(void)dealloc;
-(void)invalidate;


@end


#endif