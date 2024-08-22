// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSERVICEGROUPITEM_H
#define HFSERVICEGROUPITEM_H

@class NSString, HMHome, HMServiceGroup, NSSet;
@protocol HFAccessoryRepresentableItem, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol, HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"

@interface HFServiceGroupItem : HFItem <HFAccessoryRepresentableItem, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol>



@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *accessoryRepresentableObject;
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
@property (readonly, nonatomic) HMServiceGroup *serviceGroup; // ivar: _serviceGroup
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(BOOL)_isControlItem:(id)arg0 identicalToControlItem:(id)arg1 ;
+(BOOL)_isControlItem:(id)arg0 similarToControlItem:(id)arg1 ;
+(id)_combinedWriteErrorForError:(id)arg0 serviceGroupTitle:(id)arg1 ;
+(id)itemWithAccessoryRepresentableObject:(id)arg0 valueSource:(id)arg1 ;
-(BOOL)actionsMayRequireDeviceUnlock;
-(BOOL)containsActions;
-(CGFloat)_averageNumericalValueForResultsKey:(id)arg0 inServiceItems:(id)arg1 ;
-(NSInteger)_highestIntegerValueForResultsKey:(id)arg0 inServiceItems:(id)arg1 ;
-(id)_aggregatedValueSource;
-(id)_buildControlItemsForServiceItems:(id)arg0 ;
-(id)_buildServiceItems;
-(id)_mergedIconDescriptorForServiceItems:(id)arg0 ;
-(id)_mostCommonValueForResultsKey:(id)arg0 inServiceItems:(id)arg1 ;
-(id)_mostCommonValueInServiceItems:(id)arg0 valueProvider:(id)arg1 ;
-(id)_sortDescriptorsForServiceItems;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)_unanimousValueForResultsKey:(id)arg0 inServiceItems:(id)arg1 ;
-(id)accessories;
-(id)allControlItems;
-(id)controlPanelItems;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentStateActionBuildersForHome:(id)arg0 ;
-(id)incrementalStateControlItem;
-(id)init;
-(id)initWithValueSource:(id)arg0 serviceGroup:(id)arg1 ;
-(id)namingComponentForHomeKitObject;
-(id)primaryStateControlItem;
-(id)serviceLikeBuilderInHome:(id)arg0 ;


@end


#endif