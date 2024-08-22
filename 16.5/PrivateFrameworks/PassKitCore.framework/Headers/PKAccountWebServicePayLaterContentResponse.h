// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEPAYLATERCONTENTRESPONSE_H
#define PKACCOUNTWEBSERVICEPAYLATERCONTENTRESPONSE_H

@class NSArray;


#import "PKAccountWebServiceResponse.h"
#import "PKPayLaterDynamicContent.h"

@interface PKAccountWebServicePayLaterContentResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKPayLaterDynamicContent *dynamicContent; // ivar: _dynamicContent
@property (readonly, copy, nonatomic) NSArray *reportIssueTopics; // ivar: _reportIssueTopics


-(id)initWithData:(id)arg0 ;


@end


#endif