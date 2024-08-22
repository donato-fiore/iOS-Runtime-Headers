// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCOMMANDTABCONTROLLER_H
#define SBCOMMANDTABCONTROLLER_H

@class NSTimer, UIApplicationSceneDeactivationAssertion, NSOrderedSet, NSMutableSet, SBRecentDisplayItemsDefaults, PTToggleTestRecipe, NSString;
@protocol SBCommandTabViewControllerDelegate, SBRecentDisplayItemsControllerDelegate, SBRecentDisplayItemsPersistenceDelegate, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBCommandTabViewController.h"
#import "SBRecentDisplayItemsController.h"
#import "SBRecentDisplayItemsDataStore.h"
#import "SBWindow.h"

@interface SBCommandTabController : NSObject <SBCommandTabViewControllerDelegate, SBRecentDisplayItemsControllerDelegate, SBRecentDisplayItemsPersistenceDelegate>

 {
    SBCommandTabViewController *_commandTabViewController;
    NSTimer *_timer;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    id<BSInvalidatable> *_keyboardFocusAssertion;
    SBRecentDisplayItemsController *_recentDisplayItemsController;
    NSOrderedSet *_persistedRecentDisplayItems;
    NSMutableSet *_appsAllowedWhileHidden;
    NSObject<OS_dispatch_queue> *_recentDisplayItemsPersistenceQueue;
    SBRecentDisplayItemsDataStore *_dataStore;
    SBRecentDisplayItemsDefaults *_defaults;
    id<BSInvalidatable> *_deferOrientationUpdatesAssertion;
    PTToggleTestRecipe *_testRecipe;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) SBWindow *window; // ivar: _window


+(id)keyCommands;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)dataStore:(id)arg0 shouldRestorePersistedDisplayItem:(id)arg1 ;
-(BOOL)recentDisplayItemsController:(id)arg0 shouldAddItem:(id)arg1 ;
-(id)init;
-(id)persistedDisplayItemsForDataStore:(id)arg0 ;
-(void)_activateWithForwardDirection:(BOOL)arg0 ;
-(void)_allowAppToAppearWhileHidden:(id)arg0 ;
-(void)_clearTimer;
-(void)_disallowAppFromAppearingWhileHidden:(id)arg0 ;
-(void)_emitAnalyticsEventForDisplayItem:(id)arg0 ;
-(void)_showCommandTabBarAfterTimer:(id)arg0 ;
-(void)_showWindow:(BOOL)arg0 ;
-(void)activateWithKeyCommand:(id)arg0 ;
-(void)dataStore:(id)arg0 persistDisplayItems:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)launchCurrentSelectedApplication;
-(void)next;
-(void)previous;
-(void)recentDisplayItemsController:(id)arg0 didRemoveItem:(id)arg1 ;
-(void)recentDisplayItemsControllerDidUpdateDisplayItems:(id)arg0 ;
-(void)removeCurrentSelectedApplication;
-(void)viewController:(id)arg0 selectedApplicationWithDisplayItem:(id)arg1 ;
-(void)viewControllerWantsDismissal:(id)arg0 ;


@end


#endif