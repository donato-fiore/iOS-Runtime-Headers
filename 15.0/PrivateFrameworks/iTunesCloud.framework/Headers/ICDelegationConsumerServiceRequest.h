// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDELEGATIONCONSUMERSERVICEREQUEST_H
#define ICDELEGATIONCONSUMERSERVICEREQUEST_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "ICRequestContext.h"

@interface ICDelegationConsumerServiceRequest : NSObject

@property (readonly, copy, nonatomic) ICRequestContext *requestContext; // ivar: _requestContext
@property (readonly, nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (readonly, copy, nonatomic) NSDictionary *userIdentityDelegationAccountUUIDs; // ivar: _userIdentityDelegationAccountUUIDs


-(id)initWithUserIdentityDelegationAccountUUIDs:(id)arg0 requestContext:(id)arg1 timeoutInterval:(CGFloat)arg2 ;


@end


#endif