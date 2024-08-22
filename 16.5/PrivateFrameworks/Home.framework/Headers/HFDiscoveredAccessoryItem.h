// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFDISCOVEREDACCESSORYITEM_H
#define HFDISCOVEREDACCESSORYITEM_H

@class NSString, HMHome, NSSet;
@protocol HFServiceLikeItem, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"
#import "HFDiscoveredAccessory.h"

@interface HFDiscoveredAccessoryItem : HFItem <HFServiceLikeItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessory; // ivar: _discoveredAccessory
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
-(id)init;
-(id)initWithDiscoveredAccessory:(id)arg0 ;
-(id)initWithDiscoveredAccessory:(id)arg0 valueSource:(id)arg1 ;
-(id)namingComponentForHomeKitObject;


@end


#endif