// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACTIONSETSUGGESTIONITEM_H
#define HFACTIONSETSUGGESTIONITEM_H

@class HMActionSet, NSString, HMHome, HFItem<HFServiceLikeItem>;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;


#import "HFItem.h"

@interface HFActionSetSuggestionItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, nonatomic) HMActionSet *actionSet; // ivar: _actionSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEverHadValidSuggestion; // ivar: _hasEverHadValidSuggestion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (nonatomic) BOOL includeExistingActionSets; // ivar: _includeExistingActionSets
@property (nonatomic) BOOL persistAddedSuggestions; // ivar: _persistAddedSuggestions
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 actionSet:(id)arg1 ;


@end


#endif