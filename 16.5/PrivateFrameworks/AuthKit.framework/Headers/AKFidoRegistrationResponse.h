// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKFIDOREGISTRATIONRESPONSE_H
#define AKFIDOREGISTRATIONRESPONSE_H

@class NSString;
@protocol AKFidoResponse, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKFidoRegistrationResponse : NSObject <AKFidoResponse, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *attestationsData; // ivar: _attestationsData
@property (readonly, nonatomic) NSString *challenge; // ivar: _challenge
@property (readonly, nonatomic) NSString *clientData; // ivar: _clientData
@property (readonly, nonatomic) NSString *credentialID; // ivar: _credentialID
@property (readonly, nonatomic) NSString *credentialName; // ivar: _credentialName
@property (readonly, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
+(id)_sanitizeCredentialIDString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithChallengeString:(id)arg0 attestationsData:(id)arg1 credentialID:(id)arg2 clientData:(id)arg3 relyingPartyIdentifier:(id)arg4 credentialName:(id)arg5 userIdentifier:(id)arg6 ;
-(id)initWithChallengeString:(id)arg0 attestationsDataString:(id)arg1 credentialIDString:(id)arg2 clientDataString:(id)arg3 relyingPartyIdentifier:(id)arg4 credentialName:(id)arg5 userIdentifier:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif