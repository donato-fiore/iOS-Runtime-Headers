// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYPROFILEITEM_H
#define HFACCESSORYPROFILEITEM_H

@class HMAccessory, NSString, HMHome, HMAccessoryProfile, NSSet;
@protocol HFAccessoryRepresentableItem, HFAccessoryProfileVendor, HFHomeKitItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem, HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"

@interface HFAccessoryProfileItem : HFItem <HFAccessoryRepresentableItem, HFAccessoryProfileVendor, HFHomeKitItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem>



@property (readonly, nonatomic) HMAccessory *accessory;
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
@property (readonly, nonatomic) HMAccessoryProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)itemWithAccessoryRepresentableObject:(id)arg0 valueSource:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)accessories;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithProfile:(id)arg0 valueSource:(id)arg1 ;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg0 ;


@end


#endif