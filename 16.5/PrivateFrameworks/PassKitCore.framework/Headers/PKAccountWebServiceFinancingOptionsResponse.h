// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEFINANCINGOPTIONSRESPONSE_H
#define PKACCOUNTWEBSERVICEFINANCINGOPTIONSRESPONSE_H

@class NSArray, NSString;


#import "PKAccountWebServiceResponse.h"
#import "PKPayLaterProductAssessmentCollection.h"
#import "PKPayLaterDynamicContent.h"

@interface PKAccountWebServiceFinancingOptionsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSArray *acceptedFundingSources; // ivar: _acceptedFundingSources
@property (readonly, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection; // ivar: _assessmentCollection
@property (readonly, nonatomic) PKPayLaterDynamicContent *dynamicContent; // ivar: _dynamicContent
@property (readonly, nonatomic) NSArray *lastUsedFundingSources; // ivar: _lastUsedFundingSources
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


-(id)initWithData:(id)arg0 ;


@end


#endif