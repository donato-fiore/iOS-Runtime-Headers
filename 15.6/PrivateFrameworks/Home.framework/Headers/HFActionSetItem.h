// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACTIONSETITEM_H
#define HFACTIONSETITEM_H

@class HMActionSet, NSString, HFItem<HFServiceLikeItem>;
@protocol HFHomeKitItemProtocol, NSCopying, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"

@interface HFActionSetItem : HFItem <HFHomeKitItemProtocol, NSCopying>



@property (readonly, nonatomic) HMActionSet *actionSet; // ivar: _actionSet
@property (readonly, nonatomic) NSUInteger actionSetItemStyle; // ivar: _actionSetItemStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(BOOL)_value:(id)arg0 isApproximatelyEqualToValue:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3 ;
+(id)_primaryStateForActionSet:(id)arg0 valueSource:(id)arg1 logger:(id)arg2 fastInitialUpdate:(BOOL)arg3 ;
-(NSUInteger)_effectiveLoadingStateForSuggestedLoadingState:(NSUInteger)arg0 ;
-(id)_mostCommonRoomForActionSet:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)actionSetOperation:(id)arg0 errorFromError:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)executeActionSet;
-(id)init;
-(id)initWithActionSet:(id)arg0 actionSetItemStyle:(NSUInteger)arg1 valueSource:(id)arg2 ;
-(id)rooms;
-(id)turnOffActionSet;


@end


#endif