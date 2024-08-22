// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLISTITEMACTIVITYPROVIDER_H
#define CSLISTITEMACTIVITYPROVIDER_H

@class ACActivityCenter, NSMutableDictionary, DMFApplicationPolicyMonitor, NSString, NSMutableArray;
@protocol ACUISActivityHostViewControllerDelegate, CSListItemSceneHostEnvironmentObserving, CSListItemProviding, BSInvalidatable, CSListItemManaging;

#import <Foundation/Foundation.h>


@interface CSListItemActivityProvider : NSObject <ACUISActivityHostViewControllerDelegate, CSListItemSceneHostEnvironmentObserving, CSListItemProviding>



@property (retain, nonatomic) ACActivityCenter *activityCenter; // ivar: _activityCenter
@property (retain, nonatomic) NSObject<BSInvalidatable> *activityContentUpdateSubscriber; // ivar: _activityContentUpdateSubscriber
@property (retain, nonatomic) NSObject<BSInvalidatable> *activityExceedingReducedPushLevelSubscriber; // ivar: _activityExceedingReducedPushLevelSubscriber
@property (retain, nonatomic) NSMutableDictionary *activityHostViewControllersByActivityIdentifier; // ivar: _activityHostViewControllersByActivityIdentifier
@property (retain, nonatomic) NSMutableDictionary *activityIdentifiersToSupplemantaryItems; // ivar: _activityIdentifiersToSupplemantaryItems
@property (retain, nonatomic) NSMutableDictionary *activityItemsByBundleId; // ivar: _activityItemsByBundleId
@property (readonly, nonatomic) DMFApplicationPolicyMonitor *applicationPolicyMonitor; // ivar: _applicationPolicyMonitor
@property (retain, nonatomic) NSMutableDictionary *bundleIdentifiersToItems; // ivar: _bundleIdentifiersToItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *descriptorByActivityIdentifier; // ivar: _descriptorByActivityIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *hiddenItems; // ivar: _hiddenItems
@property (readonly, nonatomic) NSUInteger itemCount;
@property (retain, nonatomic) NSObject<CSListItemManaging> *itemManager; // ivar: _itemManager
@property (readonly, nonatomic) id *itemsGroupSortComparator;
@property (readonly, nonatomic) id *itemsViewControllerSortComparator;
@property (nonatomic) BOOL listHasAdditionalContent;
@property (readonly) Class superclass;


+(id)section;
-(BOOL)_itemIsNowPlaying:(id)arg0 ;
-(BOOL)_shouldEnableActivities;
-(CGFloat)_relevanceScoreForItemWithViewController:(id)arg0 ;
-(id)_appNameForBundleIdentifier:(id)arg0 ;
-(id)_authorizationActionsForOptionsType:(NSInteger)arg0 item:(id)arg1 configuration:(id)arg2 ;
-(id)_buildConfigurationFromViewController:(id)arg0 ;
-(id)_createdDateForItemWithViewController:(id)arg0 ;
-(id)_latestActivityCreationDateForGroupingIdentifier:(id)arg0 ;
-(id)_primaryActionTitleForAuthorizationOptionsType:(NSInteger)arg0 ;
-(id)_secondaryActionTitleForAuthorizationOptionsType:(NSInteger)arg0 ;
-(id)_summaryTextForAuthorizationOptionsType:(NSInteger)arg0 appName:(id)arg1 ;
-(id)init;
-(void)_addActivityWithContentUpdate:(id)arg0 ;
-(void)_addAppActivitiesRecordForBundleId:(id)arg0 activityItem:(id)arg1 ;
-(void)_clearAuthorizationOptionsIfNecessaryForGroupingIdentifier:(id)arg0 ;
-(void)_enableActivities:(BOOL)arg0 ;
-(void)_endAllActivitiesForBundleId:(id)arg0 ;
-(void)_handleActivityExceedingReducedPushBudgetWithIdentifier:(id)arg0 ;
-(void)_handleActivityWithContentUpdate:(id)arg0 ;
-(void)_hostShouldCancelTouchesWithIdentifier:(id)arg0 ;
-(void)_removeActivityWithContentUpdate:(id)arg0 ;
-(void)_removeAppActivitiesRecordForBundleId:(id)arg0 activityItem:(id)arg1 ;
-(void)_sendAnalyticsEventWithName:(id)arg0 payloadBuilder:(id)arg1 ;
-(void)_setActivitiesEnabled:(BOOL)arg0 forBundleId:(id)arg1 ;
-(void)_setFrequentUpdatesEnabled:(BOOL)arg0 forBundleId:(id)arg1 ;
-(void)_setHidden:(BOOL)arg0 forItem:(id)arg1 ;
-(void)_significantUserInteractionBeganForIdentifier:(id)arg0 ;
-(void)_significantUserInteractionEndedForIdentifier:(id)arg0 ;
-(void)_unlockAndLaunchAppIfPossible:(id)arg0 withAction:(id)arg1 ;
-(void)_updateActivityIfNeededWithContentUpdate:(id)arg0 ;
-(void)_updateAllApplicationMonitoringPolicies;
-(void)_updateForScreenTimeLimitForBundleId:(id)arg0 policy:(id)arg1 ;
-(void)activityHostViewController:(id)arg0 requestsLaunchWithAction:(id)arg1 ;
-(void)activityHostViewControllerBackgroundTintColorDidChange:(id)arg0 ;
-(void)activityHostViewControllerHostShouldCancelTouches:(id)arg0 ;
-(void)activityHostViewControllerSignificantUserInteractionBegan:(id)arg0 ;
-(void)activityHostViewControllerSignificantUserInteractionEnded:(id)arg0 ;
-(void)activityHostViewControllerTextColorDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didAddNewSceneHostEnvironment;
-(void)handleRemovedItems:(id)arg0 ;
-(void)restrictsTouches:(BOOL)arg0 onHostedSceneInViewController:(id)arg1 ;
-(void)restrictsTouchesOnAllHostedScenes:(BOOL)arg0 ;


@end


#endif