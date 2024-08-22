// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEPASSDETAILSRESPONSE_H
#define PKACCOUNTWEBSERVICEPASSDETAILSRESPONSE_H

@class NSString, NSURL, NSArray;


#import "PKAccountWebServiceResponse.h"
#import "PKPaymentRemoteCredential.h"

@interface PKAccountWebServicePassDetailsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSInteger cardType; // ivar: _cardType
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // ivar: _ownershipTokenIdentifier
@property (readonly, copy, nonatomic) NSString *passSerialNumber; // ivar: _passSerialNumber
@property (readonly, copy, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (readonly, copy, nonatomic) NSURL *passURL; // ivar: _passURL
@property (readonly, nonatomic) NSArray *postProvisioningContent; // ivar: _postProvisioningContent
@property (readonly, copy, nonatomic) NSString *provisioningIdentifier; // ivar: _provisioningIdentifier
@property (retain, nonatomic) PKPaymentRemoteCredential *remoteCredential; // ivar: _remoteCredential
@property (nonatomic) NSInteger status; // ivar: _status


-(id)initWithData:(id)arg0 ;


@end


#endif