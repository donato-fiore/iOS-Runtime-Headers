// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRECENTDISPLAYITEMSCONTROLLER_H
#define SBRECENTDISPLAYITEMSCONTROLLER_H

@class NSMutableOrderedSet, NSSet, NSTimer, NSString, NSOrderedSet;
@protocol SBMainDisplayWorkspaceAppInteractionEventSourceObserving, BSInvalidatable, SBRecentDisplayItemsControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBApplicationController.h"
#import "SBHomeGestureSettings.h"

@interface SBRecentDisplayItemsController : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving>

 {
    NSMutableOrderedSet *_recentDisplayItems;
    NSInteger _removalPersonality;
    NSInteger _movePersonality;
    NSSet *_relevantTransitionFromSources;
    NSUInteger _maxDisplayItems;
    SBApplicationController *_appController;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    NSTimer *_delayAfterTransitionTimer;
    SBHomeGestureSettings *_homeGestureSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRecentDisplayItemsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSOrderedSet *recentDisplayItems;
@property (readonly) Class superclass;


-(BOOL)_displayItem:(id)arg0 matchesBundleID:(id)arg1 ;
-(BOOL)_displayItemIsExecutableOnCurrentPlatform:(id)arg0 ;
-(BOOL)_displayItemRepresentsAppClip:(id)arg0 ;
-(BOOL)_isDisallowedDisplayItem:(id)arg0 ;
-(id)_addStateCaptureHandler;
-(id)_allDisplayItemsForBundleID:(id)arg0 ;
-(id)_allDisplayItemsForUniqueID:(id)arg0 ;
-(id)_allDisplayItemsForWebClipID:(id)arg0 ;
-(id)_allDisplayItemsPassingTest:(id)arg0 ;
-(id)_associatedWebClipIdentifierForAppClipIdentifier:(id)arg0 sceneIdentifier:(id)arg1 ;
-(id)_displayItemForLayoutElement:(id)arg0 ;
-(id)_firstDisplayItemForBundleID:(id)arg0 ;
-(id)_firstDisplayItemForUniqueID:(id)arg0 ;
-(id)_webClipForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithRemovalPersonality:(NSInteger)arg0 movePersonality:(NSInteger)arg1 transitionFromSources:(id)arg2 maxDisplayItems:(NSUInteger)arg3 eventSource:(id)arg4 applicationController:(id)arg5 ;
-(void)_addDisplayItemToFront:(id)arg0 ;
-(void)_addOrMoveDisplayItemToFront:(id)arg0 ;
-(void)_allowAppToAppearWhileHidden:(id)arg0 ;
-(void)_applicationsBecameHidden:(id)arg0 ;
-(void)_clearDelayAfterTransitionTimer;
-(void)_disallowAppFromAppearingWhileHidden:(id)arg0 ;
-(void)_moveDisplayItemToFront:(id)arg0 ;
-(void)_removeDisplayItem:(id)arg0 ;
-(void)_setupDelayAfterTransitionTimerForActivatingElement:(id)arg0 ;
-(void)dealloc;
-(void)eventSource:(id)arg0 applicationsBecameHidden:(id)arg1 ;
-(void)eventSource:(id)arg0 applicationsBecameVisible:(id)arg1 ;
-(void)eventSource:(id)arg0 didBeginTransitionToMode:(NSInteger)arg1 withLayoutState:(id)arg2 activatingElement:(id)arg3 triggeredBy:(NSInteger)arg4 ;
-(void)eventSource:(id)arg0 didFinishTransitionToMode:(NSInteger)arg1 withLayoutState:(id)arg2 activatingElement:(id)arg3 triggeredBy:(NSInteger)arg4 ;
-(void)eventSource:(id)arg0 keyboardFocusChangedToApplication:(id)arg1 ;
-(void)eventSource:(id)arg0 userDeletedApplications:(id)arg1 ;
-(void)eventSource:(id)arg0 userDeletedWebBookmark:(id)arg1 ;
-(void)eventSource:(id)arg0 userQuitApplicationInSwitcher:(id)arg1 ;
-(void)eventSource:(id)arg0 userRemovedSuggestions:(id)arg1 ;
-(void)eventSource:(id)arg0 userTouchedApplication:(id)arg1 ;
-(void)removeDisplayItem:(id)arg0 ;
-(void)reset;


@end


#endif