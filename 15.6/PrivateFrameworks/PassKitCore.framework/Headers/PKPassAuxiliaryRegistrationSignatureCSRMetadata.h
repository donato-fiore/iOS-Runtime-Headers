// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSAUXILIARYREGISTRATIONSIGNATURECSRMETADATA_H
#define PKPASSAUXILIARYREGISTRATIONSIGNATURECSRMETADATA_H



#import "PKPassAuxiliaryRegistrationCSRMetadata.h"

@interface PKPassAuxiliaryRegistrationSignatureCSRMetadata : PKPassAuxiliaryRegistrationCSRMetadata

@property (readonly, nonatomic) NSUInteger signatureSchemeVersion; // ivar: _signatureSchemeVersion


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif