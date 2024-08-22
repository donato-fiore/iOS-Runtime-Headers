// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSAUXILIARYREGISTRATIONDECRYPTIONREQUIREMENT_H
#define PKPASSAUXILIARYREGISTRATIONDECRYPTIONREQUIREMENT_H

@class NSString;


#import "PKPassAuxiliaryRegistrationRequirement.h"

@interface PKPassAuxiliaryRegistrationDecryptionRequirement : PKPassAuxiliaryRegistrationRequirement

@property (readonly, nonatomic) NSUInteger decryptionSchemeVersion; // ivar: _decryptionSchemeVersion
@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSUInteger usage; // ivar: _usage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassAuxiliaryRegistrationDecryptionRequirement:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)role;
-(id)_mutableDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif