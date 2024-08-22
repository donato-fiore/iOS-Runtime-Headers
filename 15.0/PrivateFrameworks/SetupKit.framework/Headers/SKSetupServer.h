// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKSETUPSERVER_H
#define SKSETUPSERVER_H

@class CBAdvertiser, CBServer, NSString, CUNANPublisher, NSMutableDictionary;
@protocol CUActivatable, CUAuthenticatableServer, CULabelable, CUMessaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKConnection.h"
#import "SKStepWiFiSetupServer.h"

@interface SKSetupServer : NSObject <CUActivatable, CUAuthenticatableServer, CULabelable, CUMessaging>

 {
    BOOL _activateCalled;
    unsigned short _bleAdvertisePSM;
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_nanEndpointID;
    CUNANPublisher *_nanPublisher;
    NSMutableDictionary *_registeredEvents;
    NSMutableDictionary *_registeredRequests;
    SKConnection *_skCnx;
    SKStepWiFiSetupServer *_stepWiFiSetup;
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (copy, nonatomic) id *authHidePasswordHandler; // ivar: _authHidePasswordHandler
@property (copy, nonatomic) id *authShowPasswordHandler; // ivar: _authShowPasswordHandler
@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *overallCompletionHandler; // ivar: _overallCompletionHandler
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int passwordType; // ivar: _passwordType
@property (nonatomic) int setupType; // ivar: _setupType
@property (readonly) Class superclass;


-(BOOL)_bleAdvertiserShouldRun;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_bleAdvertiserEnsureStarted;
-(void)_bleAdvertiserEnsureStopped;
-(void)_bleServerEnsureStarted;
-(void)_bleServerEnsureStopped;
-(void)_handleAcceptBLEConnection:(id)arg0 ;
-(void)_handleAcceptCommon:(id)arg0 ;
-(void)_handleAcceptNANData:(id)arg0 endpoint:(id)arg1 ;
-(void)_invalidated;
-(void)_nanPublisherEnsureStarted;
-(void)_nanPublisherEnsureStopped;
-(void)_prepareStepWiFiSetup;
-(void)_prepareSteps;
-(void)_receivedEventID:(id)arg0 event:(id)arg1 options:(id)arg2 ;
-(void)_receivedRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)_update;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deregisterEventID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deregisterRequestID:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
// -(void)registerEventID:(id)arg0 options:(id)arg1 eventHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)registerRequestID:(id)arg0 options:(id)arg1 requestHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)sendEventID:(id)arg0 eventMessage:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)sendRequestID:(id)arg0 requestMessage:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;


@end


#endif