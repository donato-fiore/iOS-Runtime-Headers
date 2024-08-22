// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFDEMOMODEACCESSORYITEM_H
#define HFDEMOMODEACCESSORYITEM_H

@class HMAccessory, NSDictionary, NSString, HMHome, NSSet;
@protocol HFAccessoryRepresentableItem, HFServiceLikeItem, HFServiceLikeBuilderCreating, HFItemBuilderItem, HFGroupableItemProtocol, HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"

@interface HFDemoModeAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFServiceLikeItem, HFServiceLikeBuilderCreating, HFItemBuilderItem, HFGroupableItemProtocol>



@property (weak, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (retain, nonatomic) NSDictionary *configInfo; // ivar: _configInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) NSUInteger numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


+(id)accessoryItemForAccessory:(id)arg0 ;
+(id)itemWithAccessoryRepresentableObject:(id)arg0 valueSource:(id)arg1 ;
-(BOOL)isMediaSystemDemoType;
-(id)_iconDescriptor;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)accessories;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hf_serviceNameComponents;
-(id)initWithAccessory:(id)arg0 ;
-(id)mediaProfileContainer;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg0 ;


@end


#endif