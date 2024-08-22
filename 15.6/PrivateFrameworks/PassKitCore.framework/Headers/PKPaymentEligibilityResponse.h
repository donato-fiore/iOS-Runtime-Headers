// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTELIGIBILITYRESPONSE_H
#define PKPAYMENTELIGIBILITYRESPONSE_H

@class NSSet, NSString, NSData, NSURL, NSDictionary;


#import "PKPaymentWebServiceResponse.h"
#import "PKPaymentEligibilityFIDOProfile.h"
#import "PKPaymentEligibilitySupplementaryData.h"

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {
    NSSet *_enableRequirements;
}


@property (readonly, copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) NSInteger cardType; // ivar: _cardType
@property (readonly, nonatomic) NSUInteger deviceProvisioningDataExpected; // ivar: _deviceProvisioningDataExpected
@property (readonly, nonatomic) NSInteger eligibilityStatus; // ivar: _eligibilityStatus
@property (readonly, copy, nonatomic) NSData *fidoChallenge; // ivar: _fidoChallenge
@property (readonly, copy, nonatomic) PKPaymentEligibilityFIDOProfile *fidoProfile; // ivar: _fidoProfile
@property (readonly, nonatomic) BOOL hasEnableRequirements;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSURL *learnMoreURL; // ivar: _learnMoreURL
@property (readonly, copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, copy, nonatomic) NSString *region; // ivar: _region
@property (readonly, nonatomic) BOOL shouldGenerateFidoKey;
@property (readonly, nonatomic) BOOL shouldGenerateISO18013EncryptionKey;
@property (readonly, nonatomic) BOOL shouldGenerateTransactionKey;
@property (readonly, nonatomic) BOOL shouldSignFidoChallenge;
@property (readonly, copy, nonatomic) PKPaymentEligibilitySupplementaryData *supplementaryData; // ivar: _supplementaryData
@property (readonly, copy, nonatomic) NSString *termsID; // ivar: _termsID
@property (readonly, copy, nonatomic) NSURL *termsURL; // ivar: _termsURL
@property (readonly, copy, nonatomic) NSDictionary *transactionKeyInformation; // ivar: _transactionKeyInformation


+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg0 ;


@end


#endif