// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEPAYLATERCONTENTRESPONSE_H
#define PKACCOUNTWEBSERVICEPAYLATERCONTENTRESPONSE_H



#import "PKAccountWebServiceResponse.h"
#import "PKPayLaterDynamicContent.h"

@interface PKAccountWebServicePayLaterContentResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKPayLaterDynamicContent *dynamicContent; // ivar: _dynamicContent


-(id)initWithData:(id)arg0 ;


@end


#endif