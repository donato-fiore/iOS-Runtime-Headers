// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBEXTERNALDISPLAYCONTROLLER_H
#define SBEXTERNALDISPLAYCONTROLLER_H

@class FBSDisplayConfiguration, NSMutableArray, NSString, FBSDisplayIdentity;
@protocol SBSceneLayoutSlaveTransactionProviding, SBFAuthenticationStatusProvider;

#import <Foundation/Foundation.h>

#import "SBMainWorkspace.h"
#import "SBMainDisplaySceneManager.h"
#import "SBExternalDisplayPresenter.h"

@interface SBExternalDisplayController : NSObject <SBSceneLayoutSlaveTransactionProviding>

 {
    SBMainWorkspace *_mainWorkspace;
    id<SBFAuthenticationStatusProvider> *_userAuthenticationProvider;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    SBExternalDisplayPresenter *_presenter;
    FBSDisplayConfiguration *_currentConfiguration;
    BOOL _observingAppState;
    BOOL _hasConnectTransactionRun;
    BOOL _disconnected;
    BOOL _tornDown;
    NSMutableArray *_pendingWork;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // ivar: _identity
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_application:(id)arg0 canAccessDisplay:(id)arg1 ;
-(BOOL)_displayConnectShouldWaitForAppRunning:(id)arg0 ;
-(BOOL)_shouldConnectDisplayNow:(id)arg0 ;
-(BOOL)isConnected;
-(id)_createUpdateTransactionWithLabel:(id)arg0 ;
-(id)_expectedForegroundApp;
-(id)init;
-(id)initWithMainWorkspace:(id)arg0 userAuthenticationProvider:(id)arg1 mainDisplaySceneManager:(id)arg2 layoutPublisher:(id)arg3 displayConfiguration:(id)arg4 ;
-(id)slaveTransactionsForTransitionRequest:(id)arg0 ;
-(void)_appProcessStateDidChange:(id)arg0 ;
-(void)_authenicationStateDidChange:(id)arg0 ;
-(void)_handleDisplayConnectIfPossible;
-(void)_runRootTransaction:(id)arg0 withLabel:(id)arg1 completion:(id)arg2 ;
-(void)_runRootUpdateTransactionWithLabel:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)disconnectWithCompletion:(id)arg0 ;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif