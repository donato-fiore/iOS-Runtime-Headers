// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKSETUPCLIENT_H
#define SKSETUPCLIENT_H

@class CUNANEndpoint, CUNANSubscriber, NSMutableDictionary, NSError, NSString;
@protocol CUActivatable, CUAuthenticatableClient, CULabelable, CUMessaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKConnection.h"
#import "SKStepWiFiSetupClient.h"
#import "SKDevice.h"

@interface SKSetupClient : NSObject <CUActivatable, CUAuthenticatableClient, CULabelable, CUMessaging>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CUNANEndpoint *_nanEndpoint;
    CUNANSubscriber *_nanSubscriber;
    NSMutableDictionary *_registeredEvents;
    NSMutableDictionary *_registeredRequests;
    int _runState;
    SKConnection *_skCnx;
    BOOL _stepDone;
    NSError *_stepError;
    SKStepWiFiSetupClient *_stepWiFiSetup;
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (copy, nonatomic) id *authPromptHandler; // ivar: _authPromptHandler
@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *overallCompletionHandler; // ivar: _overallCompletionHandler
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) SKDevice *peerDevice; // ivar: _peerDevice
@property (nonatomic) int setupType; // ivar: _setupType
@property (readonly) Class superclass;


-(id)init;
-(void)_activateBLEWithCompletion:(id)arg0 ;
-(void)_activateNANContinueWithError:(id)arg0 ;
-(void)_activateNANWithCompletion:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_completeWithError:(id)arg0 ;
-(void)_invalidated;
-(void)_receivedEventID:(id)arg0 event:(id)arg1 options:(id)arg2 ;
-(void)_receivedRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)_run;
-(void)_runWiFiSetupStart;
-(void)_setupConnectionCommon:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deregisterEventID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deregisterRequestID:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
// -(void)registerEventID:(id)arg0 options:(id)arg1 eventHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)registerRequestID:(id)arg0 options:(id)arg1 requestHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)sendEventID:(id)arg0 eventMessage:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)sendRequestID:(id)arg0 requestMessage:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)tryPassword:(id)arg0 ;


@end


#endif