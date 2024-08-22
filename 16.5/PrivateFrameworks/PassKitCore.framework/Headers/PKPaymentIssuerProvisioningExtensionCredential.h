// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTISSUERPROVISIONINGEXTENSIONCREDENTIAL_H
#define PKPAYMENTISSUERPROVISIONINGEXTENSIONCREDENTIAL_H

@class NSExtension, NSArray;


#import "PKPaymentCredential.h"
#import "PKIssuerProvisioningExtensionPaymentPassEntry.h"

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential

@property (readonly, nonatomic) PKIssuerProvisioningExtensionPaymentPassEntry *entry; // ivar: _entry
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, copy, nonatomic) NSArray *metadata;


-(BOOL)_isEqualToCredential:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)detailDescription;
-(id)initWithExtension:(id)arg0 entry:(id)arg1 ;


@end


#endif