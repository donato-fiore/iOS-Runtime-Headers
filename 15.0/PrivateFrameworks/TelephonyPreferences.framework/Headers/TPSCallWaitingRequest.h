// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCALLWAITINGREQUEST_H
#define TPSCALLWAITINGREQUEST_H

@class NSString;
@protocol TPSSecureObject;


#import "TPSCallClassRequest.h"

@interface TPSCallWaitingRequest : TPSCallClassRequest <TPSSecureObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)unarchivedObjectClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 callClass:(int)arg1 ;


@end


#endif