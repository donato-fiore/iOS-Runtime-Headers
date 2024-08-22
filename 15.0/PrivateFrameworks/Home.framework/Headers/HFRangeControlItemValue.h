// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFRANGECONTROLITEMVALUE_H
#define HFRANGECONTROLITEMVALUE_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "HFNumberRange.h"

@interface HFRangeControlItemValue : NSObject

@property (copy, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (copy, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) HFNumberRange *numberRange;
@property (copy, nonatomic) NSNumber *targetValue; // ivar: _targetValue


+(id)targetValueWithValue:(id)arg0 ;
+(id)thresholdValueWithMinimumValue:(id)arg0 maximumValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif