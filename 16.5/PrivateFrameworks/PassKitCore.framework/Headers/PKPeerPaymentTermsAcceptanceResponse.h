// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTTERMSACCEPTANCERESPONSE_H
#define PKPEERPAYMENTTERMSACCEPTANCERESPONSE_H

@class NSString, NSURL;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentTermsAcceptanceResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier
@property (readonly, copy, nonatomic) NSURL *termsURL; // ivar: _termsURL


-(BOOL)hasTermsData;
-(id)initWithData:(id)arg0 ;


@end


#endif