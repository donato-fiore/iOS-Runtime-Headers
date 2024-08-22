// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUAVAILABLETRIGGERITEM_H
#define HUAVAILABLETRIGGERITEM_H

@class HFItem, NSNumber, NSString, HMHome, NSDictionary, HFItem<HFServiceLikeItem>, HRERecommendationItem, NSArray, HFItem<HUTriggerLikeItem>, HMTrigger, HFTriggerItem, HFTriggerNaturalLanguageOptions;
@protocol HUTriggerLikeItem;



@interface HUAvailableTriggerItem : HFItem <HUTriggerLikeItem>



@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSNumber *activeValue; // ivar: _activeValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *naturalLanguageTitleOptions; // ivar: _naturalLanguageTitleOptions
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *preferredRelatedItem;
@property (readonly, nonatomic) HRERecommendationItem *recommendationItem;
@property (retain, nonatomic) NSArray *relatedServiceLikeItems; // ivar: _relatedServiceLikeItems
@property (readonly, nonatomic) HFItem<HUTriggerLikeItem> *sourceItem; // ivar: _sourceItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMTrigger *trigger;
@property (readonly, nonatomic) HFTriggerItem *triggerItem;
@property (retain, nonatomic) HFTriggerNaturalLanguageOptions *triggerNaturalLanguageOptions; // ivar: _triggerNaturalLanguageOptions


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)buildersForActivating:(BOOL)arg0 inHome:(id)arg1 withContext:(id)arg2 serviceLikeItems:(id)arg3 ;
-(id)initWithHome:(id)arg0 containingItem:(id)arg1 relatedToServiceLikeItems:(id)arg2 ;
-(id)removalTriggerBuildersForTriggers:(id)arg0 home:(id)arg1 context:(id)arg2 relatedItems:(id)arg3 ;
-(void)_updateNaturalLanguageOptions;
-(void)replaceSourceItem:(id)arg0 ;


@end


#endif