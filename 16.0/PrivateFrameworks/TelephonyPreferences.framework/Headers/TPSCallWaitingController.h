// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCALLWAITINGCONTROLLER_H
#define TPSCALLWAITINGCONTROLLER_H

@class NSString, CTXPCServiceSubscriptionContext;
@protocol TPSRequestControllerDelegate, TPSCallWaitingControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPSCallWaitingRequestController.h"

@interface TPSCallWaitingController : NSObject <TPSRequestControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSCallWaitingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TPSCallWaitingRequestController *requestController; // ivar: _requestController
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(void)requestController:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)requestStateChange:(NSInteger)arg0 ;


@end


#endif