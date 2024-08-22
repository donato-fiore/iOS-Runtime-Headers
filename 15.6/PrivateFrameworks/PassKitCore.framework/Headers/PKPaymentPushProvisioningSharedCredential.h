// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPUSHPROVISIONINGSHAREDCREDENTIAL_H
#define PKPAYMENTPUSHPROVISIONINGSHAREDCREDENTIAL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentPushProvisioningSharedCredential : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *provisioningCredentialIdentifierHash; // ivar: _provisioningCredentialIdentifierHash
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier; // ivar: _sharingInstanceIdentifier
@property (nonatomic) NSInteger source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif