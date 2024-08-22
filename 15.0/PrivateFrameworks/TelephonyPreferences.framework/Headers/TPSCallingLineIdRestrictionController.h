// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCALLINGLINEIDRESTRICTIONCONTROLLER_H
#define TPSCALLINGLINEIDRESTRICTIONCONTROLLER_H

@class NSString, CTXPCServiceSubscriptionContext;
@protocol TPSRequestControllerDelegate, TPSCallingLineIdRestrictionControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPSCallingLineIdRestrictionRequestController.h"

@interface TPSCallingLineIdRestrictionController : NSObject <TPSRequestControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSCallingLineIdRestrictionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TPSCallingLineIdRestrictionRequestController *requestController; // ivar: _requestController
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(void)requestController:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)requestStateChange:(NSInteger)arg0 ;
-(void)requestStateForSubscriptionContext:(id)arg0 ;


@end


#endif