// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSPRINGBOARDSERVERSIDEAPPMANAGER_H
#define AXSPRINGBOARDSERVERSIDEAPPMANAGER_H

@protocol AXSpringBoardServerSideAppManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSpringBoardServerSideAppManager : NSObject

@property (weak, nonatomic) NSObject<AXSpringBoardServerSideAppManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger dockIconActivationMode; // ivar: _dockIconActivationMode


+(id)_mainDisplaySceneManager;
+(id)sharedInstance;
-(BOOL)_hasFloatingApp;
-(BOOL)_hasPinnedApp;
-(BOOL)_isDockIconView:(id)arg0 ;
-(BOOL)canActivateMedusaForDock;
-(BOOL)canLaunchAsFloatingApplicationForIconView:(id)arg0 ;
-(BOOL)canLaunchAsPinnedApplicationForIconView:(id)arg0 ;
-(BOOL)hasMultipleApps;
-(BOOL)isDisplayingApp;
-(BOOL)performMedusaGesture:(NSUInteger)arg0 ;
-(NSInteger)_currentFloatingConfiguration;
-(NSInteger)_currentSpaceConfiguration;
-(id)_activeApplicationBundleIdentifiers;
-(id)_appForLayoutRole:(NSInteger)arg0 layoutState:(id)arg1 ;
-(id)_appWithIdentifier:(id)arg0 ;
-(id)_applicationController;
-(id)_bundleIdentifierForIconView:(id)arg0 ;
-(id)_firstFloatingAppLayout;
-(id)_floatingAppRootViewController;
-(id)_mainDisplaySceneManager;
-(id)_sbEmptyEntity;
-(id)_sbPreviousEntity;
-(id)_sbPreviousWorkspaceEntityClass;
-(id)_sbSwitcherTransitionRequestClass;
-(id)_sbWorkspaceMainWorkspace;
-(id)allowedMedusaGestures;
-(id)appForLayoutRole:(NSInteger)arg0 ;
-(id)init;
-(id)medusaAppBundleIdsToLayoutRoles;
-(id)medusaApps;
-(id)sceneLayoutState;
-(void)_addFloatingApplicationGesturesIfAllowed:(id)arg0 ;
-(void)_addResizeGestureRecognizerGesturesIfAllowed:(id)arg0 ;
-(void)_endDockIconActivationModeAfterTimeout;
-(void)_enumerateAppsAndLayoutRoles:(id)arg0 ;
-(void)_performMedusaGesture:(NSUInteger)arg0 ;
-(void)_performSwipeOnFloatingAppSwitcher:(NSUInteger)arg0 ;
-(void)_performValidation;
-(void)_requestFloatingAppSwitcherVisible;
-(void)_requestTransactionWithPrimaryEntity:(id)arg0 sideEntity:(id)arg1 floatingEntity:(id)arg2 spaceConfiguration:(NSInteger)arg3 floatingConfiguration:(NSInteger)arg4 ;
-(void)launchApplication:(id)arg0 ;
-(void)launchApplicationWithFullConfiguration:(id)arg0 ;
-(void)launchFloatingApplication:(id)arg0 ;
-(void)launchPinnedApplication:(id)arg0 onLeadingSide:(BOOL)arg1 ;


@end


#endif