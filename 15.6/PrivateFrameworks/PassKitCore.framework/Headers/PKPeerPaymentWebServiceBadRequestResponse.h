// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTWEBSERVICEBADREQUESTRESPONSE_H
#define PKPEERPAYMENTWEBSERVICEBADREQUESTRESPONSE_H

@class NSNumber, NSString;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentWebServiceBadRequestResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (readonly, copy, nonatomic) NSString *serverDebugDescription; // ivar: _serverDebugDescription


-(id)initWithData:(id)arg0 ;


@end


#endif