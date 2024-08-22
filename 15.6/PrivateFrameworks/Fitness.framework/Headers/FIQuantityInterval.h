// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIQUANTITYINTERVAL_H
#define FIQUANTITYINTERVAL_H

@class NSDate, HKQuantity, HKQuantityType;

#import <Foundation/Foundation.h>

#import "FIIntervalDefinition.h"

@interface FIQuantityInterval : NSObject

@property (readonly, nonatomic) FIIntervalDefinition *definition; // ivar: _definition
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) HKQuantity *threshold; // ivar: _threshold
@property (readonly, nonatomic) HKQuantityType *trackedQuantityType; // ivar: _trackedQuantityType


-(id)initWithIntervalDefinition:(id)arg0 activityType:(NSUInteger)arg1 startDate:(id)arg2 ;


@end


#endif