// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMESSAGESSCENEDELEGATE_H
#define CKMESSAGESSCENEDELEGATE_H

@class NSSet;
@protocol CKMessagesControllerDelegate, CKAlertSuppressionContextsProviding;


#import "CKSceneDelegate.h"
#import "CKRegistrationViewController.h"
#import "CKMessagesController.h"
#import "CKSceneDelegateState.h"

@interface CKMessagesSceneDelegate : CKSceneDelegate <CKMessagesControllerDelegate, CKAlertSuppressionContextsProviding>



@property (readonly, nonatomic) NSSet *alertSuppressionContexts;
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (retain, nonatomic) CKRegistrationViewController *madridRegistrationController; // ivar: _madridRegistrationController
@property (readonly, nonatomic) CKMessagesController *messagesController; // ivar: _messagesController
@property (nonatomic) BOOL shouldShowRegistrationOverride; // ivar: _shouldShowRegistrationOverride
@property (retain, nonatomic) CKSceneDelegateState *storedState; // ivar: _storedState
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


-(BOOL)_messageUnknownFilteringEnabled;
-(BOOL)_restoreState:(id)arg0 ;
-(BOOL)_shouldShowMadridRegistrationView;
-(BOOL)hasBusinessRecipientWithRecipientIDs:(id)arg0 ;
-(BOOL)restoreStateFromUserActivity:(id)arg0 ;
-(BOOL)shouldRestoreToConversationListForState:(id)arg0 ;
-(NSInteger)type;
-(id)_oldInputContextIdentifiers;
-(id)canActivatePredicate;
-(id)init;
-(id)prefersToActivatePredicate;
-(id)sharedConversationList;
-(id)stateRestorationActivityForScene:(id)arg0 ;
-(id)validIntentDictionaryWithURLParameters:(id)arg0 ;
-(void)__showMadridRegistrationViewIfNecessary;
-(void)__updateAppSnapshot;
-(void)_chatItemsDidChange:(id)arg0 ;
-(void)_clearOldInputContextIdentifiersIfNeeded;
-(void)_conversationFilteringStateChangedNotification:(id)arg0 ;
-(void)_createMadridRegistrationViewIfNecessary;
-(void)_destroyMadridRegistrationView;
-(void)_handleAccountsChanged:(id)arg0 ;
-(void)_handleDaemonConnected:(id)arg0 ;
-(void)_handleDaemonDisconnected:(id)arg0 ;
-(void)_prepareForResume:(BOOL)arg0 ;
-(void)_prepareForSuspend;
-(void)_scheduleDeferredSetup;
-(void)_setMessageFilterModeBy:(id)arg0 ;
-(void)_showMadridRegistrationViewIfNecessary;
-(void)_showPeerPaymentUIForPerson:(id)arg0 amount:(id)arg1 ;
-(void)_updateAppSnapshot;
-(void)_updateMadridRegistrationViewAnimated:(BOOL)arg0 ;
-(void)_updateStoredState;
-(void)dealloc;
-(void)loadConversationWithMessageGUID:(id)arg0 withInlineReplyOverlay:(BOOL)arg1 ;
-(void)messagesController:(id)arg0 didUpdateCurrentConversation:(id)arg1 ;
-(void)openSMSURL:(id)arg0 ;
-(void)openSURFURL:(id)arg0 ;
-(void)openURL:(id)arg0 sourceApplication:(id)arg1 ;
-(void)scene:(id)arg0 continueUserActivity:(id)arg1 ;
-(void)scene:(id)arg0 openURLContexts:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;
-(void)windowScene:(id)arg0 performActionForShortcutItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)windowSceneDidBecomeVisible:(id)arg0 ;


@end


#endif