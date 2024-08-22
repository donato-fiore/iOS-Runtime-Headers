// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICAUTODISMISSALSTRATEGY_H
#define SUICAUTODISMISSALSTRATEGY_H

@class NSNumber;
@protocol SUICAutoDismissalStrategyDelegate;

#import <Foundation/Foundation.h>


@interface SUICAutoDismissalStrategy : NSObject {
    NSNumber *_lastShouldDismissValue;
}


@property (nonatomic) NSInteger autoDismissalReason; // ivar: _autoDismissalReason
@property (weak, nonatomic) NSObject<SUICAutoDismissalStrategyDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL deviceSupportsFaceDetection; // ivar: _deviceSupportsFaceDetection
@property (readonly, nonatomic) BOOL deviceSupportsRaiseGestureDetection; // ivar: _deviceSupportsRaiseGestureDetection
@property (readonly, nonatomic) CGFloat extendedIdleTimeout; // ivar: _extendedIdleTimeout
@property (readonly, nonatomic) CGFloat idleTimeInterval; // ivar: _idleTimeInterval
@property (readonly, nonatomic) CGFloat idleTimeout; // ivar: _idleTimeout
@property (nonatomic) NSInteger latestDeviceMotionEvent; // ivar: _latestDeviceMotionEvent
@property (nonatomic) NSInteger latestFaceAwarenessEvent; // ivar: _latestFaceAwarenessEvent
@property (readonly, nonatomic) BOOL shouldDismiss; // ivar: _shouldDismiss
@property (nonatomic) BOOL userInteractedWithTouchIDSensor; // ivar: _userInteractedWithTouchIDSensor
@property (nonatomic) BOOL userInteractedWithTouchScreen; // ivar: _userInteractedWithTouchScreen
@property (nonatomic, getter=isVideoPlaying) BOOL videoPlaying; // ivar: _videoPlaying
@property (readonly, nonatomic) CGFloat viewRequiringExtendedTimeoutStartTime; // ivar: _viewRequiringExtendedTimeoutStartTime
@property (nonatomic, getter=isViewRequiringExtendedTimeoutVisible) BOOL viewRequiringExtendedTimeoutVisible; // ivar: _viewRequiringExtendedTimeoutVisible


-(id)initWithIdleTimeout:(CGFloat)arg0 extendedIdleTimeout:(CGFloat)arg1 deviceSupportsFaceDetection:(BOOL)arg2 deviceSupportsRaiseGestureDetection:(BOOL)arg3 ;
-(void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeeded;
-(void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeededPermanent:(BOOL)arg0 ;


@end


#endif