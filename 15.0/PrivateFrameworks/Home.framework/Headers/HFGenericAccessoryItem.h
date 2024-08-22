// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFGENERICACCESSORYITEM_H
#define HFGENERICACCESSORYITEM_H

@class HMAccessory, NSString, HMHome, NSSet;
@protocol HFServiceLikeItem, HFServiceLikeBuilderCreating, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"

@interface HFGenericAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating>



@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)accessories;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessory:(id)arg0 valueSource:(id)arg1 ;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg0 ;


@end


#endif