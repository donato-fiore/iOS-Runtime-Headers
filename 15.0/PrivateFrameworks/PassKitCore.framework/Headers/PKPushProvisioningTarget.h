// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPUSHPROVISIONINGTARGET_H
#define PKPUSHPROVISIONINGTARGET_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *accountHash; // ivar: _accountHash
@property (copy, nonatomic) NSString *appleIdentifier; // ivar: _appleIdentifier
@property (nonatomic) NSInteger appleIdentifierType; // ivar: _appleIdentifierType
@property (readonly, copy, nonatomic) NSString *cardConfigurationIdentifier; // ivar: _cardConfigurationIdentifier
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, copy, nonatomic) NSString *policyIdentifier; // ivar: _policyIdentifier
@property (readonly, copy, nonatomic) NSString *provisioningCredentialIdentifier; // ivar: _provisioningCredentialIdentifier
@property (readonly, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly, nonatomic) BOOL requiresSimultaneousRequestRouting; // ivar: _requiresSimultaneousRequestRouting
@property (readonly, copy, nonatomic) NSString *sharingInstanceIdentifier; // ivar: _sharingInstanceIdentifier
@property (nonatomic) NSUInteger targetDevice; // ivar: _targetDevice
@property (readonly, nonatomic) NSString *templateIdentifier; // ivar: _templateIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProvisioningTarget:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAppleIdentifier:(id)arg0 appleIdentifierType:(NSInteger)arg1 pushProvisioningPolicyIdentifier:(id)arg2 provisioningCredentialIdentifier:(id)arg3 cardConfigurationIdentifier:(id)arg4 sharingInstanceIdentifier:(id)arg5 nonce:(id)arg6 ;
-(id)initWithAppleIdentifier:(id)arg0 appleIdentifierType:(NSInteger)arg1 pushProvisioningPolicyIdentifier:(id)arg2 provisioningCredentialIdentifier:(id)arg3 cardConfigurationIdentifier:(id)arg4 sharingInstanceIdentifier:(id)arg5 nonce:(id)arg6 accountHash:(id)arg7 templateIdentifier:(id)arg8 relyingPartyIdentifier:(id)arg9 requiresSimultaneousRequestRouting:(BOOL)arg10 targetDevice:(NSUInteger)arg11 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif