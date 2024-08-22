// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCODABLEATTRIBUTEMETADATA_H
#define INCODABLEATTRIBUTEMETADATA_H

@class NSString;
@protocol NSSecureCoding, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INCodableDescription.h"
#import "INCodableLocalizationTable.h"
#import "INCodableAttribute.h"

@interface INCodableAttributeMetadata : NSObject <NSSecureCoding, INCodableCoding>



@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (readonly, copy, nonatomic) INCodableLocalizationTable *_localizationTable;
@property (readonly, weak, nonatomic) INCodableAttribute *codableAttribute; // ivar: _codableAttribute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedPlaceholder;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *placeholderID; // ivar: _placeholderID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionPlaceholderIDKey;
-(id)__INCodableDescriptionPlaceholderKey;
-(id)__INIntentResponseCodableDescriptionPlaceholderIDKey;
-(id)__INIntentResponseCodableDescriptionPlaceholderKey;
-(id)__INTypeCodableDescriptionPlaceholderIDKey;
-(id)__INTypeCodableDescriptionPlaceholderKey;
-(id)_localizedDialogTokensWithLocalizer:(id)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 codableAttribute:(id)arg1 ;
-(id)localizedPlaceholderWithLocalizer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif