// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNETADISPLAYFORMATTER_H
#define MNETADISPLAYFORMATTER_H

@class NSTimeZone, NSDate;
@protocol MNETADisplayFormatterDelegate;

#import <Foundation/Foundation.h>

#import "MNWeakTimer.h"

@interface MNETADisplayFormatter : NSObject {
    NSTimeZone *_timeZone;
    MNWeakTimer *_updateTimer;
}


@property (weak, nonatomic) NSObject<MNETADisplayFormatterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDate *displayETAToEndOfLeg; // ivar: _displayETAToEndOfLeg
@property (readonly, nonatomic) NSDate *displayETAToEndOfRoute; // ivar: _displayETAToEndOfRoute
@property (readonly, nonatomic) CGFloat displayRemainingTimeToEndOfLeg; // ivar: _displayRemainingTimeToEndOfLeg
@property (readonly, nonatomic) CGFloat displayRemainingTimeToEndOfRoute; // ivar: _displayRemainingTimeToEndOfRoute
@property (nonatomic) CGFloat remainingTimeToEndOfLeg; // ivar: _remainingTimeToEndOfLeg
@property (nonatomic) CGFloat remainingTimeToEndOfRoute; // ivar: _remainingTimeToEndOfRoute


-(CGFloat)_displayTimeIntervalForTimeInterval:(CGFloat)arg0 ;
-(id)_displayDateWithRemainingTime:(CGFloat)arg0 ;
-(id)initWithTimeZone:(id)arg0 ;
-(void)_scheduleUpdateTimer;
-(void)_updateDisplayETA;
-(void)_updateTimerFired;
-(void)dealloc;


@end


#endif