// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICESAVINGSUSERINFORESPONSE_H
#define PKACCOUNTWEBSERVICESAVINGSUSERINFORESPONSE_H



#import "PKAccountWebServiceResponse.h"
#import "PKSavingsAccountUserInfo.h"

@interface PKAccountWebServiceSavingsUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKSavingsAccountUserInfo *userInfo; // ivar: _userInfo


-(id)initWithData:(id)arg0 ;


@end


#endif