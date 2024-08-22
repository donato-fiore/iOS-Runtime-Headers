// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI30DASHBOARDSIDEBARVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI30DASHBOARDSIDEBARVIEWCONTROLLER_H

@class TtC12GameCenterUI28BaseCollectionViewController, UICollectionViewCompositionalLayout;


#import "_TtC12GameCenterUI18BootstrapPresenter.h"
#import "_TtC12GameCenterUI13BasePresenter.h"
#import "_TtC12GameCenterUI25DashboardSidebarPresenter.h"

@interface _TtC12GameCenterUI30DashboardSidebarViewController : TtC12GameCenterUI28BaseCollectionViewController {
    ? pageMetricsPresenter;
    ? impressionsCalculator;
    ? dismissHandler;
    ? statePresenter;
    ? components;
    ? diffableDataSource;
    ? verticalSeparatorView;
    ? $__lazy_storage_$_sidebarProfileView;
    ? focusGuide;
}


@property (nonatomic, retain) _TtC12GameCenterUI18BootstrapPresenter *bootstrapPresenter; // ivar: bootstrapPresenter
@property (nonatomic, retain) UICollectionViewCompositionalLayout *compositionalLayout; // ivar: compositionalLayout
@property (nonatomic, readonly) _TtC12GameCenterUI13BasePresenter *dataPresenter;
@property (nonatomic, copy) id *dismissHandler;
@property (nonatomic) BOOL selectionFollowsFocus; // ivar: selectionFollowsFocus
@property (nonatomic, readonly) _TtC12GameCenterUI25DashboardSidebarPresenter *sidebarPresenter; // ivar: sidebarPresenter


+(CGFloat)horizontalMargin;
+(CGFloat)sidebarProfileHorizontalMargin;
+(CGFloat)sidebarProfileViewBottomSpace;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)makeLayout;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateBackgroundFor:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif