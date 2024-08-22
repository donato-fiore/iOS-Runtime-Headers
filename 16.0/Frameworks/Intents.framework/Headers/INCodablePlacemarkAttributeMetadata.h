// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCODABLEPLACEMARKATTRIBUTEMETADATA_H
#define INCODABLEPLACEMARKATTRIBUTEMETADATA_H



#import "INCodableAttributeMetadata.h"

@interface INCodablePlacemarkAttributeMetadata : INCodableAttributeMetadata

@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif