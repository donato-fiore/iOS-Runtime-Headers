// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEACCOUNTUSERSRESPONSE_H
#define PKACCOUNTWEBSERVICEACCOUNTUSERSRESPONSE_H

@class NSDate, NSSet;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceAccountUsersResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (readonly, copy, nonatomic) NSSet *users; // ivar: _users


-(id)initWithData:(id)arg0 ;


@end


#endif