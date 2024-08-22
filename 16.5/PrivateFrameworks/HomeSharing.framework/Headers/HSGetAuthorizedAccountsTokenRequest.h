// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HSGETAUTHORIZEDACCOUNTSTOKENREQUEST_H
#define HSGETAUTHORIZEDACCOUNTSTOKENREQUEST_H



#import "HSRequest.h"

@interface HSGetAuthorizedAccountsTokenRequest : HSRequest



+(id)requestWithDSID:(NSUInteger)arg0 deviceGUID:(id)arg1 ;
-(id)canonicalResponseForResponse:(id)arg0 ;
-(id)initWithDSID:(NSUInteger)arg0 deviceGUID:(id)arg1 ;


@end


#endif