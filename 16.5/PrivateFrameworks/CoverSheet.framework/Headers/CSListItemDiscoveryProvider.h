// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLISTITEMDISCOVERYPROVIDER_H
#define CSLISTITEMDISCOVERYPROVIDER_H

@class DNDStateService, NSString, NSMutableDictionary;
@protocol ATXUserEducationSuggestionObserver, DNDStateUpdateListener, FCUIOnboardingPlatterDiscoveryViewDelegate, CSDiscoveryItemExplorePostersPlatterViewDelegate, CSListItemProviding, CSListItemManaging;

#import <Foundation/Foundation.h>


@interface CSListItemDiscoveryProvider : NSObject <ATXUserEducationSuggestionObserver, DNDStateUpdateListener, FCUIOnboardingPlatterDiscoveryViewDelegate, CSDiscoveryItemExplorePostersPlatterViewDelegate, CSListItemProviding>

 {
    DNDStateService *_stateService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *discoveryTypeToDiscoverySuggestionAndListItems; // ivar: _discoveryTypeToDiscoverySuggestionAndListItems
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger itemCount;
@property (retain, nonatomic) NSObject<CSListItemManaging> *itemManager; // ivar: _itemManager
@property (readonly, nonatomic) id *itemsGroupSortComparator;
@property (readonly, nonatomic) id *itemsViewControllerSortComparator;
@property (nonatomic) BOOL listHasAdditionalContent; // ivar: _listHasAdditionalContent
@property (readonly) Class superclass;


+(id)section;
-(id)_customizeFocusDiscoveryViewWithDNDSemanticType:(NSInteger)arg0 ;
-(id)_discoveryTypeForSuggestion:(id)arg0 ;
-(id)_explorePostersDiscoveryItemViewControllerForPlatter:(id)arg0 firstDidAppearCompletion:(id)arg1 ;
-(id)_explorePostersDiscoveryView;
-(id)_sleepMigrationDiscoveryView;
-(id)init;
-(void)_handleDismissSuggestion:(id)arg0 type:(id)arg1 ;
-(void)_handleShowSuggestion:(id)arg0 type:(id)arg1 isPrototyping:(BOOL)arg2 ;
-(void)_presentPlatterDiscoveryView:(id)arg0 discoveryItemViewController:(id)arg1 withSuggestion:(id)arg2 type:(id)arg3 ;
-(void)_prototypeTest_addItem;
-(void)_prototypeTest_registerRecipe;
-(void)_prototypeTest_removeItem;
-(void)_removeDiscoveryOfType:(id)arg0 ;
-(void)didReceiveUserEducationSuggestionEvent:(id)arg0 ;
-(void)explorePostersPlatterViewWasTapped:(id)arg0 ;
-(void)handleRemovedItems:(id)arg0 ;
-(void)onboardingPlatter:(id)arg0 requestsModalPresentationOfViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)onboardingPlatterRequestsDismissal:(id)arg0 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;
-(void)willPresentPosterSwitcher;


@end


#endif