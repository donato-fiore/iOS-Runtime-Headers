// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAUTHORIZATIONREQUEST_H
#define AKAUTHORIZATIONREQUEST_H

@class NSString, NSDictionary, ACAccount, NSArray;


#import "AKCredentialRequest.h"

@interface AKAuthorizationRequest : AKCredentialRequest {
    NSString *_altDSID;
}


@property (nonatomic) BOOL _isSilentAppTransfer; // ivar: _isSilentAppTransfer
@property (copy, nonatomic) NSDictionary *appProvidedData; // ivar: _appProvidedData
@property (retain, nonatomic) ACAccount *authkitAccount; // ivar: _authkitAccount
@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (nonatomic) NSInteger existingStatus; // ivar: _existingStatus
@property (readonly, nonatomic) ACAccount *internalAuthKitAccount;
@property (nonatomic) BOOL isEligibleForUpgradeFromPassword; // ivar: _isEligibleForUpgradeFromPassword
@property (copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (copy, nonatomic) NSArray *requestedScopes; // ivar: _requestedScopes
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID


+(BOOL)supportsSecureCoding;
-(id)_sanitizedCopy;
-(id)altDSID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAltDSID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif