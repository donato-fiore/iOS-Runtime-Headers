// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFMEDIAACCESSORYITEM_H
#define HFMEDIAACCESSORYITEM_H

@class NSSet, NSString, HMHome;
@protocol HFAccessoryRepresentableItem, HFMediaAccessoryProtocol, HFMediaAccessoryLikeItem, HFActionBuilderFactory, HFAccessoryRepresentable, HFHomeKitObject, HFHomeKitSettingsVendor, HFMediaProfileContainer, HFMediaValueSource, HFCharacteristicValueSource;


#import "HFItem.h"
#import "HFMediaAccessoryCommonSettingsManager.h"

@interface HFMediaAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFMediaAccessoryProtocol, HFMediaAccessoryLikeItem, HFActionBuilderFactory>



@property (readonly, nonatomic) NSSet *accessoriesSupportingSoftwareUpdate;
@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, nonatomic) BOOL allowsAppleMusicAccount;
@property (readonly, nonatomic) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject; // ivar: _homeKitObject
@property (readonly, nonatomic) NSObject<HFHomeKitSettingsVendor> *homeKitSettingsVendor; // ivar: _homeKitSettingsVendor
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (nonatomic) BOOL isItemInActionBuilder; // ivar: _isItemInActionBuilder
@property (readonly, nonatomic) NSInteger mediaAccessoryItemType; // ivar: _mediaAccessoryItemType
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly, nonatomic) NSObject<HFMediaValueSource> *mediaValueSource;
@property (readonly, nonatomic) NSUInteger numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) BOOL shouldShowMutedMicIcon;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMediaAction;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)itemWithAccessoryRepresentableObject:(id)arg0 valueSource:(id)arg1 ;
-(BOOL)_hasOnboarded;
-(BOOL)_isDumbSpeaker;
-(BOOL)_isHAPCapableSpeaker;
-(BOOL)_isInstallingSoftwareUpdate;
-(BOOL)actionsMayRequireDeviceUnlock;
-(BOOL)containsActions;
-(BOOL)isAirPort;
-(BOOL)isAnnounceEnabled;
-(BOOL)isAppleTV;
-(BOOL)isAudioAnalysisEnabled;
-(BOOL)isAudioReceiver;
-(BOOL)isContainedWithinMediaSystem;
-(BOOL)isDoorbellChimeEnabled;
-(BOOL)isHomePod;
-(BOOL)isHomePodAndIsInMediaSystem;
-(BOOL)isHomePodMediaSystem;
-(BOOL)isHomePodStereoPair;
-(BOOL)isSiriDisabled;
-(BOOL)isSiriEndpointAccessory;
-(BOOL)isStandaloneHomePod;
-(BOOL)supportsAlarmQuickControls;
-(BOOL)supportsCoordinationForAlarmsAndTimers;
-(BOOL)supportsMediaQuickControls;
-(BOOL)supportsMultiUser;
-(BOOL)supportsPlaybackState;
-(BOOL)supportsTimerQuickControls;
-(NSUInteger)_effectiveLoadingStateForSuggestedLoadingState:(NSUInteger)arg0 ;
-(NSUInteger)preferredActionOnTap:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)accessories;
-(id)containedMediaProfileContainers;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createControlItemsWithOptions:(id)arg0 ;
-(id)currentStateActionBuildersForHome:(id)arg0 ;
-(id)enableDoorbellChime:(BOOL)arg0 ;
-(id)iconDescriptor:(id)arg0 ;
-(id)init;
-(id)initWithValueSource:(id)arg0 homeKitObject:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 mediaProfileContainer:(id)arg1 ;
-(id)namingComponentForHomeKitObject;
-(id)performStandardUpdateWithOptions:(id)arg0 ;
-(id)profiles;
-(id)room;
-(id)serviceLikeBuilderInHome:(id)arg0 ;
-(id)serviceNameComponents;
-(id)setEnableAnnounce:(BOOL)arg0 ;
-(id)setEnableAudioAnalysis:(BOOL)arg0 ;
-(id)setSiriDisabled:(BOOL)arg0 ;
-(id)settings;
-(void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg0 ;
-(void)_decorateServiceLikeItemKeys:(id)arg0 ;
-(void)_decorateSettingsSyncKeys:(id)arg0 ;
-(void)_decorateWithMediaSessionKeys:(id)arg0 ;
-(void)_decorateWithMediaSystemSpecificKeys:(id)arg0 ;
-(void)_decorateWithSiriEndpointProfileSpecificKeys:(id)arg0 ;
-(void)_decorateWithSoftwareUpdateStateKeys:(id)arg0 ;
-(void)_decorateWithSymptomFixInFlightKeys:(id)arg0 ;


@end


#endif