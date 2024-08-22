// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSAPPFOCUSCONFIGURATIONTASK_H
#define DNDSAPPFOCUSCONFIGURATIONTASK_H

@class LNAction, LNActionExecutor, NSString, NSUUID;
@protocol LNActionExecutorDelegate;

#import <Foundation/Foundation.h>


@interface DNDSAppFocusConfigurationTask : NSObject <LNActionExecutorDelegate>

 {
    LNAction *_action;
    LNActionExecutor *_executor;
    id *_completion;
}


@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *taskIdentifier;


-(id)_executorCreatingIfNeeded;
-(id)_malformedIntentErrorWithMessage:(id)arg0 ;
-(id)initWithAction:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)execute;
-(void)executor:(id)arg0 didCompleteExecutionWithResult:(id)arg1 error:(id)arg2 ;
-(void)executor:(id)arg0 needsActionConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsDisambiguationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsValueWithRequest:(id)arg1 ;
-(void)prepareWithCompletion:(id)arg0 ;


@end


#endif