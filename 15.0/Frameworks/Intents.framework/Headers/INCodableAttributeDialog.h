// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLEATTRIBUTEDIALOG_H
#define INCODABLEATTRIBUTEDIALOG_H

@class NSString;
@protocol NSSecureCoding, NSCopying, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INCodableAttribute.h"
#import "INCodableDescription.h"

@interface INCodableAttributeDialog : NSObject <NSSecureCoding, NSCopying, INCodableCoding>



@property (weak, nonatomic, setter=_setCodableAttribute:) INCodableAttribute *_codableAttribute; // ivar: _codableAttribute
@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDefaultDialog) BOOL defaultDialog; // ivar: _defaultDialog
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *formatString; // ivar: _formatString
@property (copy, nonatomic) NSString *formatStringID; // ivar: _formatStringID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringIDKey;
-(id)__INCodableDescriptionFormatStringKey;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDialogWithIntent:(id)arg0 tokens:(id)arg1 ;
-(id)localizedDialogWithIntent:(id)arg0 tokens:(id)arg1 forLanguage:(id)arg2 ;
-(id)localizedDialogWithIntent:(id)arg0 tokens:(id)arg1 localizer:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif