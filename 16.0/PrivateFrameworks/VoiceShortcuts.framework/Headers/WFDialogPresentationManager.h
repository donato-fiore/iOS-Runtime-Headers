// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDIALOGPRESENTATIONMANAGER_H
#define WFDIALOGPRESENTATIONMANAGER_H

@class NSMutableArray, NSString, NSXPCListener, WFDialogAttribution, WFWorkflowRunningContext, WFScreenOnObserver, WFWorkflowStatusPresenter<WFDialogAlertPresenter>, RBSAssertion;
@protocol NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate, WFWorkflowStatusPresenterDelegate, WFWorkflowStatusHostProtocol, RBSAssertionObserving, WFUIPresenterInterface, WFDialogXPCProtocol, WFWorkflowStatusProtocol, WFDialogPresentationManagerDelegate, OS_dispatch_queue, WFDialogAlertPresenter;

#import <Foundation/Foundation.h>

#import "WFDialogNotificationManager.h"
#import "WFPresentedDialog.h"

@interface WFDialogPresentationManager : NSObject <NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate, WFWorkflowStatusPresenterDelegate, WFWorkflowStatusHostProtocol, RBSAssertionObserving, WFUIPresenterInterface>



@property (readonly, nonatomic) NSMutableArray *attributionsAwaitingStatusPresentation; // ivar: _attributionsAwaitingStatusPresentation
@property (nonatomic) BOOL completePersistentModeAwaitingRemoteAlertReactivationSuccess; // ivar: _completePersistentModeAwaitingRemoteAlertReactivationSuccess
@property (copy, nonatomic) id *completePersistentModeBlockAwaitingRemoteAlertReactivation; // ivar: _completePersistentModeBlockAwaitingRemoteAlertReactivation
@property (retain, nonatomic) NSObject<WFDialogXPCProtocol> *connectedRemoteAlert; // ivar: _connectedRemoteAlert
@property (retain, nonatomic) NSObject<WFWorkflowStatusProtocol> *connectedStatusPresenter; // ivar: _connectedStatusPresenter
@property (readonly, nonatomic) NSMutableArray *contentDismissalCompletionHandlers; // ivar: _contentDismissalCompletionHandlers
@property (readonly, nonatomic) NSMutableArray *contextsAwaitingStatusPresentation; // ivar: _contextsAwaitingStatusPresentation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDialogPresentationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *dismissalReason; // ivar: _dismissalReason
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) WFDialogNotificationManager *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) NSMutableArray *otherPresentationQueue; // ivar: _otherPresentationQueue
@property (readonly, nonatomic) NSMutableArray *persistentPresentationQueue; // ivar: _persistentPresentationQueue
@property (retain, nonatomic) WFDialogAttribution *persistentRunningAttribution; // ivar: _persistentRunningAttribution
@property (retain, nonatomic) WFWorkflowRunningContext *persistentRunningContext; // ivar: _persistentRunningContext
@property (retain, nonatomic) WFPresentedDialog *presentedDialog; // ivar: _presentedDialog
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<WFDialogAlertPresenter> *remoteAlertPresenter; // ivar: _remoteAlertPresenter
@property (readonly, nonatomic) WFScreenOnObserver *screenOnObserver; // ivar: _screenOnObserver
@property (readonly, nonatomic) WFWorkflowStatusPresenter<WFDialogAlertPresenter> *statusPresenter; // ivar: _statusPresenter
@property (retain, nonatomic) RBSAssertion *statusPresenterAssertion; // ivar: _statusPresenterAssertion
@property (readonly) Class superclass;


-(BOOL)hasPersistentState;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)shouldShowStatus;
-(id)initWithListener:(id)arg0 notificationManager:(id)arg1 dialogAlertPresenter:(id)arg2 screenOnObserver:(id)arg3 ;
-(id)initWithUserNotificationManager:(id)arg0 ;
-(void)acquireStatusPresenterAssertionIfNecessary;
-(void)activateRemoteAlert;
-(void)activateRemoteAlertTiedToBundleIdentifier:(id)arg0 ;
-(void)activateStatusPresenter;
-(void)assertion:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)beginConnection;
-(void)beginPersistentModeWithRunningContext:(id)arg0 attribution:(id)arg1 completionHandler:(id)arg2 ;
-(void)completePersistentModeWithSuccess:(id)arg0 runningContext:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)dialogAlertPresenter:(id)arg0 didConnectToAlert:(id)arg1 ;
-(void)dialogAlertPresenterDidDeactivateAlert:(id)arg0 ;
-(void)dialogAlertPresenterDidDisconnectFromAlert:(id)arg0 ;
-(void)dialogAlertPresenterDidInvalidateAlert:(id)arg0 ;
-(void)dismissPersistentChromeInDialog:(id)arg0 success:(BOOL)arg1 customAttribution:(id)arg2 completionHandler:(id)arg3 ;
-(void)dismissPresentedContentForRunningContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)logFinishDialogPresentationWithPresentedDialog:(id)arg0 ;
-(void)logFinishDialogPresentationWithRequest:(id)arg0 presentationMode:(NSUInteger)arg1 automationType:(id)arg2 ;
-(void)logStartDialogPresentationWithRequest:(id)arg0 presentationMode:(NSUInteger)arg1 ;
-(void)postNotificationWithRequest:(id)arg0 presentationMode:(NSUInteger)arg1 context:(id)arg2 ;
-(void)removeStaleNotifications;
-(void)requestDismissalWithReason:(id)arg0 ;
-(void)screenOnStateDidChange:(id)arg0 ;
-(void)showDialogRequest:(id)arg0 runningContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)statusPresenterDidConnectToService:(id)arg0 ;
-(void)trackDialogEventWithKey:(id)arg0 request:(id)arg1 presentationMode:(NSUInteger)arg2 automationType:(id)arg3 ;
-(void)trackSuspendShortcutWithPresentedDialog:(id)arg0 ;
-(void)workflowStatusHostBeginConnection;


@end


#endif