// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINSPECTABLEVALUE_H
#define HKINSPECTABLEVALUE_H

@class NSNumber, NSArray, NSDateComponents, NSString;
@protocol NSSecureCoding, NSCopying, HKCodedObject, NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKConcept.h"
#import "HKCodedQuantity.h"
#import "HKCodedValueCollection.h"
#import "HKUCUMUnitDisplayConverter.h"
#import "HKMedicalDateInterval.h"
#import "HKMedicalDate.h"
#import "HKRatioValue.h"

@interface HKInspectableValue : NSObject <NSSecureCoding, NSCopying, HKCodedObject>

 {
    id<NSObject><NSSecureCoding> *_value;
    HKConcept *_concept;
    HKConcept *_dataAbsentReason;
}


@property (readonly, copy, nonatomic) NSNumber *booleanValue;
@property (readonly, copy, nonatomic) HKCodedQuantity *codedQuantityValue;
@property (readonly, copy, nonatomic) HKCodedValueCollection *codedValueCollection;
@property (readonly, copy, nonatomic) HKConcept *concept;
@property (readonly, nonatomic) HKUCUMUnitDisplayConverter *converter;
@property (readonly, copy, nonatomic) HKConcept *dataAbsentReason;
@property (readonly, copy, nonatomic) NSArray *dataAbsentReasonCodings;
@property (readonly, copy, nonatomic) NSDateComponents *dateComponentsValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *inspectableIntegerValue;
@property (readonly, copy, nonatomic) NSArray *medicalCodings;
@property (readonly, copy, nonatomic) HKMedicalDateInterval *medicalDateIntervalValue;
@property (readonly, copy, nonatomic) HKMedicalDate *medicalDateValue;
@property (readonly, copy, nonatomic) HKRatioValue *ratioValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unitString;
@property (readonly, nonatomic) NSObject<NSObject><NSSecureCoding> *value;
@property (readonly, nonatomic) NSInteger valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
+(id)indexableKeyPathsWithPrefix:(id)arg0 ;
+(id)inspectableValueWithBoolean:(id)arg0 ;
+(id)inspectableValueWithCodedQuantity:(id)arg0 ;
+(id)inspectableValueWithCodedValueCollection:(id)arg0 ;
+(id)inspectableValueWithDataAbsentReasonCodings:(id)arg0 ;
+(id)inspectableValueWithDateComponents:(id)arg0 ;
+(id)inspectableValueWithInteger:(id)arg0 ;
+(id)inspectableValueWithMedicalCodings:(id)arg0 ;
+(id)inspectableValueWithMedicalDate:(id)arg0 ;
+(id)inspectableValueWithMedicalDateInterval:(id)arg0 ;
+(id)inspectableValueWithNull;
+(id)inspectableValueWithRatio:(id)arg0 ;
+(id)inspectableValueWithString:(id)arg0 ;
+(id)inspectableValueWithValueType:(NSInteger)arg0 value:(id)arg1 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithValueType:(NSInteger)arg0 value:(id)arg1 ;
-(id)_unitStringForCodedValueCollection:(id)arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_assertValueClass:(Class)arg0 ;
-(void)_assertValueType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif