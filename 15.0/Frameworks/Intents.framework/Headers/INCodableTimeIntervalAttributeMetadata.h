// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLETIMEINTERVALATTRIBUTEMETADATA_H
#define INCODABLETIMEINTERVALATTRIBUTEMETADATA_H

@class NSString, NSNumber;
@protocol INCodableAttributeDefaultValueProviding;


#import "INCodableAttributeMetadata.h"

@interface INCodableTimeIntervalAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultUnit; // ivar: _defaultUnit
@property (retain, nonatomic) NSNumber *defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maximumUnit; // ivar: _maximumUnit
@property (retain, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (nonatomic) NSInteger minimumUnit; // ivar: _minimumUnit
@property (retain, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionDefaultUnitKey;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INCodableDescriptionMaximumUnitKey;
-(id)__INCodableDescriptionMaximumValueKey;
-(id)__INCodableDescriptionMinimumUnitKey;
-(id)__INCodableDescriptionMinimumValueKey;
-(id)__INCodableDescriptionUnitKey;
-(id)__INIntentResponseCodableDescriptionDefaultUnitKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionMaximumUnitKey;
-(id)__INIntentResponseCodableDescriptionMaximumValueKey;
-(id)__INIntentResponseCodableDescriptionMinimumUnitKey;
-(id)__INIntentResponseCodableDescriptionMinimumValueKey;
-(id)__INIntentResponseCodableDescriptionUnitKey;
-(id)__INTypeCodableDescriptionDefaultUnitKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionMaximumUnitKey;
-(id)__INTypeCodableDescriptionMaximumValueKey;
-(id)__INTypeCodableDescriptionMinimumUnitKey;
-(id)__INTypeCodableDescriptionMinimumValueKey;
-(id)__INTypeCodableDescriptionUnitKey;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif