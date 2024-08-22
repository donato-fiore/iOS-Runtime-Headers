// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLISTITEMSESSIONPROVIDER_H
#define CSLISTITEMSESSIONPROVIDER_H

@class NSString, NSMutableDictionary;
@protocol ACUISActivityHostViewControllerDelegate, SNUISessionHostViewControllerDelegate, CSListItemSceneHostEnvironmentObserving, CSListItemProviding, BSInvalidatable, CSListItemManaging;

#import <Foundation/Foundation.h>


@interface CSListItemSessionProvider : NSObject <ACUISActivityHostViewControllerDelegate, SNUISessionHostViewControllerDelegate, CSListItemSceneHostEnvironmentObserving, CSListItemProviding>



@property (retain, nonatomic) NSObject<BSInvalidatable> *activitySubscriber; // ivar: _activitySubscriber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger itemCount;
@property (retain, nonatomic) NSObject<CSListItemManaging> *itemManager; // ivar: _itemManager
@property (nonatomic) BOOL listHasAdditionalContent;
@property (retain, nonatomic) NSMutableDictionary *sessionIdentifiersToSupplemantaryItems; // ivar: _sessionIdentifiersToSupplemantaryItems
@property (retain, nonatomic) NSMutableDictionary *sessionKitIdentifiersToProvider; // ivar: _sessionKitIdentifiersToProvider
@property (retain, nonatomic) NSObject<BSInvalidatable> *sessionSubscriber; // ivar: _sessionSubscriber
@property (readonly) Class superclass;


+(id)section;
-(BOOL)_itemIsNowPlaying:(id)arg0 ;
-(BOOL)_shouldEnableSessions;
-(id)_appNameForBundleIdentifier:(id)arg0 ;
-(id)_authorizationActionsForViewController:(id)arg0 item:(id)arg1 configuration:(id)arg2 ;
-(id)_buildConfigurationFromViewController:(id)arg0 ;
-(id)init;
-(void)_addActivityWithProvider:(id)arg0 ;
-(void)_addSessionWithProvider:(id)arg0 ;
-(void)_disableActivitiesForBundleId:(id)arg0 ;
-(void)_enableSessions:(BOOL)arg0 ;
-(void)_handleActivityWithProvider:(id)arg0 ;
-(void)_handleSessionWithProvider:(id)arg0 ;
-(void)_hostShouldCancelTouchesWithIdentifier:(id)arg0 ;
-(void)_removeActivityWithProvider:(id)arg0 ;
-(void)_removeSessionKitProviderFromDictionary:(id)arg0 ;
-(void)_removeSessionWithProvider:(id)arg0 ;
-(void)_significantUserInteractionBeganForIdentifier:(id)arg0 ;
-(void)_significantUserInteractionEndedForIdentifier:(id)arg0 ;
-(void)_unlockAndLaunchAppIfPossible:(id)arg0 withAction:(id)arg1 ;
-(void)activityHostViewController:(id)arg0 requestsLaunchWithAction:(id)arg1 ;
-(void)activityHostViewControllerBackgroundTintColorDidChange:(id)arg0 ;
-(void)activityHostViewControllerHostShouldCancelTouches:(id)arg0 ;
-(void)activityHostViewControllerSignificantUserInteractionBegan:(id)arg0 ;
-(void)activityHostViewControllerSignificantUserInteractionEnded:(id)arg0 ;
-(void)activityHostViewControllerTextColorDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didAddNewSceneHostEnvironment;
-(void)handleRemovedItems:(id)arg0 ;
-(void)sessionHostViewControllerHostShouldCancelTouches:(id)arg0 ;
-(void)sessionHostViewControllerSignificantUserInteractionBegan:(id)arg0 ;
-(void)sessionHostViewControllerSignificantUserInteractionEnded:(id)arg0 ;


@end


#endif