// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEINSTALLMENTAUTHORIZATIONRESPONSE_H
#define PKACCOUNTWEBSERVICEINSTALLMENTAUTHORIZATIONRESPONSE_H

@class NSString;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceInstallmentAuthorizationResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSString *authorizationToken; // ivar: _authorizationToken


-(id)initWithData:(id)arg0 ;


@end


#endif