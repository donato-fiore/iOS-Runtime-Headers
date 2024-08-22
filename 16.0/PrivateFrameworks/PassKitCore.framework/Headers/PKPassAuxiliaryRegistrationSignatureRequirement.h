// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSAUXILIARYREGISTRATIONSIGNATUREREQUIREMENT_H
#define PKPASSAUXILIARYREGISTRATIONSIGNATUREREQUIREMENT_H



#import "PKPassAuxiliaryRegistrationRequirement.h"

@interface PKPassAuxiliaryRegistrationSignatureRequirement : PKPassAuxiliaryRegistrationRequirement

@property (readonly, nonatomic) NSUInteger signatureSchemeVersion; // ivar: _signatureSchemeVersion
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassAuxiliaryRegistrationSignatureRequirement:(id)arg0 ;
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