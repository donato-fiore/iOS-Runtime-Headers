// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACTIONSETSUGGESTIONITEMPROVIDER_H
#define HFACTIONSETSUGGESTIONITEMPROVIDER_H

@class NSSet, HMHome, HFItem<HFServiceLikeItem>;


#import "HFItemProvider.h"

@interface HFActionSetSuggestionItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *customSuggestionItems; // ivar: _customSuggestionItems
@property (nonatomic) BOOL hasProvidedStaticSuggestionItems; // ivar: _hasProvidedStaticSuggestionItems
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL includeCustomActionSets; // ivar: _includeCustomActionSets
@property (nonatomic) BOOL includeExistingActionSets; // ivar: _includeExistingActionSets
@property (nonatomic) BOOL persistAddedSuggestions; // ivar: _persistAddedSuggestions
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem
@property (retain, nonatomic) NSSet *staticSuggestionItems; // ivar: _staticSuggestionItems


-(id)_builtInActionSetOfType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif