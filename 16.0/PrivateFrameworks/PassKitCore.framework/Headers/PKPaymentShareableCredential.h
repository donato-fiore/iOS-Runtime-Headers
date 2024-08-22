// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSHAREABLECREDENTIAL_H
#define PKPAYMENTSHAREABLECREDENTIAL_H

@class NSData, NSString;


#import "PKPaymentCredential.h"
#import "PKEncryptedPushProvisioningTarget.h"

@interface PKPaymentShareableCredential : PKPaymentCredential

@property (readonly, nonatomic, getter=isBackgroundProvisioning) BOOL backgroundProvisioning; // ivar: _backgroundProvisioning
@property (readonly, nonatomic) PKEncryptedPushProvisioningTarget *encryptedProvisioningTarget; // ivar: _encryptedProvisioningTarget
@property (retain, nonatomic) NSData *externalizedAuth; // ivar: _externalizedAuth
@property (readonly, nonatomic) NSData *passThumbnailImageData; // ivar: _passThumbnailImageData
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier; // ivar: _sharingInstanceIdentifier
@property (nonatomic) NSInteger source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncryptedProvisioningTarget:(id)arg0 provisioningSharingIdentifier:(id)arg1 passThumbnailImageData:(id)arg2 ;
-(id)initWithEncryptedProvisioningTarget:(id)arg0 provisioningSharingIdentifier:(id)arg1 passThumbnailImageData:(id)arg2 isBackgroundProvisioning:(BOOL)arg3 ;
-(id)initWithProvisioningSharingIdentifer:(id)arg0 isBackgroundProvisioning:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif