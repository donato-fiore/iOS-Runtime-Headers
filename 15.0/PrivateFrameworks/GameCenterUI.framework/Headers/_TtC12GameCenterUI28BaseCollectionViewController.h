// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI28BASECOLLECTIONVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI28BASECOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, UICollectionView;
@protocol UIAdaptivePresentationControllerDelegate;



@interface _TtC12GameCenterUI28BaseCollectionViewController : UICollectionViewController <UIAdaptivePresentationControllerDelegate>

 {
    ? overlayView;
    ? wantsHiddenNavigationBar;
    ? wantsHiddenTitle;
    ? manualScrollEdgeAppearanceProgress;
    ? scrollObserver;
    ? navbarScrollObserver;
}


@property (nonatomic, retain) UICollectionView *collectionView;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif