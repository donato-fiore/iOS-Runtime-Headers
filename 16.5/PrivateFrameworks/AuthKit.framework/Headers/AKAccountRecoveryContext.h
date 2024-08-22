// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKACCOUNTRECOVERYCONTEXT_H
#define AKACCOUNTRECOVERYCONTEXT_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AKAppleIDAuthenticationContext.h"

@interface AKAccountRecoveryContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext; // ivar: _authContext
@property (readonly, nonatomic) NSString *decodedRecoveryIdentityTokenString;
@property (readonly, nonatomic) NSString *decodedRecoveryPETString;
@property (copy, nonatomic) NSString *encodedRecoveryIdentityToken; // ivar: _encodedRecoveryIdentityToken
@property (copy, nonatomic) NSString *encodedRecoveryPET; // ivar: _encodedRecoveryPET
@property (nonatomic) BOOL mandatesRecoveryKey; // ivar: _mandatesRecoveryKey
@property (copy, nonatomic) NSURL *recoveryContinuationURL; // ivar: _recoveryContinuationURL
@property (nonatomic) BOOL supportsMasterKeyRecovery; // ivar: _supportsMasterKeyRecovery


+(BOOL)supportsSecureCoding;
+(id)recoveryContextWithServerInfo:(id)arg0 ;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif