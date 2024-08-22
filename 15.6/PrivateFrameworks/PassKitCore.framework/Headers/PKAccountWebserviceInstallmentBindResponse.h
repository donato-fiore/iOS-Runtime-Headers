// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEINSTALLMENTBINDRESPONSE_H
#define PKACCOUNTWEBSERVICEINSTALLMENTBINDRESPONSE_H

@class NSString;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebserviceInstallmentBindResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSString *bindToken; // ivar: _bindToken


-(id)initWithData:(id)arg0 ;


@end


#endif