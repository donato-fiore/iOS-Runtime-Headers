// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCONTACTINFORMATIONRESPONSE_H
#define PKCONTACTINFORMATIONRESPONSE_H



#import "PKPaymentWebServiceResponse.h"
#import "PKContactInformation.h"

@interface PKContactInformationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) PKContactInformation *contactInformation; // ivar: _contactInformation


-(id)initWithData:(id)arg0 ;


@end


#endif