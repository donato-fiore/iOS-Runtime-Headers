// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINSPECTABLEVALUEINRANGE_H
#define HKINSPECTABLEVALUEINRANGE_H

@class NSDate, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKInspectableValueCollection.h"
#import "HKInspectableValue.h"

@interface HKInspectableValueInRange : NSObject <NSSecureCoding>



@property (readonly, nonatomic) HKInspectableValueCollection *currentValue; // ivar: _currentValue
@property (readonly, nonatomic) NSInteger currentValueRelation;
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL hasRenderableContent;
@property (readonly, nonatomic) HKInspectableValue *highValue; // ivar: _highValue
@property (readonly, nonatomic) NSNumber *highValueNumberRepresentation;
@property (readonly, nonatomic) HKInspectableValue *lowValue; // ivar: _lowValue
@property (readonly, nonatomic) NSNumber *lowValueNumberRepresentation;
@property (readonly, copy, nonatomic) NSString *unitString; // ivar: _unitString


+(BOOL)supportsSecureCoding;
+(id)valueInRangeWithLow:(id)arg0 high:(id)arg1 currentValue:(id)arg2 unit:(id)arg3 ;
-(id)_initValueInRangeWithLow:(id)arg0 high:(id)arg1 currentValue:(id)arg2 unit:(id)arg3 ;
-(id)_numberForValue:(id)arg0 ;
-(id)_numberForValueCollection:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_assertValidRange;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif