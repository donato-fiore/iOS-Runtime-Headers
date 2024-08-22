// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INAPPINTENTDELIVERER_H
#define INAPPINTENTDELIVERER_H

@class NSString, RBSAssertion, RBSProcessMonitor;
@protocol RBSAssertionObserving, INIntentBackgroundHandlingAssertion, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "INIntentForwardingAction.h"
#import "INWatchdogTimer.h"

@interface INAppIntentDeliverer : NSObject <RBSAssertionObserving>



@property (retain, nonatomic) NSObject<INIntentBackgroundHandlingAssertion> *auxiliaryAssertion; // ivar: _auxiliaryAssertion
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) INIntentForwardingAction *intentForwardingAction; // ivar: _intentForwardingAction
@property (readonly, nonatomic) RBSAssertion *processAssertion; // ivar: _processAssertion
@property (readonly, nonatomic) RBSProcessMonitor *processMonitor; // ivar: _processMonitor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) INWatchdogTimer *requestTimer; // ivar: _requestTimer
@property (readonly) Class superclass;


-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 intentForwardingAction:(id)arg1 ;
-(void)_deliverIntentForwardingActionWithResponseHandler:(id)arg0 ;
-(void)assertion:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)completeWithIntentForwardingActionResponse:(id)arg0 ;
-(void)dealloc;
-(void)deliverIntent:(id)arg0 reply:(id)arg1 ;
-(void)deliverIntentForwardingActionWithResponseHandler:(id)arg0 ;
-(void)invalidateIntentDelivery;


@end


#endif