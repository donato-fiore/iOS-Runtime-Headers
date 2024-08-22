// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTPASSDETAILSRESPONSE_H
#define PKPEERPAYMENTPASSDETAILSRESPONSE_H

@class NSString, NSURL;


#import "PKPeerPaymentWebServiceResponse.h"
#import "PKPaymentRemoteCredential.h"

@interface PKPeerPaymentPassDetailsResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) NSInteger cardType; // ivar: _cardType
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // ivar: _ownershipTokenIdentifier
@property (readonly, copy, nonatomic) NSString *passSerialNumber; // ivar: _passSerialNumber
@property (readonly, copy, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (readonly, copy, nonatomic) NSURL *passURL; // ivar: _passURL
@property (readonly, copy, nonatomic) NSString *provisioningIdentifier; // ivar: _provisioningIdentifier
@property (readonly, nonatomic) PKPaymentRemoteCredential *remoteCredential; // ivar: _remoteCredential
@property (readonly, nonatomic) NSInteger status; // ivar: _status


-(id)initWithData:(id)arg0 ;


@end


#endif