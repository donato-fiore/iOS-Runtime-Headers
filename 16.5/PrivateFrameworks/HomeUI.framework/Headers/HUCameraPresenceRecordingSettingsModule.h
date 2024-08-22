// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERAPRESENCERECORDINGSETTINGSMODULE_H
#define HUCAMERAPRESENCERECORDINGSETTINGSMODULE_H

@class NSSet, HFItem, NSNumber, NSString, FeatureChangeObserver, HMHome, HFStaticItemProvider, NSArray, UIViewController;
@protocol ICQUpgradeFlowManagerDelegate, HUCameraSettingsModule;


#import "HUExpandableItemModule.h"
#import "HUCameraUsageOptionItemProvider.h"

@interface HUCameraPresenceRecordingSettingsModule : HUExpandableItemModule <ICQUpgradeFlowManagerDelegate, HUCameraSettingsModule>

 {
    NSSet *_itemProviders;
    HFItem *_showOptionsItem;
}


@property (readonly, nonatomic) NSUInteger accessModeSetting;
@property (readonly, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (retain, nonatomic) NSNumber *currentPlanCameraCount; // ivar: _currentPlanCameraCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCompleteCloudUpgradeOffer; // ivar: _didCompleteCloudUpgradeOffer
@property (readonly, nonatomic) NSUInteger displayStyle;
@property (retain, nonatomic) FeatureChangeObserver *featureChangeObserver; // ivar: _featureChangeObserver
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFStaticItemProvider *itemProvider; // ivar: _itemProvider
@property (readonly, nonatomic) NSString *longestCameraUsageOptionItemTitle; // ivar: _longestCameraUsageOptionItemTitle
@property (nonatomic) NSUInteger numCamerasSupportRecordingService; // ivar: _numCamerasSupportRecordingService
@property (nonatomic) NSUInteger offerState; // ivar: _offerState
@property (retain, nonatomic) NSArray *optionItems; // ivar: _optionItems
@property (nonatomic) BOOL pendingUpgradeRequest; // ivar: _pendingUpgradeRequest
@property (readonly, nonatomic) NSUInteger presenceEventType; // ivar: _presenceEventType
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) HUCameraUsageOptionItemProvider *recordingSettingItemProvider; // ivar: _recordingSettingItemProvider
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger upgradeState; // ivar: _upgradeState
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


+(id)messageForHomeOwnerQuotaAlertForCameraCount:(id)arg0 ;
+(id)messageForQuotaAlertForCameraCount:(id)arg0 ;
+(id)stringFromNumber:(id)arg0 ;
+(id)titleForHomeOwnerQuotaAlertForCameraCount:(id)arg0 ;
+(id)titleForQuotaAlertForCameraCount:(id)arg0 ;
+(id)upgradeURLForCameraCount:(id)arg0 ;
-(BOOL)isItemHeader:(id)arg0 ;
-(NSUInteger)countCameraProfilesWithRecordingService;
-(id)_titleString;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)didSelectItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 cameraProfiles:(id)arg1 presenceEventType:(NSUInteger)arg2 ;
-(id)showOptionsItem;
-(id)updateStreamingSetting:(NSUInteger)arg0 isRetry:(BOOL)arg1 ;
-(void)_buildItemProvider;
-(void)_clearItemsUpdating;
-(void)_dispatchUpdateForCameraProfile:(id)arg0 ;
-(void)_presentCloudUpgradeFlowWithCameraCount:(NSUInteger)arg0 ;
-(void)clearLoadingIndicator;
-(void)dealloc;
-(void)presentCloudUpgradeFlowWithCameraCount:(NSUInteger)arg0 ;
-(void)presentGenericError;
-(void)presentHomeOwnerQuotaAlertForOverflowCount:(NSInteger)arg0 ;
-(void)presentInsufficientPrivilegesAlert;
-(void)presentMissingSupportedHubAlert;
-(void)presentSharedAdminQuotaAlertForCount:(NSUInteger)arg0 ;
-(void)sendCAMetricInfo;
-(void)updatePlanCameraCount;
-(void)upgradeFlowManagerDidCancel:(id)arg0 ;
-(void)upgradeFlowManagerDidComplete:(id)arg0 ;


@end


#endif