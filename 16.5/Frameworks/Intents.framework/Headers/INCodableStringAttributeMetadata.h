// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCODABLESTRINGATTRIBUTEMETADATA_H
#define INCODABLESTRINGATTRIBUTEMETADATA_H

@class NSString;
@protocol INCodableAttributeDefaultValueProviding;


#import "INCodableAttributeMetadata.h"

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>



@property (nonatomic) NSInteger capitalization; // ivar: _capitalization
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultValue; // ivar: _defaultValue
@property (copy, nonatomic) NSString *defaultValueID; // ivar: _defaultValueID
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAutocorrect; // ivar: _disableAutocorrect
@property (nonatomic) BOOL disableSmartDashes; // ivar: _disableSmartDashes
@property (nonatomic) BOOL disableSmartQuotes; // ivar: _disableSmartQuotes
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedDefaultValue;
@property (nonatomic, getter=isMultiline) BOOL multiline; // ivar: _multiline
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionCapitalizationKey;
-(id)__INCodableDescriptionDefaultValueIDKey;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INCodableDescriptionDisableAutocorrectKey;
-(id)__INCodableDescriptionDisableSmartDashesKey;
-(id)__INCodableDescriptionDisableSmartQuotesKey;
-(id)__INCodableDescriptionMultilineKey;
-(id)__INIntentResponseCodableDescriptionCapitalizationKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
-(id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
-(id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
-(id)__INIntentResponseCodableDescriptionMultilineKey;
-(id)__INTypeCodableDescriptionCapitalizationKey;
-(id)__INTypeCodableDescriptionDefaultValueIDKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionDisableAutocorrectKey;
-(id)__INTypeCodableDescriptionDisableSmartDashesKey;
-(id)__INTypeCodableDescriptionDisableSmartQuotesKey;
-(id)__INTypeCodableDescriptionMultilineKey;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDefaultValueWithLocalizer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif