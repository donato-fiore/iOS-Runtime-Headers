// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKISSUERPROVISIONINGEXTENSIONPAYMENTPASSENTRY_H
#define PKISSUERPROVISIONINGEXTENSIONPAYMENTPASSENTRY_H

@protocol NSSecureCoding;


#import "PKIssuerProvisioningExtensionPassEntry.h"
#import "PKAddPaymentPassRequestConfiguration.h"

@interface PKIssuerProvisioningExtensionPaymentPassEntry : PKIssuerProvisioningExtensionPassEntry <NSSecureCoding>



@property (readonly, nonatomic) PKAddPaymentPassRequestConfiguration *addRequestConfiguration; // ivar: _addRequestConfiguration


+(BOOL)supportsSecureCoding;
-(id)_initWithType:(NSInteger)arg0 identifier:(id)arg1 title:(id)arg2 art:(struct CGImage *)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 art:(struct CGImage *)arg2 addRequestConfiguration:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif