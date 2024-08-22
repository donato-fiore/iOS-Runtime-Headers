// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCCREDENTIALAUTHORIZATIONTOKEN_H
#define DCCREDENTIALAUTHORIZATIONTOKEN_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialAuthorizationToken : NSObject <NSSecureCoding>



@property (readonly) NSData *credentialAuthorizationToken; // ivar: _credentialAuthorizationToken
@property (readonly) NSString *credentialPairingID; // ivar: _credentialPairingID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialAuthorizationToken:(id)arg0 pairingID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif