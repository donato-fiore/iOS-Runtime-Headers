// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLCOLLECTIONVIEWCONTROLLER_H
#define HUQUICKCONTROLCOLLECTIONVIEWCONTROLLER_H

@class NSSet, NSString, HFItemManager<HUQuickControlCollectionItemManaging>, NSMapTable;
@protocol HUQuickControlCollectionViewDelegateLayout, HUQuickControlItemUpdating, HFAccessoryObserver, HUQuickControlContentHelper, HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlTouchContinuing, HUQuickControlContentCharacteristicWritingDelegate, HULayoutAnchorProviding, HUQuickControlContentHosting;


#import "HUItemCollectionViewController.h"
#import "HUQuickControlContentCharacteristicWritingUpdateAdapter.h"
#import "HUQuickControlCollectionViewLayout.h"
#import "HUQuickControlCollectionViewControllerLayoutOptions.h"

@interface HUQuickControlCollectionViewController : HUItemCollectionViewController <HUQuickControlCollectionViewDelegateLayout, HUQuickControlItemUpdating, HFAccessoryObserver, HUQuickControlContentHelper, HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlTouchContinuing>



@property (readonly, copy, nonatomic) NSSet *affectedCharacteristics;
@property (readonly, nonatomic) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter; // ivar: _characteristicWritingAdapter
@property (weak, nonatomic) NSObject<HUQuickControlContentCharacteristicWritingDelegate> *characteristicWritingDelegate; // ivar: _characteristicWritingDelegate
@property (retain, nonatomic) HUQuickControlCollectionViewLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableItemUpdatesForOverrideCharacteristicValueChanges; // ivar: _disableItemUpdatesForOverrideCharacteristicValueChanges
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFItemManager<HUQuickControlCollectionItemManaging> *itemManager;
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) NSObject<HULayoutAnchorProviding> *preferredFrameLayoutGuide; // ivar: _preferredFrameLayoutGuide
@property (weak, nonatomic) NSObject<HUQuickControlContentHosting> *quickControlHost; // ivar: _quickControlHost
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (readonly, nonatomic) NSMapTable *viewControllersKeyedByItem; // ivar: _viewControllersKeyedByItem


-(BOOL)_canShowWhileLocked;
-(CGFloat)heightForSupplementaryViewAtIndexPath:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)_determineReachabilityForIndexPath:(id)arg0 ;
-(NSUInteger)_titlePositionForItem:(id)arg0 ;
-(id)_allContentViewControllers;
-(id)_allViewControllers;
-(id)_controlItemsForItem:(id)arg0 ;
-(id)_createCellContainerForViewController:(id)arg0 forItem:(id)arg1 ;
-(id)_viewControllerForItem:(id)arg0 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)intrinsicSizeDescriptorForItemAtIndexPath:(id)arg0 itemSize:(NSUInteger)arg1 ;
-(id)overrideValueForCharacteristic:(id)arg0 ;
-(id)viewForTouchContinuation;
-(void)_fetchReachabilityStateForMediaAccessory:(id)arg0 accessType:(NSUInteger)arg1 itemSectionIdentifier:(id)arg2 ;
-(void)_propagateInteractiveContentStateForChildViewControllers:(id)arg0 ;
-(void)_reconfigureLayoutOptions;
-(void)_setReachabilityForHeaderForIdentifier:(id)arg0 to:(BOOL)arg1 ;
-(void)accessoryDidUpdateControllable:(id)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)invalidateContentViewLayout;
-(void)itemManager:(id)arg0 didRemoveItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg0 didUpdateResultsForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)quickControlItemHost:(id)arg0 didUpdateVisibility:(BOOL)arg1 ;
-(void)shouldHideQuickControlHeaderButton:(BOOL)arg0 forSectionIdentifier:(id)arg1 ;
-(void)shouldHideQuickControlHeaderText:(BOOL)arg0 forSectionIdentifier:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillDismiss;


@end


#endif