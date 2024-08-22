// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEACCOUNTSRESPONSE_H
#define PKACCOUNTWEBSERVICEACCOUNTSRESPONSE_H

@class NSArray, NSString;


#import "PKAccountWebServiceResponse.h"
#import "PKFeatureFailureCollection.h"

@interface PKAccountWebServiceAccountsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *accounts; // ivar: _accounts
@property (readonly, nonatomic) PKFeatureFailureCollection *featureFailures; // ivar: _featureFailures
@property (readonly, copy, nonatomic) NSString *lastUpdated; // ivar: _lastUpdated


-(id)initWithData:(id)arg0 ;


@end


#endif