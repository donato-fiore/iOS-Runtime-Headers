// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCODABLEATTRIBUTEUNSUPPORTEDREASON_H
#define INCODABLEATTRIBUTEUNSUPPORTEDREASON_H

@class NSString;


#import "INCodableAttributeDialog.h"

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog

@property (copy, nonatomic) NSString *code; // ivar: _code
@property (readonly, copy, nonatomic) NSString *predicateFormat;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)__INCodableDescriptionCodeKey;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringIDKey;
-(id)__INCodableDescriptionFormatStringKey;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionCodeKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INTypeCodableDescriptionCodeKey;
-(id)__INTypeCodableDescriptionKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif