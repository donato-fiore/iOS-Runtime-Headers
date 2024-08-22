// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDWORKOUTSTATISTICS_H
#define _HDWORKOUTSTATISTICS_H

@class HKQuantity, HKQuantityType;

#import <Foundation/Foundation.h>


@interface _HDWorkoutStatistics : NSObject

@property (readonly, copy, nonatomic) HKQuantity *max; // ivar: _max
@property (readonly, copy, nonatomic) HKQuantity *min; // ivar: _min
@property (readonly, copy, nonatomic) HKQuantity *quantity; // ivar: _quantity
@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType


-(id)initWithQuantityType:(id)arg0 quantity:(id)arg1 min:(id)arg2 max:(id)arg3 ;


@end


#endif