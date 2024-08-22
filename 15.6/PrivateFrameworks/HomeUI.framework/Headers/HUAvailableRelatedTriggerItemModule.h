// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUAVAILABLERELATEDTRIGGERITEMMODULE_H
#define HUAVAILABLERELATEDTRIGGERITEMMODULE_H

@class HFItemModule, NSSet, NSArray, HFStaticItem, NSString, HMHome, NSMutableArray, HFStaticItemProvider;
@protocol HFHomeObserver, HUAvailableRelatedTriggerItemModuleContextProviding, HFItemSectionAccessoryButtonHeaderDelegate;


#import "HUAvailableTriggerItemActivationRequest.h"
#import "HUAvailableRelatedTriggerItemProvider.h"

@interface HUAvailableRelatedTriggerItemModule : HFItemModule <HFHomeObserver>

 {
    NSSet *_itemProviders;
}


@property (retain, nonatomic) NSArray *actionBuilderFactories; // ivar: _actionBuilderFactories
@property (retain, nonatomic) HUAvailableTriggerItemActivationRequest *activeRequest; // ivar: _activeRequest
@property (retain, nonatomic) HFStaticItem *addAutomationItem; // ivar: _addAutomationItem
@property (nonatomic) BOOL automationItemIsLoading; // ivar: _automationItemIsLoading
@property (retain, nonatomic) HUAvailableRelatedTriggerItemProvider *availableTriggerItemProvider; // ivar: _availableTriggerItemProvider
@property (readonly, nonatomic) NSObject<HUAvailableRelatedTriggerItemModuleContextProviding> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<HFItemSectionAccessoryButtonHeaderDelegate> *editButtonHeaderDelegate; // ivar: _editButtonHeaderDelegate
@property (nonatomic) BOOL enableNaturalLighting; // ivar: _enableNaturalLighting
@property (retain, nonatomic) NSArray *eventOptionsItems; // ivar: _eventOptionsItems
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFStaticItem *naturalLightingItem; // ivar: _naturalLightingItem
@property (retain, nonatomic) NSMutableArray *previouslySortedItems; // ivar: _previouslySortedItems
@property (retain, nonatomic) NSArray *relatedItems; // ivar: _relatedItems
@property (retain, nonatomic) NSString *sectionHeaderEditButtonTitleKey; // ivar: _sectionHeaderEditButtonTitleKey
@property (retain, nonatomic) NSArray *sensorCharacteristics; // ivar: _sensorCharacteristics
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *waitingRequests; // ivar: _waitingRequests


+(BOOL)_itemClassSupportsEvents:(id)arg0 ;
+(BOOL)shouldShowRecommendation:(id)arg0 ;
+(id)defaultContext;
+(id)sortComparator:(SEL)arg0 ;
-(BOOL)_editingAvailableWithDisplayedItems:(id)arg0 ;
-(BOOL)shouldHideAutomationsModule;
-(id)_accessoryCategoryUserFrieindlyDescription;
-(id)_activateItem:(id)arg0 active:(BOOL)arg1 ;
-(id)_buildItemProviders;
-(id)activateAllSelectedItems;
-(id)activateItem:(id)arg0 active:(BOOL)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 itemUpdater:(id)arg1 home:(id)arg2 context:(id)arg3 ;
-(id)itemProviders;
-(id)itemsToHideInSet:(id)arg0 ;
-(id)progressivelySortItems:(id)arg0 ;
-(id)serviceTypes;
-(id)serviceTypesSupportingAutomation;
-(void)_finishCommitWithItems:(id)arg0 updatesDelayReason:(id)arg1 ;
-(void)_performRequest:(id)arg0 ;
-(void)_updateRelatedItems:(id)arg0 ;
-(void)didActivateItem:(id)arg0 active:(BOOL)arg1 error:(id)arg2 ;


@end


#endif