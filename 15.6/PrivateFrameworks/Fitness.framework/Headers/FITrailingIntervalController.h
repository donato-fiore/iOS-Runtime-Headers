// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FITRAILINGINTERVALCONTROLLER_H
#define FITRAILINGINTERVALCONTROLLER_H

@class NSArray, HKQuantityType, HKQuantity;

#import <Foundation/Foundation.h>


@interface FITrailingIntervalController : NSObject {
    NSArray *_slices;
    HKQuantityType *_quantityType;
    NSArray *_uncommittedSamples;
}


@property (readonly, nonatomic) CGFloat committedDuration;
@property (readonly, nonatomic) NSArray *pauseResumeEvents; // ivar: _pauseResumeEvents
@property (readonly, nonatomic) HKQuantity *quantity;
@property (retain, nonatomic) HKQuantity *threshold; // ivar: _threshold
@property (readonly, nonatomic) BOOL thresholdReached; // ivar: _thresholdReached


-(BOOL)addEvent:(id)arg0 withError:(*id)arg1 ;
-(CGFloat)activeDurationUntilDate:(id)arg0 ;
-(CGFloat)idleDurationUntilDate:(id)arg0 ;
-(id)initWithQuantityType:(id)arg0 threshold:(id)arg1 startDate:(id)arg2 ;
-(void)_addPauseEvent:(id)arg0 ;
-(void)_addResumeEvent:(id)arg0 ;
-(void)_determineAndProcessThresholdReached;
-(void)_processUncommittedSamples;
-(void)_updateSlicesWithSamples:(id)arg0 ;
-(void)addSample:(id)arg0 ;
-(void)addSamples:(id)arg0 ;


@end


#endif