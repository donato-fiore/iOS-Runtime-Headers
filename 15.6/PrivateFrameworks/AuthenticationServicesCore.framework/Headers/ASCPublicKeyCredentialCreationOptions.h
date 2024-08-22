// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCPUBLICKEYCREDENTIALCREATIONOPTIONS_H
#define ASCPUBLICKEYCREDENTIALCREATIONOPTIONS_H

@class NSString, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASCWebAuthenticationExtensionsClientInputs.h"

@interface ASCPublicKeyCredentialCreationOptions : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *attestationPreference; // ivar: _attestationPreference
@property (copy, nonatomic) NSData *challenge; // ivar: _challenge
@property (copy, nonatomic) NSData *clientDataHash; // ivar: _clientDataHash
@property (copy, nonatomic) NSArray *excludedCredentials; // ivar: _excludedCredentials
@property (copy, nonatomic) ASCWebAuthenticationExtensionsClientInputs *extensions; // ivar: _extensions
@property (copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (nonatomic) BOOL shouldRequireResidentKey; // ivar: _shouldRequireResidentKey
@property (copy, nonatomic) NSArray *supportedAlgorithmIdentifiers; // ivar: _supportedAlgorithmIdentifiers
@property (copy, nonatomic) NSString *userDisplayName; // ivar: _userDisplayName
@property (copy, nonatomic) NSData *userIdentifier; // ivar: _userIdentifier
@property (copy, nonatomic) NSString *userName; // ivar: _userName
@property (copy, nonatomic) NSString *userVerificationPreference; // ivar: _userVerificationPreference


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif