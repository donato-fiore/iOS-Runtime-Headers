// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYAPPINTERACTIONEVENTSOURCE_H
#define SBDISPLAYAPPINTERACTIONEVENTSOURCE_H

@class SBFAnalyticsClient, NSString, NSHashTable, BKSTouchDeliveryObservationService;
@protocol BKSTouchDeliveryObserving, FBSDisplayLayoutPublisherObserving, SBApplicationRestrictionObserver, SBLayoutStateTransitionObserver, SBAppInteractionEventSourceProviding, FBSDisplayLayoutPublishing;

#import <Foundation/Foundation.h>

#import "SBApplicationController.h"
#import "SBApplicationRestrictionController.h"
#import "SBLayoutStateTransitionCoordinator.h"

@interface SBDisplayAppInteractionEventSource : NSObject <BKSTouchDeliveryObserving, FBSDisplayLayoutPublisherObserving, SBApplicationRestrictionObserver, SBLayoutStateTransitionObserver, SBAppInteractionEventSourceProviding>



@property (weak, nonatomic) SBFAnalyticsClient *analyticsClient; // ivar: _analyticsClient
@property (weak, nonatomic) SBApplicationController *applicationController; // ivar: _applicationController
@property (weak, nonatomic) SBApplicationRestrictionController *applicationRestrictionController; // ivar: _applicationRestrictionController
@property (copy, nonatomic) NSString *currentFocusedBundleID; // ivar: _currentFocusedBundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FBSDisplayLayoutPublishing> *displayLayoutPublisher; // ivar: _displayLayoutPublisher
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // ivar: _layoutStateTransitionCoordinator
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (weak, nonatomic) BKSTouchDeliveryObservationService *touchDeliveryObservationService; // ivar: _touchDeliveryObservationService


-(id)_bundleIDsForIcons:(id)arg0 ;
-(id)_initWithAnalyticsClient:(id)arg0 applicationController:(id)arg1 applicationRestrictionController:(id)arg2 iconModel:(id)arg3 layoutStateTransitionCoordinator:(id)arg4 displayLayoutPublisher:(id)arg5 touchDeliveryObservationService:(id)arg6 ;
-(void)_configureEventSourceWithAnalyticsClient:(id)arg0 applicationController:(id)arg1 applicationRestrictionController:(id)arg2 iconModel:(id)arg3 layoutStateTransitionCoordinator:(id)arg4 displayLayoutPublisher:(id)arg5 touchDeliveryObservationService:(id)arg6 ;
-(void)_iconVisibilityDidChange:(id)arg0 ;
-(void)_installedAppsDidChange:(id)arg0 ;
-(void)_noteTouchForProcess:(int)arg0 context:(unsigned int)arg1 ;
-(void)_notifyTransition:(id)arg0 beginning:(BOOL)arg1 ;
-(void)_userQuitApplication:(id)arg0 ;
-(void)_userRemovedSuggestion:(id)arg0 ;
-(void)_webBookmarkUninstalled:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applicationRestrictionController:(id)arg0 didUpdateVisibleTags:(id)arg1 hiddenTags:(id)arg2 ;
-(void)dealloc;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)publisher:(id)arg0 didUpdateLayout:(id)arg1 withTransition:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)touchDetachedForIdentifier:(unsigned int)arg0 context:(unsigned int)arg1 pid:(int)arg2 ;
-(void)touchUpOccuredForIdentifier:(unsigned int)arg0 detached:(BOOL)arg1 context:(unsigned int)arg2 pid:(int)arg3 ;
-(void)windowSceneDidConnect:(id)arg0 ;


@end


#endif