// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDFILTERBARCONTROLLER_H
#define HUDASHBOARDFILTERBARCONTROLLER_H

@class NSString;
@protocol HUDashboardFilterBarDelegate;


#import "HUControllableItemCollectionViewController.h"

@interface HUDashboardFilterBarController : HUControllableItemCollectionViewController {
    ? contextTypeDescriptionForAnalytics;
    ? layoutConstraints;
    ? $__lazy_storage_$_heightConstraint;
    ? preferredHeight;
    ? $__lazy_storage_$_blurGroupingEffectView;
    ? _layoutOptions;
}


@property (nonatomic, copy) NSString *contextTypeDescriptionForAnalytics;
@property (nonatomic, weak) NSObject<HUDashboardFilterBarDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) CGFloat intrinsicHeight;


-(BOOL)_hasTapActionForItem:(id)arg0 ;
-(BOOL)canReorderItemAtIndexPath:(id)arg0 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginLongPressPresentationWithContext:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_performTapActionForItem:(id)arg0 tappedArea:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)compositionalLayoutConfigurationForTraitCollection:(id)arg0 ;
-(id)init;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(id)reorderableItemListForSection:(NSInteger)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)diffableDataItemManager:(id)arg0 willUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 isInitialLoad:(BOOL)arg4 ;
-(void)resetAnimated:(BOOL)arg0 ;
-(void)setReorderableItemList:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithContext:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif