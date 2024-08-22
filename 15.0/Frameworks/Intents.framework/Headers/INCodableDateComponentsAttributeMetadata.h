// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLEDATECOMPONENTSATTRIBUTEMETADATA_H
#define INCODABLEDATECOMPONENTSATTRIBUTEMETADATA_H

@class NSString;


#import "INCodableAttributeMetadata.h"

@interface INCodableDateComponentsAttributeMetadata : INCodableAttributeMetadata

@property (readonly, nonatomic) NSUInteger dateStyle; // ivar: _dateStyle
@property (readonly, nonatomic) NSInteger format; // ivar: _format
@property (readonly, copy, nonatomic) NSString *formatString; // ivar: _formatString
@property (readonly, copy, nonatomic) NSString *formatStringID; // ivar: _formatStringID
@property (readonly, nonatomic) NSUInteger timeStyle; // ivar: _timeStyle
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionDateStyleKey;
-(id)__INCodableDescriptionFormatKey;
-(id)__INCodableDescriptionTemplateIDKey;
-(id)__INCodableDescriptionTemplateKey;
-(id)__INCodableDescriptionTimeStyleKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionDateStyleKey;
-(id)__INIntentResponseCodableDescriptionFormatKey;
-(id)__INIntentResponseCodableDescriptionTemplateIDKey;
-(id)__INIntentResponseCodableDescriptionTemplateKey;
-(id)__INIntentResponseCodableDescriptionTimeStyleKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionDateStyleKey;
-(id)__INTypeCodableDescriptionFormatKey;
-(id)__INTypeCodableDescriptionTemplateIDKey;
-(id)__INTypeCodableDescriptionTemplateKey;
-(id)__INTypeCodableDescriptionTimeStyleKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedFormatString;
-(id)localizedFormatStringWithLocalizer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif