// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERDRAGANDDROPMANAGER_H
#define SBFLUIDSWITCHERDRAGANDDROPMANAGER_H

@class NSMapTable, NSString, UIDropInteraction, NSMutableSet;
@protocol BSTransactionObserver, SBApplicationDropSessionSceneProviding, UIDropInteractionDelegate_Private, UIDragInteractionDelegate_Private, SBDragAndDropWorkspaceTransactionDelegate, SBFluidSwitcherDragAndDropManagerDelegate, UIDragSession;

#import <Foundation/Foundation.h>

#import "SBDragAndDropWorkspaceTransaction.h"
#import "SBSceneManager.h"
#import "SBFluidSwitcherViewController.h"
#import "SBSwitcherController.h"
#import "SBWindowDragInteraction.h"

@interface SBFluidSwitcherDragAndDropManager : NSObject <BSTransactionObserver, SBApplicationDropSessionSceneProviding, UIDropInteractionDelegate_Private, UIDragInteractionDelegate_Private, SBDragAndDropWorkspaceTransactionDelegate>



@property (retain, nonatomic) NSMapTable *activeDropSessions; // ivar: _activeDropSessions
@property (retain, nonatomic) SBDragAndDropWorkspaceTransaction *activeTransaction; // ivar: _activeTransaction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBFluidSwitcherDragAndDropManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (nonatomic) BOOL hasAddedSwitcherWindowAsDragTarget; // ivar: _hasAddedSwitcherWindowAsDragTarget
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *requiredContextIdentifiersForMedusaDraggingDestination; // ivar: _requiredContextIdentifiersForMedusaDraggingDestination
@property (readonly, weak, nonatomic) SBSceneManager *sceneManager; // ivar: _sceneManager
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) SBFluidSwitcherViewController *switcherContentController; // ivar: _switcherContentController
@property (readonly, weak, nonatomic) SBSwitcherController *switcherController; // ivar: _switcherController
@property (nonatomic) BOOL windowDragHandledByDruid; // ivar: _windowDragHandledByDruid
@property (retain, nonatomic) SBWindowDragInteraction *windowDragInteraction; // ivar: _windowDragInteraction
@property (retain, nonatomic) NSString *windowDragSceneIdentifier; // ivar: _windowDragSceneIdentifier
@property (retain, nonatomic) NSObject<UIDragSession> *windowDragSession; // ivar: _windowDragSession
@property (copy, nonatomic) id *windowDragSessionPrepareCompletionBlock; // ivar: _windowDragSessionPrepareCompletionBlock


-(BOOL)_anyActiveAndVisibleSceneEntityMatches:(id)arg0 ;
-(BOOL)_workspaceWouldAllowTransitionToApplication:(id)arg0 ;
-(BOOL)dragInteraction:(id)arg0 sessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)isApplicationActiveAndVisible:(id)arg0 ;
-(BOOL)isDragAndDropTransactionRunning;
-(BOOL)shouldBeginWindowDragGesture;
-(id)_dragInteraction:(id)arg0 customSpringAnimationBehaviorForCancellingItem:(id)arg1 ;
-(id)_dropInteraction:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)_requiredContextIDsForDragSessionInView:(id)arg0 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithSwitcherController:(id)arg0 delegate:(id)arg1 ;
-(id)mostRecentSceneIdentityExcludingLiveScenesForApplication:(id)arg0 ;
-(id)newSceneIdentityForApplication:(id)arg0 ;
-(id)preferredSceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 preferNewScene:(BOOL)arg2 ;
-(void)_addMedusaDraggingDestinationWindow:(id)arg0 ;
-(void)_beginTrackingDropSessionIfNeeded:(id)arg0 ;
-(void)_dragInteraction:(id)arg0 prepareForSession:(id)arg1 completion:(id)arg2 ;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg0 ;
-(void)_removeMedusaDraggingDestinationWindow:(id)arg0 ;
-(void)dealloc;
-(void)dragAndDropTransaction:(id)arg0 didBeginGesture:(id)arg1 ;
-(void)dragAndDropTransaction:(id)arg0 didEndGesture:(id)arg1 ;
-(void)dragAndDropTransaction:(id)arg0 didPlatterizeWindowDragWithSceneIdentifier:(id)arg1 ;
-(void)dragAndDropTransaction:(id)arg0 didUpdateGesture:(id)arg1 ;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionDidMove:(id)arg1 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)handleWindowDragGestureRecognizer:(id)arg0 ;
-(void)transactionDidComplete:(id)arg0 ;


@end


#endif