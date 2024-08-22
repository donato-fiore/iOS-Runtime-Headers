// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPUSHPROVISIONINGTARGET_H
#define PKPUSHPROVISIONINGTARGET_H

@class NSDictionary, NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying>

 {
    NSDictionary *_additionalProvisioningDictionary;
}


@property (retain, nonatomic) NSString *accountHash; // ivar: _accountHash
@property (copy, nonatomic) NSString *appleIdentifier; // ivar: _appleIdentifier
@property (nonatomic) NSInteger appleIdentifierType; // ivar: _appleIdentifierType
@property (readonly, copy, nonatomic) NSString *cardConfigurationIdentifier; // ivar: _cardConfigurationIdentifier
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *environmentIdentifier; // ivar: _environmentIdentifier
@property (copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, copy, nonatomic) NSString *provisioningCredentialIdentifier; // ivar: _provisioningCredentialIdentifier
@property (retain, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (nonatomic) BOOL requiresSimultaneousRequestRouting; // ivar: _requiresSimultaneousRequestRouting
@property (retain, nonatomic) NSString *secondarySource; // ivar: _secondarySource
@property (copy, nonatomic) NSString *sharingInstanceIdentifier; // ivar: _sharingInstanceIdentifier
@property (nonatomic) NSUInteger targetDevice; // ivar: _targetDevice
@property (readonly, nonatomic) NSString *templateIdentifier; // ivar: _templateIdentifier
@property (retain, nonatomic) NSString *verificationCode; // ivar: _verificationCode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProvisioningTarget:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAppleIdentifier:(id)arg0 appleIdentifierType:(NSInteger)arg1 provisioningCredentialIdentifier:(id)arg2 cardConfigurationIdentifier:(id)arg3 sharingInstanceIdentifier:(id)arg4 nonce:(id)arg5 ;
-(id)initWithAppleIdentifier:(id)arg0 appleIdentifierType:(NSInteger)arg1 provisioningCredentialIdentifier:(id)arg2 cardConfigurationIdentifier:(id)arg3 sharingInstanceIdentifier:(id)arg4 nonce:(id)arg5 accountHash:(id)arg6 templateIdentifier:(id)arg7 relyingPartyIdentifier:(id)arg8 requiresSimultaneousRequestRouting:(BOOL)arg9 targetDevice:(NSUInteger)arg10 environmentIdentifier:(id)arg11 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProvisioningDict:(id)arg0 ;
-(id)jsonRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif