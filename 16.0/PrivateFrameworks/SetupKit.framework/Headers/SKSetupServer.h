// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSETUPSERVER_H
#define SKSETUPSERVER_H

@class CBAdvertiser, CBServer, NSString, CUNANPublisher, CWFActivity, CWFInterface;
@protocol CUActivatable, CUAuthenticatableServer, OS_dispatch_queue;


#import "SKSetupBase.h"

@interface SKSetupServer : SKSetupBase <CUActivatable, CUAuthenticatableServer>

 {
    unsigned short _bleAdvertisePSM;
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _completed;
    NSString *_nanEndpointID;
    CUNANPublisher *_nanPublisher;
    CWFActivity *_wifiKeepAliveActivity;
    CWFInterface *_wifiKeepAliveInterface;
    *__WiFiManagerClient _wifiManager;
}


@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (copy, nonatomic) id *authHidePasswordHandler; // ivar: _authHidePasswordHandler
@property (copy, nonatomic) id *authShowPasswordHandler; // ivar: _authShowPasswordHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *overallCompletionHandler; // ivar: _overallCompletionHandler
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly) Class superclass;


-(BOOL)_bleAdvertiserShouldRun;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_bleAdvertiserEnsureStarted;
-(void)_bleAdvertiserEnsureStopped;
-(void)_bleServerEnsureStarted;
-(void)_bleServerEnsureStopped;
-(void)_handleAcceptBLEConnection:(id)arg0 ;
-(void)_handleAcceptCommon:(id)arg0 ;
-(void)_handleAcceptNANData:(id)arg0 endpoint:(id)arg1 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_nanPublisherEnsureStarted;
-(void)_nanPublisherEnsureStopped;
-(void)_prepareSteps;
-(void)_prepareStepsOSRecovery;
-(void)_update;
-(void)_wifiKeepAliveEnsureStarted;
-(void)_wifiKeepAliveEnsureStopped;
-(void)activateWithCompletion:(id)arg0 ;
-(void)reset;


@end


#endif