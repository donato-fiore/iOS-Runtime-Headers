// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISBURSEMENTVOUCHERREQUEST_H
#define PKDISBURSEMENTVOUCHERREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKDisbursementVoucherRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) NSUInteger disbursementSource; // ivar: _disbursementSource
@property (nonatomic) NSUInteger disbursementTarget; // ivar: _disbursementTarget
@property (copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithDisbursementSource:(NSUInteger)arg0 disbursementTarget:(NSUInteger)arg1 teamIdentifier:(id)arg2 bundleIdentifier:(id)arg3 ;


@end


#endif