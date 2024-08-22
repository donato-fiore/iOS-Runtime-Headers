// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCCREDENTIALTRUST_H
#define DCCREDENTIALTRUST_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialTrust : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL credentialAccessibilityEnabled; // ivar: _credentialAccessibilityEnabled
@property (readonly) NSData *credentialBAACertificate; // ivar: _credentialBAACertificate
@property (readonly) NSData *credentialKeyBlob; // ivar: _credentialKeyBlob
@property (readonly) NSString *credentialPairingID; // ivar: _credentialPairingID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialKeyBlob:(id)arg0 baaCertificate:(id)arg1 pairingID:(id)arg2 isAccessibilityEnabled:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif