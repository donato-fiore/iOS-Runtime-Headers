// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI33BASESPLITCOLLECTIONVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI33BASESPLITCOLLECTIONVIEWCONTROLLER_H

@class TtC12GameCenterUI31BaseJetCollectionViewController, UICollectionView, UICollectionViewCompositionalLayout;


#import "_TtC12GameCenterUI18BaseSplitPresenter.h"
#import "_TtC12GameCenterUI12GradientView.h"

@interface _TtC12GameCenterUI33BaseSplitCollectionViewController : TtC12GameCenterUI31BaseJetCollectionViewController {
    ? secondaryImpressionsCalculator;
    ? currentLayoutType;
    ? secondaryDiffableDataSource;
    ? $__lazy_storage_$_updateCollectionViewConstraintOnce;
}


@property (nonatomic, readonly) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;
@property (nonatomic, readonly) _TtC12GameCenterUI12GradientView *leftPaneBackgroundView; // ivar: leftPaneBackgroundView
@property (nonatomic, readonly) CGFloat mainSecondaryCollectionViewSpacing;
@property (nonatomic, retain) UICollectionView *secondaryCollectionView; // ivar: secondaryCollectionView
@property (nonatomic, retain) UICollectionViewCompositionalLayout *secondaryCompositionalLayout; // ivar: secondaryCompositionalLayout
@property (nonatomic) BOOL shouldDisplayCustomHeader; // ivar: shouldDisplayCustomHeader
@property (nonatomic, readonly) BOOL shouldDisplayInSplitView;


+(CGFloat)customHeaderHeight;
+(CGFloat)leadingAndTrailingInsetForCustomHeader;
+(CGFloat)mainCollectionViewWidth;
+(CGFloat)topAndBottomInsetForCustomHeader;
+(CGFloat)topInsetWithCustomHeader;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)makeSecondaryLayout;
-(struct NSDirectionalEdgeInsets )collectionViewFrameInsets;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)loadView;
-(void)mainSecondaryCollectionViewLayout;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif