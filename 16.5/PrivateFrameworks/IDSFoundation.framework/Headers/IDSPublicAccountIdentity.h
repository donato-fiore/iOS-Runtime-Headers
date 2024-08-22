// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSPUBLICACCOUNTIDENTITY_H
#define IDSPUBLICACCOUNTIDENTITY_H

@class NSString;
@protocol ENAccountPublicKey;

#import <Foundation/Foundation.h>

#import "IDSMPPublicAccountIdentity.h"
#import "IDSMPPublicServiceIdentityAdmin.h"
#import "IDSMPPublicServiceIdentitySigning.h"

@interface IDSPublicAccountIdentity : NSObject <ENAccountPublicKey>



@property (readonly, nonatomic) IDSMPPublicAccountIdentity *accountIdentity; // ivar: _accountIdentity
@property (readonly, nonatomic) IDSMPPublicServiceIdentityAdmin *adminIdentity; // ivar: _adminIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSMPPublicServiceIdentitySigning *signingIdentity; // ivar: _signingIdentity
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountIdentity:(id)arg0 adminIdentity:(id)arg1 signingIdentity:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif