// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRSETUPWORKFLOW_H
#define TRSETUPWORKFLOW_H

@class UIViewController, NSSet;

#import <Foundation/Foundation.h>

#import "TRNearbyDevice.h"
#import "TROperationQueue.h"
#import "TRSession.h"

@interface TRSetupWorkflow : NSObject

@property (copy, nonatomic) id *activationStageStartedHandler; // ivar: _activationStageStartedHandler
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) id *configurationStageStartedHandler; // ivar: _configurationStageStartedHandler
@property (copy, nonatomic) id *failureHandler; // ivar: _failureHandler
@property (retain, nonatomic) TRNearbyDevice *nearbyDevice; // ivar: _nearbyDevice
@property (copy, nonatomic) id *networkStageStartedHandler; // ivar: _networkStageStartedHandler
@property (retain, nonatomic) TROperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain) TRSession *session; // ivar: _session
@property (copy, nonatomic) id *startedHandler; // ivar: _startedHandler
@property NSUInteger state; // ivar: _state
@property (retain, nonatomic) NSSet *unauthenticatedAccountServices; // ivar: _unauthenticatedAccountServices


+(void)initialize;
-(id)initWithNearbyDevice:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_abortSetupWithErrorCode:(NSInteger)arg0 userInfo:(id)arg1 ;
-(void)_performActivationOperation;
-(void)_performAuthenticationOperation;
-(void)_performCompletionOperation;
-(void)_performConfigurationOperation;
-(void)_performHandshakeOperation;
-(void)_performNetworkOperation;
-(void)_releaseHandlers;
-(void)cancel;
-(void)start;


@end


#endif