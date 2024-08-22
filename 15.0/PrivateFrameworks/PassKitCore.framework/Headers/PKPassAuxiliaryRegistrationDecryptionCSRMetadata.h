// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSAUXILIARYREGISTRATIONDECRYPTIONCSRMETADATA_H
#define PKPASSAUXILIARYREGISTRATIONDECRYPTIONCSRMETADATA_H



#import "PKPassAuxiliaryRegistrationCSRMetadata.h"

@interface PKPassAuxiliaryRegistrationDecryptionCSRMetadata : PKPassAuxiliaryRegistrationCSRMetadata

@property (readonly, nonatomic) NSUInteger decryptionSchemeVersion; // ivar: _decryptionSchemeVersion


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif