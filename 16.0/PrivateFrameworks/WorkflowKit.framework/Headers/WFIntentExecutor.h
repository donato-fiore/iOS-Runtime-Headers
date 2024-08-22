// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFINTENTEXECUTOR_H
#define WFINTENTEXECUTOR_H

@class INCExtensionConnection, NSString, INIntent, NSProgress;
@protocol INIntentResponseObserver, NSProgressReporting, WFIntentExecutorDelegate, INCExtensionProxy;

#import <Foundation/Foundation.h>

#import "WFIntentExecutor.h"

@interface WFIntentExecutor : NSObject <INIntentResponseObserver, NSProgressReporting>

 {
    WFIntentExecutor *_strongSelf;
}


@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) INCExtensionConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFIntentExecutorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceExecutionOnPhone; // ivar: _forceExecutionOnPhone
@property (retain, nonatomic) NSObject<INCExtensionProxy> *getRideStatusUpdatingExtensionProxy; // ivar: _getRideStatusUpdatingExtensionProxy
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly) NSProgress *progress; // ivar: _progress
@property (nonatomic) BOOL skipResolveAndConfirm; // ivar: _skipResolveAndConfirm
@property (readonly) Class superclass;


-(BOOL)continueInApp;
-(id)errorFromConfirmResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromExtensionError:(id)arg0 ;
-(id)errorFromHandleResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromResolutionResult:(id)arg0 forSlot:(id)arg1 onIntent:(id)arg2 ;
-(id)extensionInputItemsWithIntent:(id)arg0 ;
-(id)initWithIntent:(id)arg0 donateInteraction:(BOOL)arg1 groupIdentifier:(id)arg2 ;
-(void)autoreleaseSelf;
-(void)cancel;
-(void)configureConnection;
-(void)confirmIntent:(id)arg0 withExtensionProxy:(id)arg1 ;
-(void)failWithError:(id)arg0 ;
-(void)finish;
-(void)finishWithInteraction:(id)arg0 ;
-(void)finishWithInteraction:(id)arg0 error:(id)arg1 ;
-(void)getDefaultValueForParameterNamed:(id)arg0 completionHandler:(id)arg1 ;
-(void)getDynamicOptionsForParameterNamed:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleIntent:(id)arg0 withExtensionProxy:(id)arg1 ;
-(void)handleIntent:(id)arg0 withExtensionProxy:(id)arg1 completionHandler:(id)arg2 ;
-(void)intentResponseDidUpdate:(id)arg0 withSerializedCacheItems:(id)arg1 ;
-(void)resolveIntent:(id)arg0 withExtensionProxy:(id)arg1 ;
-(void)resolveIntentResolutionResults:(id)arg0 slotDescription:(id)arg1 intent:(id)arg2 completion:(id)arg3 ;
-(void)retainSelf;
-(void)showConfirmationForInteraction:(id)arg0 confirmationRequired:(BOOL)arg1 authenticationRequired:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)startConnectionWithCompletionHandler:(id)arg0 ;
-(void)startReceivingRideStatusUpdates;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stopReceivingRideStatusUpdates;
-(void)updateIntentWithItemToConfirm:(id)arg0 forSlot:(id)arg1 onIntent:(id)arg2 ;


@end


#endif