// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKVALUERANGE_H
#define HKVALUERANGE_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKValueRange : NSObject <NSCopying>



@property (readonly, nonatomic) NSDate *endDate;
@property (copy, nonatomic) id *maxValue; // ivar: _maxValue
@property (copy, nonatomic) id *minValue; // ivar: _minValue
@property (readonly, nonatomic) NSDate *startDate;


+(id)valueRangeWithMinValue:(id)arg0 maxValue:(id)arg1 ;
-(BOOL)containsValue:(id)arg0 exclusiveStart:(BOOL)arg1 exclusiveEnd:(BOOL)arg2 ;
-(BOOL)hk_animatable;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)hk_midPointToValue:(id)arg0 percentage:(CGFloat)arg1 ;
-(void)unionMaxValueWithRange:(id)arg0 ;
-(void)unionMinValueWithRange:(id)arg0 ;
-(void)unionRange:(id)arg0 ;


@end


#endif