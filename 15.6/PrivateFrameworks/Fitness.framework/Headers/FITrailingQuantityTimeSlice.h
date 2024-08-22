// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FITRAILINGQUANTITYTIMESLICE_H
#define FITRAILINGQUANTITYTIMESLICE_H

@class NSArray, NSDate, HKQuantity, HKQuantityType;

#import <Foundation/Foundation.h>


@interface FITrailingQuantityTimeSlice : NSObject {
    NSArray *_uncommittedSamples;
    NSDate *_lastCommitDate;
}


@property (readonly, nonatomic) HKQuantity *committedAndAddedTotal;
@property (readonly, nonatomic) CGFloat committedDuration;
@property (readonly, nonatomic) NSArray *committedSamples; // ivar: _committedSamples
@property (readonly, nonatomic) HKQuantity *committedTotal; // ivar: _committedTotal
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL finalized; // ivar: _finalized
@property (readonly, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(CGFloat)activeDurationUntilDate:(id)arg0 ;
-(id)_commitingSamples:(id)arg0 toPreviousCommittedTotal:(id)arg1 toPreviousCommittedSamples:(id)arg2 untilDate:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)_totalByCommittingSample:(id)arg0 toPreviousTotal:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)addingSample:(id)arg0 error:(*id)arg1 ;
-(id)addingSamples:(id)arg0 error:(*id)arg1 ;
-(id)autoCommitDateForSamples:(id)arg0 ;
-(id)committingUntilDate:(id)arg0 ;
-(id)description;
-(id)initWithQuantityType:(id)arg0 startDate:(id)arg1 ;
-(id)initWithQuantityType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithQuantityType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 committedSamples:(id)arg3 uncommittedSamples:(id)arg4 lastCommitDate:(id)arg5 committedTotal:(id)arg6 finalized:(BOOL)arg7 ;
-(id)settingEndDate:(id)arg0 ;
-(id)settingStartDate:(id)arg0 ;
-(id)settingTotalQuantityLimit:(id)arg0 ;


@end


#endif