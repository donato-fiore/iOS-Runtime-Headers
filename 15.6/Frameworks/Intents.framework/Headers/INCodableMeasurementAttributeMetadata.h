// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCODABLEMEASUREMENTATTRIBUTEMETADATA_H
#define INCODABLEMEASUREMENTATTRIBUTEMETADATA_H

@class NSString, NSOrderedSet, NSUnit;
@protocol INCodableAttributeDefaultValueProviding;


#import "INCodableAttributeMetadata.h"

@interface INCodableMeasurementAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSOrderedSet *defaultUnits; // ivar: _defaultUnits
@property (nonatomic) CGFloat defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsNegativeNumbers; // ivar: _supportsNegativeNumbers
@property (retain, nonatomic) NSUnit *unit; // ivar: _unit


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionDefaultUnitKey;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INCodableDescriptionUnitKey;
-(id)__INIntentResponseCodableDescriptionDefaultUnitKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INIntentResponseCodableDescriptionUnitKey;
-(id)__INTypeCodableDescriptionDefaultUnitKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INTypeCodableDescriptionUnitKey;
-(id)_defaultUnitWithNames:(id)arg0 ;
-(id)_unitWithUnitName:(id)arg0 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif