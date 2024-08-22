// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREQUIREMENTSREQUEST_H
#define PKPAYMENTREQUIREMENTSREQUEST_H

@class NSString, NSData;


#import "PKPaymentWebServiceRequest.h"
#import "PKDSPContext.h"
#import "PKPaymentCredential.h"

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *cardholderName; // ivar: _cardholderName
@property (copy, nonatomic) NSData *challengeResponse; // ivar: _challengeResponse
@property (copy, nonatomic) PKDSPContext *context; // ivar: _context
@property (copy, nonatomic) NSData *cryptogram; // ivar: _cryptogram
@property (copy, nonatomic) NSString *passOwnershipToken; // ivar: _passOwnershipToken
@property (retain, nonatomic) PKPaymentCredential *paymentCredential; // ivar: _paymentCredential
@property (copy, nonatomic) NSString *primaryAccountNumber; // ivar: _primaryAccountNumber
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier


-(id)_archivedDataForEncryptedDataDictionary:(id)arg0 ;
-(id)_cardDictionary;
-(id)initWithCardholderName:(id)arg0 primaryAccountNumber:(id)arg1 ;
-(id)initWithPaymentCredential:(id)arg0 ;
-(void)_cardDictionaryForDeviceData:(id)arg0 inWebService:(id)arg1 includingDeviceScore:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)_deviceScoreUsingWebService:(id)arg0 withCompletion:(id)arg1 ;
-(void)_encryptedDataWithDeviceData:(id)arg0 certChain:(id)arg1 devSigned:(BOOL)arg2 includeDeviceScore:(BOOL)arg3 inWebService:(id)arg4 withCompletion:(id)arg5 ;
-(void)_updateContextUsingWebService:(id)arg0 completion:(id)arg1 ;
-(void)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 certChain:(id)arg3 devSigned:(BOOL)arg4 deviceData:(id)arg5 webService:(id)arg6 completion:(id)arg7 ;


@end


#endif