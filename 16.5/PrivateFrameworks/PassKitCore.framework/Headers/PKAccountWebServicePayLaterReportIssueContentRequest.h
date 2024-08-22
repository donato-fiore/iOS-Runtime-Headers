// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEPAYLATERREPORTISSUECONTENTREQUEST_H
#define PKACCOUNTWEBSERVICEPAYLATERREPORTISSUECONTENTREQUEST_H

@class NSString;


#import "PKAccountWebServicePayLaterContentRequest.h"
#import "PKPayLaterFinancingPlan.h"
#import "PKPayLaterInstallment.h"
#import "PKPayLaterPayment.h"

@interface PKAccountWebServicePayLaterReportIssueContentRequest : PKAccountWebServicePayLaterContentRequest {
    NSString *_contextString;
}


@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (retain, nonatomic) PKPayLaterInstallment *installment; // ivar: _installment
@property (retain, nonatomic) PKPayLaterPayment *payment; // ivar: _payment


-(id)bodyDictionary;
-(id)contextString;
-(id)initWithTopic:(id)arg0 ;


@end


#endif