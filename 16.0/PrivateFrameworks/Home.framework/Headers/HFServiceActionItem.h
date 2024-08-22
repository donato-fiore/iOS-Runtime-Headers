// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSERVICEACTIONITEM_H
#define HFSERVICEACTIONITEM_H

@class NSSet, HFItem<HFServiceLikeItem>, NSString, HMHome;
@protocol HFServiceLikeItem, HFAccessoryRepresentableItem, HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"

@interface HFServiceActionItem : HFItem <HFServiceLikeItem, HFAccessoryRepresentableItem>



@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (retain, nonatomic) NSSet *actionBuilders; // ivar: _actionBuilders
@property (retain, nonatomic) NSSet *actions; // ivar: _actions
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *containingItem; // ivar: _containingItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


+(id)_percentFormatter;
+(id)itemWithAccessoryRepresentableObject:(id)arg0 valueSource:(id)arg1 ;
-(id)_characteristicTypeToTargetValuesMap;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)accessories;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 containingItem:(id)arg1 ;
-(id)namingComponentForHomeKitObject;
-(id)serviceActionItemForChildServiceItem:(id)arg0 ;
-(void)_getDesiredItemDescription:(*id)arg0 controlDescription:(*id)arg1 withSourceItemResults:(id)arg2 ;
-(void)addAction:(id)arg0 ;
-(void)addActionBuilder:(id)arg0 ;


@end


#endif