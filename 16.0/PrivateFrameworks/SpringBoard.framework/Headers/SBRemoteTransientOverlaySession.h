// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREMOTETRANSIENTOVERLAYSESSION_H
#define SBREMOTETRANSIENTOVERLAYSESSION_H

@class BSTransaction, NSMutableDictionary, NSHashTable, NSMutableArray, NSString, SBSRemoteAlertDefinition, NSError;
@protocol SBRemoteTransientOverlayViewControllerDelegate, SBRemoteTransientOverlaySessionHostDelegate;

#import <Foundation/Foundation.h>

#import "SBRemoteTransientOverlayViewController.h"

@interface SBRemoteTransientOverlaySession : NSObject <SBRemoteTransientOverlayViewControllerDelegate>

 {
    BSTransaction *_activeTransaction;
    SBRemoteTransientOverlayViewController *_containerViewController;
    SBRemoteTransientOverlayViewController *_secondaryViewController;
    BOOL _prefersEmbeddedDisplayPresentation;
    BOOL _hasInitiatedPresentation;
    BOOL _hasPresented;
    BOOL _hasPresentedSecondaryVC;
    NSMutableDictionary *_identifierToHandlingButtonEvents;
    NSHashTable *_observers;
    NSMutableArray *_pendingTransactions;
}


@property (readonly, nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) SBSRemoteAlertDefinition *definition; // ivar: _definition
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBRemoteTransientOverlaySessionHostDelegate> *hostDelegate; // ivar: _hostDelegate
@property (readonly, nonatomic, getter=isPendingInvalidation) BOOL pendingInvalidation; // ivar: _pendingInvalidation
@property (readonly, nonatomic, getter=isPrepared) BOOL prepared; // ivar: _prepared
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSwitcherEligible) BOOL switcherEligible;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(BOOL)hasPendingButtonEvents:(NSUInteger)arg0 ;
-(BOOL)hasServiceProcessIdentifier:(int)arg0 ;
-(BOOL)remoteTransientOverlayViewController:(id)arg0 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg1 ;
-(id)_actionForHandlingButtonEvents:(NSUInteger)arg0 ;
-(id)_initWithSessionID:(id)arg0 definition:(id)arg1 ;
-(id)remoteTransientOverlayViewController:(id)arg0 requestsActionForHandlingButtonEvents:(NSUInteger)arg1 ;
-(void)_addTransaction:(id)arg0 ;
-(void)_didActivate;
-(void)_didDeactivate;
-(void)_invalidateWithReason:(NSInteger)arg0 error:(id)arg1 ;
-(void)_processPendingTransactions;
-(void)_registerObserversForTransaction:(id)arg0 ;
-(void)_requestInvalidationWithReason:(NSInteger)arg0 error:(id)arg1 ;
-(void)activateWithContext:(id)arg0 ;
-(void)addSessionObserver:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)getActionForHandlingButtonEvents:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)prepareWithConfigurationContext:(id)arg0 ;
-(void)remoteTransientOverlayViewController:(id)arg0 didAppearAnimated:(BOOL)arg1 ;
-(void)remoteTransientOverlayViewController:(id)arg0 didDisappearAnimated:(BOOL)arg1 ;
-(void)remoteTransientOverlayViewController:(id)arg0 didTerminateWithError:(id)arg1 ;
-(void)remoteTransientOverlayViewController:(id)arg0 willAppearAnimated:(BOOL)arg1 ;
-(void)remoteTransientOverlayViewControllerDidInvalidate:(id)arg0 ;
-(void)remoteTransientOverlayViewControllerRequestsDeactivation:(id)arg0 ;
-(void)remoteTransientOverlayViewControllerRequestsInvalidation:(id)arg0 ;
-(void)removeSessionObserver:(id)arg0 ;


@end


#endif