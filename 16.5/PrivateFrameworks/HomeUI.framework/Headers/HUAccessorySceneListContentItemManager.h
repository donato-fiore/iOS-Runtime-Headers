// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYSCENELISTCONTENTITEMMANAGER_H
#define HUACCESSORYSCENELISTCONTENTITEMMANAGER_H

@class NSMutableDictionary, HFItem<HFServiceLikeItem>;


#import "HUServiceGridItemManager.h"

@interface HUAccessorySceneListContentItemManager : HUServiceGridItemManager

@property (readonly, nonatomic) NSMutableDictionary *committedActionBuildersByActionSetID; // ivar: _committedActionBuildersByActionSetID
@property (readonly, nonatomic) NSUInteger contentSource; // ivar: _contentSource
@property (nonatomic) BOOL persistAddedSuggestions; // ivar: _persistAddedSuggestions
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // ivar: _serviceLikeItem


+(BOOL)_action:(id)arg0 involvesServiceLikeItem:(id)arg1 ;
+(id)computeNumberOfItemsToDisplayForContentSource:(NSUInteger)arg0 serviceLikeItem:(id)arg1 home:(id)arg2 ;
+(id)createItemProviderForContentSource:(NSUInteger)arg0 serviceLikeItem:(id)arg1 home:(id)arg2 persistAddedSuggestions:(BOOL)arg3 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_transformedUpdateOutcomeForItem:(id)arg0 proposedOutcome:(id)arg1 ;
-(id)actionSetBuilderForItem:(id)arg0 ;
-(id)commitSelectionChangesWithSelectedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 contentSource:(NSUInteger)arg1 serviceLikeItem:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 shouldGroupByRoom:(BOOL)arg2 shouldShowSectionHeaders:(BOOL)arg3 itemProvidersCreator:(id)arg4 ;
-(id)suggestionItemProvider;


@end


#endif