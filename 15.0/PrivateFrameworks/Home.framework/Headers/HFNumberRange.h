// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFNUMBERRANGE_H
#define HFNUMBERRANGE_H

@class NSString, NSNumber;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFNumberRange : NSObject <NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? floatRangeValue;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *maxValue; // ivar: _maxValue
@property (copy, nonatomic) NSNumber *midValue; // ivar: _midValue
@property (copy, nonatomic) NSNumber *minValue; // ivar: _minValue
@property (readonly, copy, nonatomic) NSNumber *spanValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)na_identity;
+(id)rangeWithFloatRange:(struct ? )arg0 ;
+(id)rangeWithMaxValue:(id)arg0 minValue:(id)arg1 ;
+(id)valueWithValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)intersectRange:(id)arg0 ;
-(id)mapValue:(id)arg0 fromRange:(id)arg1 ;
-(id)percentageValueForValue:(id)arg0 ;
-(id)unionRange:(id)arg0 ;


@end


#endif