// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTREMOTECREDENTIAL_H
#define PKPAYMENTREMOTECREDENTIAL_H

@class NSString, NSArray, NSURL;


#import "PKPaymentCredential.h"
#import "PKPaymentRemoteCredentialFIDOProfile.h"
#import "PKPaymentPass.h"

@interface PKPaymentRemoteCredential : PKPaymentCredential {
    NSString *_summaryMetadataDescription;
}


@property (retain, nonatomic) PKPaymentRemoteCredentialFIDOProfile *fidoProfile; // ivar: _fidoProfile
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // ivar: _ownershipTokenIdentifier
@property (copy, nonatomic) NSURL *passURL; // ivar: _passURL
@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (readonly, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (nonatomic) NSUInteger rank; // ivar: _rank
@property (nonatomic) BOOL requiresMetadata; // ivar: _requiresMetadata
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly, copy, nonatomic) NSString *statusDescription; // ivar: _statusDescription
@property (readonly, copy, nonatomic) NSArray *summaryMetadata; // ivar: _summaryMetadata
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsSuperEasyProvisioning;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)detailDescription;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 status:(NSInteger)arg1 credentialType:(NSInteger)arg2 passURL:(id)arg3 ;
-(id)setupProductIdentifier;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif