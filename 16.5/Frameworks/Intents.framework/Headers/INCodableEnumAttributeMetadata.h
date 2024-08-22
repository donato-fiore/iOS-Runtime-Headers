// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCODABLEENUMATTRIBUTEMETADATA_H
#define INCODABLEENUMATTRIBUTEMETADATA_H

@class NSString;
@protocol INCodableAttributeDefaultValueProviding;


#import "INCodableAttributeMetadata.h"
#import "INCodableEnumValue.h"

@interface INCodableEnumAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) INCodableEnumValue *defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionKey;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif