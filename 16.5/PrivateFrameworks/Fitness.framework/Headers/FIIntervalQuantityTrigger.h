// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIINTERVALQUANTITYTRIGGER_H
#define FIINTERVALQUANTITYTRIGGER_H

@class HKQuantity, HKQuantityType, NSDate;

#import <Foundation/Foundation.h>

#import "FIQuantityTimeSlice.h"

@interface FIIntervalQuantityTrigger : NSObject {
    FIQuantityTimeSlice *_slice;
    HKQuantity *_threshold;
    BOOL _finalized;
    id *_completion;
}


@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) BOOL triggered;
@property (readonly, nonatomic) NSDate *triggeredDate; // ivar: _triggeredDate


-(id)_finalizedTriggerByAddingSample:(id)arg0 toSlice:(id)arg1 withPreviousTotal:(id)arg2 threshold:(id)arg3 ;
-(id)addingSample:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithQuantityTimeslice:(id)arg0 threshold:(id)arg1 triggeredDate:(id)arg2 ;
-(id)initWithQuantityType:(id)arg0 startDate:(id)arg1 threshold:(id)arg2 ;
-(id)settingTimeSlice:(id)arg0 ;


@end


#endif