// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMNUMBERRANGE_H
#define HMNUMBERRANGE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HMNumberRange : NSObject

@property (readonly, nonatomic) NSNumber *maxValue; // ivar: _maxValue
@property (readonly, nonatomic) NSNumber *minValue; // ivar: _minValue


+(id)numberRangeWithMaxValue:(id)arg0 ;
+(id)numberRangeWithMinValue:(id)arg0 ;
+(id)numberRangeWithMinValue:(id)arg0 maxValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMinValue:(id)arg0 maxValue:(id)arg1 ;


@end


#endif