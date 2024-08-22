// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSCENESUGGESTIONSITEMMANAGER_H
#define HUSCENESUGGESTIONSITEMMANAGER_H

@class HFItemManager, HFItem, HREActionSetRecommendationItemProvider;



@interface HUSceneSuggestionsItemManager : HFItemManager

@property (retain, nonatomic) HFItem *addCustomSceneItem; // ivar: _addCustomSceneItem
@property (retain, nonatomic) HREActionSetRecommendationItemProvider *suggestionItemProvider; // ivar: _suggestionItemProvider


+(id)computeNumberOfSuggestionsInHome:(id)arg0 ;
+(id)suggestionsItemProviderInHome:(id)arg0 ;
-(NSUInteger)_numberOfSections;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_currentSectionIdentifiers;
-(id)_identifierForSection:(NSUInteger)arg0 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)_titleForSectionWithIdentifier:(id)arg0 ;
-(id)currentSectionIdentifiersSnapshot;


@end


#endif