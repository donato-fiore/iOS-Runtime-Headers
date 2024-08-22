// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCODABLEATTRIBUTEPROMPTDIALOG_H
#define INCODABLEATTRIBUTEPROMPTDIALOG_H



#import "INCodableAttributeDialog.h"

@interface INCodableAttributePromptDialog : INCodableAttributeDialog

@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringIDKey;
-(id)__INCodableDescriptionFormatStringKey;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif