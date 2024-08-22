// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCODABLENUMBERATTRIBUTEMETADATA_H
#define INCODABLENUMBERATTRIBUTEMETADATA_H

@class NSString, NSNumber;
@protocol INCodableAttributeDefaultValueProviding;


#import "INCodableAttributeMetadata.h"

@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (retain, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsNegativeNumbers;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INCodableDescriptionMaximumValueKey;
-(id)__INCodableDescriptionMinimumValueKey;
-(id)__INCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionMaximumValueKey;
-(id)__INIntentResponseCodableDescriptionMinimumValueKey;
-(id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionMaximumValueKey;
-(id)__INTypeCodableDescriptionMinimumValueKey;
-(id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)_localizedDialogTokensWithLocalizer:(id)arg0 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif