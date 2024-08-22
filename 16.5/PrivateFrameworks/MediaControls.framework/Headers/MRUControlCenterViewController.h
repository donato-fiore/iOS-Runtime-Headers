// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUCONTROLCENTERVIEWCONTROLLER_H
#define MRUCONTROLCENTERVIEWCONTROLLER_H

@class UIViewController, UIViewPropertyAnimator, UICollectionViewDiffableDataSource, NSString, NSMutableDictionary;
@protocol MediaControlsEndpointsManagerDelegate, MRUNowPlayingViewControllerDelegate, MRUNowPlayingControllerObserver, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController;


#import "MediaControlsEndpointsManager.h"
#import "MRUNowPlayingViewController.h"
#import "MRUControlCenterView.h"

@interface MRUControlCenterViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUNowPlayingViewControllerDelegate, MRUNowPlayingControllerObserver, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>



@property (retain, nonatomic) UIViewController *alertViewController; // ivar: _alertViewController
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalBlock; // ivar: _dismissalBlock
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager; // ivar: _endpointsManager
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *homeGestureDismissalAllowedBlock; // ivar: _homeGestureDismissalAllowedBlock
@property (retain, nonatomic) NSMutableDictionary *nowPlayingControllers; // ivar: _nowPlayingControllers
@property (retain, nonatomic) MRUNowPlayingViewController *nowPlayingViewController; // ivar: _nowPlayingViewController
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (nonatomic) NSInteger pendingNowPlayingExpandedLayout; // ivar: _pendingNowPlayingExpandedLayout
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight;
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (copy, nonatomic) id *replaceRoutes; // ivar: _replaceRoutes
@property (copy, nonatomic) id *routingCornerViewTappedBlock; // ivar: _routingCornerViewTappedBlock
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly) Class superclass;
@property (retain, nonatomic) MRUControlCenterView *view;
@property (retain, nonatomic) MRUControlCenterView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(BOOL)canDismissPresentedContent;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg0 ;
-(BOOL)shouldExpandModuleOnTouch:(id)arg0 ;
-(id)init;
-(id)selectedIdentifier;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)createNowPlayingViewController;
-(void)didSelectListState:(id)arg0 ;
-(void)didSelectQuickControl:(id)arg0 ;
-(void)didSelectRoutingButton:(id)arg0 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg0 ;
-(void)dismiss;
-(void)dismissPresentedContentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)endpointsManager:(id)arg0 activeSystemRouteDidChange:(id)arg1 ;
-(void)endpointsManager:(id)arg0 defersRoutesReplacement:(id)arg1 ;
-(void)loadView;
-(void)nowPlayingController:(id)arg0 didChangeQuickControlItem:(id)arg1 ;
-(void)nowPlayingController:(id)arg0 endpointController:(id)arg1 didChangeRoute:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeArtwork:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeNowPlayingInfo:(id)arg2 ;
-(void)nowPlayingViewController:(id)arg0 applyLayout:(NSInteger)arg1 ;
// -(void)nowPlayingViewController:(id)arg0 didChangeSizeWithAnimations:(id)arg1 completion:(unk)arg2  ;
-(void)nowPlayingViewController:(id)arg0 showViewController:(id)arg1 ;
-(void)setState:(NSInteger)arg0 ;
-(void)transitionToState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)updateCell:(id)arg0 forIdentifier:(id)arg1 ;
-(void)updateCellForIdentifier:(id)arg0 ;
-(void)updateDiscoveryMode;
-(void)updateMoreButtonVisibility;
-(void)updateNowPlayingControllers;
-(void)updateNowPlayingViewControllerLayout;
-(void)updateRoutingDataControllers;
-(void)updateSelectedViewController;
-(void)updateVisibilityForActiveCell:(BOOL)arg0 inActiveCells:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif