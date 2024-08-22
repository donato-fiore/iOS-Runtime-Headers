// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXMSAMPLEATTRIBUTEFILTER_H
#define MXMSAMPLEATTRIBUTEFILTER_H

@class NSArray, NSNumber, NSSet, NSString;
@protocol NSCopying, NSSecureCoding;


#import "MXMSampleAttribute.h"

@interface MXMSampleAttributeFilter : MXMSampleAttribute <NSCopying, NSSecureCoding>

 {
    NSArray *_matchingStringAttributeValues;
    NSArray *_matchingNumericAttributeValues;
}


@property (readonly, nonatomic) BOOL finite;
@property (readonly, nonatomic, getter=finite) BOOL isFinite;
@property (readonly, copy, nonatomic) NSNumber *numericValue;
@property (readonly, copy, nonatomic) NSSet *numericValues;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSSet *stringValues;
@property (readonly, copy, nonatomic) id *value;
@property (readonly, copy, nonatomic) NSSet *values;


+(BOOL)supportsSecureCoding;
-(BOOL)_matchesSampleAttributeNameWithName:(id)arg0 ;
-(BOOL)_matchesSampleAttributeValueTypeWithAttributeValueType:(NSInteger)arg0 ;
-(BOOL)_matchesSampleAttributeValueWithValue:(id)arg0 ;
-(BOOL)matchesSampleWithAttribute:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttribute:(id)arg0 ;
-(id)initWithAttributeName:(id)arg0 numericValue:(id)arg1 ;
-(id)initWithAttributeName:(id)arg0 numericValues:(id)arg1 ;
-(id)initWithAttributeName:(id)arg0 stringValue:(id)arg1 ;
-(id)initWithAttributeName:(id)arg0 stringValues:(id)arg1 ;
-(id)initWithAttributeName:(id)arg0 valueType:(NSInteger)arg1 value:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif