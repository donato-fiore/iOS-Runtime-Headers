// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACTIVITYSYSTEMAPERTUREELEMENTOBSERVER_H
#define SBACTIVITYSYSTEMAPERTUREELEMENTOBSERVER_H

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSMutableOrderedSet, NSMapTable, NSString;
@protocol ACUISSystemApertureSceneHandleDelegate, SBActivityObserver;

#import <Foundation/Foundation.h>


@interface SBActivitySystemApertureElementObserver : NSObject <ACUISSystemApertureSceneHandleDelegate, SBActivityObserver>

 {
    NSMutableDictionary *_sceneHandleByActivityIdentifier;
    NSMutableDictionary *_elementAssertionByActivityIdentifier;
    NSMutableDictionary *_elementByActivityIdentifier;
    NSMutableDictionary *_prominenceAssertionByActivityIdentifier;
    NSMutableDictionary *_activeItemByActivityIdentifier;
    NSMutableDictionary *_contentPayloadIDsByActivityIdentifier;
    NSMutableArray *_pendingItems;
    NSMutableSet *_activeWidgetActivitiesWithSceneHandles;
    NSMutableOrderedSet *_pendingAlerts;
    NSMapTable *_alertingAssertionsByActivityIdentifier;
    BOOL _preparingElementForPendingAlert;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_activityIsPendingForIdentifier:(id)arg0 ;
-(BOOL)_canPresentAlert;
-(BOOL)_canRegisterElementForActivityItem:(id)arg0 ;
-(BOOL)_hasValidAlertingAssertion;
-(BOOL)_isContentReadyForAlert:(id)arg0 ;
-(BOOL)_registeredElementExistsForBundleIdentifier:(id)arg0 ;
-(BOOL)_shouldHandleActivityItem:(id)arg0 ;
-(BOOL)_shouldSwapActivityItem:(id)arg0 withOtherItem:(id)arg1 ;
-(id)_createSystemApertureSceneHandleWithItem:(id)arg0 ;
-(id)_pendingItemForAlert:(id)arg0 ;
-(id)_registeredElementForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)_addPendingItemIfNecessary:(id)arg0 ;
-(void)_cleanUpAlertPresentation:(id)arg0 ;
-(void)_createAndActivateElementForActivityItem:(id)arg0 completion:(id)arg1 ;
-(void)_createAndActivateSystemApertureElementWithScene:(id)arg0 item:(id)arg1 completion:(id)arg2 ;
-(void)_invalidateSystemApertureElementForItem:(id)arg0 activityEnding:(BOOL)arg1 completion:(id)arg2 ;
-(void)_playSoundWithAlert:(id)arg0 ;
-(void)_prepareAndPresentActivityAlert:(id)arg0 ;
-(void)_prepareForAlertingActivityIfNecessary:(id)arg0 completion:(id)arg1 ;
-(void)_presentAlert:(id)arg0 ;
-(void)_presentOrPendActivityAlert:(id)arg0 ;
-(void)_presentPendingAlertIfNecessary;
-(void)_presentPendingAlertIfNecessaryForActivityIdentifier:(id)arg0 ;
-(void)_registerSystemApertureElementForPendingActivityIfNecessary;
-(void)_removePendingItem:(id)arg0 ;
-(void)_removeSystemApertureSceneHandleWithItem:(id)arg0 activityEnding:(BOOL)arg1 ;
-(void)_sendAnalyticsEventWithPayloadBuilder:(id)arg0 ;
-(void)_swapActivityItem:(id)arg0 withItem:(id)arg1 ;
-(void)_turnScreenOn:(BOOL)arg0 playSound:(BOOL)arg1 forAlert:(id)arg2 ;
-(void)_unlockAndLaunchAppIfPossible:(id)arg0 withAction:(id)arg1 ;
-(void)_updatePendingItemWithItem:(id)arg0 ;
-(void)_updateSystemApertureElementProminence:(BOOL)arg0 forActivityIdentifier:(id)arg1 ;
-(void)activityDidEnd:(id)arg0 ;
-(void)activityDidStart:(id)arg0 ;
-(void)activityDidUpdate:(id)arg0 ;
-(void)activitySystemApertureSceneHandle:(id)arg0 requestsLaunchWithAction:(id)arg1 ;
-(void)activitySystemApertureSceneHandle:(id)arg0 updatedContentPayloadID:(id)arg1 ;
-(void)activityWasBlockedForItem:(id)arg0 ;
-(void)activityWasUnblockedForItem:(id)arg0 ;
-(void)dismissAlert:(id)arg0 ;
-(void)presentAlert:(id)arg0 ;


@end


#endif