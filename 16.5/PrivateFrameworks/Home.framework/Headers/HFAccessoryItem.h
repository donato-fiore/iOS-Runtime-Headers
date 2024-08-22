// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYITEM_H
#define HFACCESSORYITEM_H

@class HMAccessory, NSArray, NSString, HMHome, NSSet;
@protocol HFAccessoryRepresentableItem, HFMediaAccessoryProtocol, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol, HFCompoundItemProtocol, HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"
#import "HFMediaAccessoryCommonSettingsManager.h"

@interface HFAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFMediaAccessoryProtocol, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol, HFCompoundItemProtocol>



@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, nonatomic) NSArray *allHomeKitObjects;
@property (readonly, nonatomic) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) BOOL isCompoundItem;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) NSUInteger numberOfCompoundItems;
@property (readonly, nonatomic) NSUInteger numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *primaryHomeKitObject;
@property (retain, nonatomic) NSSet *serviceItems; // ivar: _serviceItems
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)itemWithAccessoryRepresentableObject:(id)arg0 valueSource:(id)arg1 ;
-(BOOL)actionsMayRequireDeviceUnlock;
-(BOOL)containsActions;
-(BOOL)isAnnounceEnabled;
-(BOOL)isAudioAnalysisEnabled;
-(BOOL)isDoorbellChimeEnabled;
-(BOOL)isMultiLightDevice;
-(BOOL)isMultiSensorDevice;
-(BOOL)isSiriDisabled;
-(BOOL)isSiriEndpointAccessory;
-(BOOL)shouldShowMutedMicIcon;
-(id)_buildControlDescription;
-(id)_buildControlItems;
-(id)_buildServiceItems;
-(id)_buildTileDescription:(BOOL)arg0 ;
-(id)_collectAllChildItems;
-(id)_mostCommonValueForResultsKey:(id)arg0 inServiceItems:(id)arg1 ;
-(id)_mostCommonValueInServiceItems:(id)arg0 valueProvider:(id)arg1 ;
-(id)_repeatingDescriptionsToCoalesce;
-(id)_sortDescriptorsForServiceItems;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)_unanimousValueForResultsKey:(id)arg0 inServiceItems:(id)arg1 ;
-(id)accessories;
-(id)controlItemsForService:(id)arg0 ;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentStateActionBuildersForHome:(id)arg0 ;
-(id)enableDoorbellChime:(BOOL)arg0 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 valueSource:(id)arg1 ;
-(id)namingComponentForHomeKitObject;
-(id)serviceItemForService:(id)arg0 ;
-(id)serviceLikeBuilderInHome:(id)arg0 ;
-(id)setEnableAnnounce:(BOOL)arg0 ;
-(id)setEnableAudioAnalysis:(BOOL)arg0 ;
-(id)setSiriDisabled:(BOOL)arg0 ;


@end


#endif