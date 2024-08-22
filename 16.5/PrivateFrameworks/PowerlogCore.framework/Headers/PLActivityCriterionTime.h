// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACTIVITYCRITERIONTIME_H
#define PLACTIVITYCRITERIONTIME_H



#import "PLActivityCriterion.h"
#import "PLMonotonicTimer.h"

@interface PLActivityCriterionTime : PLActivityCriterion

@property CGFloat interval; // ivar: _interval
@property (nonatomic) CGFloat rescheduleDelay; // ivar: _rescheduleDelay
@property (retain) PLMonotonicTimer *timer; // ivar: _timer


+(CGFloat)minTimeInterval;
+(id)timeCriterionWithInterval:(CGFloat)arg0 ;
-(id)description;
-(id)initWithInterval:(CGFloat)arg0 ;
-(void)dealloc;
-(void)didCompleteActivity:(id)arg0 ;
-(void)didDisableActivity:(id)arg0 ;
-(void)didEnableActivity:(id)arg0 ;
-(void)didInterruptActivity:(id)arg0 ;


@end


#endif