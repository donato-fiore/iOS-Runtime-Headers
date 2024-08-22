// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYBUILDERITEM_H
#define HFACCESSORYBUILDERITEM_H

@class HFItem<HFServiceLikeItem>, NSString, HMHome, NSSet;
@protocol HFItemBuilderItem, HFServiceLikeItem, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"
#import "HFAccessoryBuilder.h"

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem>



@property (retain, nonatomic) HFAccessoryBuilder *accessoryBuilder; // ivar: _accessoryBuilder
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *accessoryItem; // ivar: _accessoryItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)accessories;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAccessoryBuilder:(id)arg0 valueSource:(id)arg1 ;
-(id)namingComponentForHomeKitObject;


@end


#endif