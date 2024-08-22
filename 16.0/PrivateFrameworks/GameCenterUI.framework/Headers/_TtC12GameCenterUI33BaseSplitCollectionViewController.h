// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI33BASESPLITCOLLECTIONVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI33BASESPLITCOLLECTIONVIEWCONTROLLER_H

@class TtC12GameCenterUI31BaseJetCollectionViewController, UICollectionView;


#import "_TtC12GameCenterUI12GradientView.h"

@interface _TtC12GameCenterUI33BaseSplitCollectionViewController : TtC12GameCenterUI31BaseJetCollectionViewController {
    ? currentLayoutType;
    ? $__lazy_storage_$_updateCollectionViewConstraintOnce;
}


@property (nonatomic, readonly) _TtC12GameCenterUI12GradientView *leftPaneBackgroundView; // ivar: leftPaneBackgroundView
@property (nonatomic, readonly) CGFloat mainSecondaryCollectionViewSpacing;
@property (nonatomic, retain) UICollectionView *secondaryCollectionView; // ivar: secondaryCollectionView
@property (nonatomic) BOOL shouldDisplayCustomHeader; // ivar: shouldDisplayCustomHeader
@property (nonatomic, readonly) BOOL shouldDisplayInSplitView;


+(CGFloat)customHeaderHeight;
+(CGFloat)leadingAndTrailingInsetForCustomHeader;
+(CGFloat)mainCollectionViewWidth;
+(CGFloat)topAndBottomInsetForCustomHeader;
+(CGFloat)topInsetWithCustomHeader;
-(id)initWithCoder:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )collectionViewFrameInsets;
-(void)loadView;
-(void)mainSecondaryCollectionViewLayout;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif