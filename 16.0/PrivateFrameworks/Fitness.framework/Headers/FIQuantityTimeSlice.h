// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIQUANTITYTIMESLICE_H
#define FIQUANTITYTIMESLICE_H

@class NSArray, NSDate, HKQuantity, HKQuantityType;

#import <Foundation/Foundation.h>


@interface FIQuantityTimeSlice : NSObject {
    NSArray *_uncommittedSamples;
    NSDate *_lastCommitDate;
}


@property (readonly, nonatomic) HKQuantity *committedAndAddedTotal;
@property (readonly, nonatomic) HKQuantity *committedTotal; // ivar: _committedTotal
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL finalized; // ivar: _finalized
@property (readonly, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)_commitingSamples:(id)arg0 toPreviousCommittedTotal:(id)arg1 untilDate:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)_totalByCommittingSample:(id)arg0 toPreviousTotal:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)addingSample:(id)arg0 error:(*id)arg1 ;
-(id)addingSamples:(id)arg0 error:(*id)arg1 ;
-(id)committingUntilDate:(id)arg0 ;
-(id)description;
-(id)initWithQuantityType:(id)arg0 startDate:(id)arg1 ;
-(id)initWithQuantityType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithQuantityType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 uncommitedSamples:(id)arg3 lastCommitDate:(id)arg4 committedTotal:(id)arg5 finalized:(BOOL)arg6 ;
-(id)settingEndDate:(id)arg0 ;


@end


#endif