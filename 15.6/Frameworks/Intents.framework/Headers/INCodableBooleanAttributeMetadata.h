// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCODABLEBOOLEANATTRIBUTEMETADATA_H
#define INCODABLEBOOLEANATTRIBUTEMETADATA_H

@class NSString, NSNumber;
@protocol INCodableAttributeDefaultValueProviding;


#import "INCodableAttributeMetadata.h"

@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *falseDisplayName; // ivar: _falseDisplayName
@property (copy, nonatomic) NSString *falseDisplayNameID; // ivar: _falseDisplayNameID
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedFalseDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedTrueDisplayName;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *trueDisplayName; // ivar: _trueDisplayName
@property (copy, nonatomic) NSString *trueDisplayNameID; // ivar: _trueDisplayNameID


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INCodableDescriptionFalseDisplayNameIDKey;
-(id)__INCodableDescriptionFalseDisplayNameKey;
-(id)__INCodableDescriptionTrueDisplayNameIDKey;
-(id)__INCodableDescriptionTrueDisplayNameKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionFalseDisplayNameIDKey;
-(id)__INIntentResponseCodableDescriptionFalseDisplayNameKey;
-(id)__INIntentResponseCodableDescriptionTrueDisplayNameIDKey;
-(id)__INIntentResponseCodableDescriptionTrueDisplayNameKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionFalseDisplayNameIDKey;
-(id)__INTypeCodableDescriptionFalseDisplayNameKey;
-(id)__INTypeCodableDescriptionTrueDisplayNameIDKey;
-(id)__INTypeCodableDescriptionTrueDisplayNameKey;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedFalseDisplayNameWithLocalizer:(id)arg0 ;
-(id)localizedTrueDisplayNameWithLocalizer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif