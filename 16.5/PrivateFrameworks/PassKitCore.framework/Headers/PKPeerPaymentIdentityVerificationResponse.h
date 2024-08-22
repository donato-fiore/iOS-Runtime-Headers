// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTIDENTITYVERIFICATIONRESPONSE_H
#define PKPEERPAYMENTIDENTITYVERIFICATIONRESPONSE_H

@class NSArray, NSString;


#import "PKPeerPaymentWebServiceResponse.h"
#import "PKPeerPaymentAccount.h"

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *acceptableDocuments; // ivar: _acceptableDocuments
@property (readonly, nonatomic) PKPeerPaymentAccount *account; // ivar: _account
@property (readonly, nonatomic) BOOL complete; // ivar: _complete
@property (readonly, copy, nonatomic) NSArray *encryptionCertificates; // ivar: _encryptionCertificates
@property (readonly, copy, nonatomic) NSString *encryptionVersion; // ivar: _encryptionVersion
@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) BOOL manuallyTriggered; // ivar: _manuallyTriggered
@property (readonly, copy, nonatomic) NSArray *requiredFieldsByPage; // ivar: _requiredFieldsByPage
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithData:(id)arg0 ;


@end


#endif