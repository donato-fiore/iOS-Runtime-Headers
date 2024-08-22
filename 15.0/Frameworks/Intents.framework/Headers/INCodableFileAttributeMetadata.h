// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLEFILEATTRIBUTEMETADATA_H
#define INCODABLEFILEATTRIBUTEMETADATA_H

@class NSArray, NSString;


#import "INCodableAttributeMetadata.h"

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata

@property (readonly, nonatomic) NSArray *UTIs;
@property (readonly, nonatomic) NSArray *customUTIs; // ivar: _customUTIs
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif