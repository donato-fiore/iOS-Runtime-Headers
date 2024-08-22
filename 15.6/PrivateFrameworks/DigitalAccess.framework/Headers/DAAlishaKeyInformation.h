// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAALISHAKEYINFORMATION_H
#define DAALISHAKEYINFORMATION_H

@class NSString, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DAAlishaKeyEncryptedRequest.h"

@interface DAAlishaKeyInformation : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *invitationIdentifier; // ivar: _invitationIdentifier
@property (readonly, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL onlineImmobilizerToken; // ivar: _onlineImmobilizerToken
@property (readonly, nonatomic) NSString *pairedEntityIdentifier; // ivar: _pairedEntityIdentifier
@property (readonly, nonatomic) NSData *revocationAttestation; // ivar: _revocationAttestation
@property (readonly, nonatomic) NSArray *supportedTransports; // ivar: _supportedTransports
@property (readonly, nonatomic) NSData *trackingReceipt; // ivar: _trackingReceipt
@property (readonly, nonatomic) DAAlishaKeyEncryptedRequest *trackingRequest; // ivar: _trackingRequest


+(BOOL)supportsSecureCoding;
+(id)withEndpoint:(id)arg0 ;
+(id)withKeyName:(id)arg0 publicKeyIdentifier:(id)arg1 localIdentifier:(id)arg2 pairedEntityIdentifier:(id)arg3 trackingRequest:(id)arg4 onlineImmoToken:(BOOL)arg5 supportedTransports:(id)arg6 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif