// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEUPDATEACCOUNTUSERPREFERENCESRESPONSE_H
#define PKACCOUNTWEBSERVICEUPDATEACCOUNTUSERPREFERENCESRESPONSE_H



#import "PKAccountWebServiceResponse.h"
#import "PKAccountUser.h"

@interface PKAccountWebServiceUpdateAccountUserPreferencesResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser


-(id)initWithData:(id)arg0 ;


@end


#endif