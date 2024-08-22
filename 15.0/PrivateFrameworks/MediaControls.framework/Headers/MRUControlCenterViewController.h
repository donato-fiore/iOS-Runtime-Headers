// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUCONTROLCENTERVIEWCONTROLLER_H
#define MRUCONTROLCENTERVIEWCONTROLLER_H

@class UIViewController, UIViewPropertyAnimator, UICollectionViewDiffableDataSource, NSString, NSMutableDictionary;
@protocol MediaControlsEndpointsManagerDelegate, MRUNowPlayingViewControllerDelegate, MRUEndpointMetadataControllerObserver, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController;


#import "MediaControlsEndpointsManager.h"
#import "MRUNowPlayingViewController.h"
#import "MRUControlCenterView.h"

@interface MRUControlCenterViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUNowPlayingViewControllerDelegate, MRUEndpointMetadataControllerObserver, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>



@property (retain, nonatomic) UIViewController *alertViewController; // ivar: _alertViewController
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalBlock; // ivar: _dismissalBlock
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager; // ivar: _endpointsManager
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *homeGestureDismissalAllowedBlock; // ivar: _homeGestureDismissalAllowedBlock
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (nonatomic) NSInteger pendingNowPlayingExpandedLayout; // ivar: _pendingNowPlayingExpandedLayout
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight;
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (copy, nonatomic) id *replaceRoutes; // ivar: _replaceRoutes
@property (copy, nonatomic) id *routingCornerViewTappedBlock; // ivar: _routingCornerViewTappedBlock
@property (retain, nonatomic) MRUNowPlayingViewController *selectedViewController; // ivar: _selectedViewController
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly) Class superclass;
@property (retain, nonatomic) MRUControlCenterView *view;
@property (retain, nonatomic) NSMutableDictionary *viewControllers; // ivar: _viewControllers
@property (retain, nonatomic) MRUControlCenterView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(BOOL)canDismissPresentedContent;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg0 ;
-(BOOL)shouldExpandModuleOnTouch:(id)arg0 ;
-(id)init;
-(id)selectedIdentifier;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didSelectListState:(id)arg0 ;
-(void)didSelectQuickActionButton:(id)arg0 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg0 ;
-(void)dismiss;
-(void)dismissPresentedContentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)endpointsManager:(id)arg0 activeSystemRouteDidChange:(id)arg1 ;
-(void)endpointsManager:(id)arg0 defersRoutesReplacement:(id)arg1 ;
-(void)loadView;
-(void)metadataController:(id)arg0 didLoadNewResponse:(id)arg1 ;
-(void)metadataController:(id)arg0 didUpdateApplicationIcon:(id)arg1 ;
-(void)metadataControllerDidChangeState:(id)arg0 ;
-(void)metadataControllerDidUpdateRoutingAvailability:(id)arg0 ;
-(void)metadataControllerRouteDidUpdate:(id)arg0 ;
-(void)nowPlayingViewController:(id)arg0 applyLayout:(NSInteger)arg1 ;
// -(void)nowPlayingViewController:(id)arg0 didChangeSizeWithAnimations:(id)arg1 completion:(unk)arg2  ;
-(void)nowPlayingViewController:(id)arg0 showViewController:(id)arg1 ;
-(void)setState:(NSInteger)arg0 ;
-(void)transitionToState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)updateCell:(id)arg0 forIdentifier:(id)arg1 ;
-(void)updateCellForIdentifier:(id)arg0 ;
-(void)updateDiscoveryMode;
-(void)updateMetadataControllers;
-(void)updateMoreButtonVisibility;
-(void)updateSelectedViewControllerLayout;
-(void)updateViewControllers;
-(void)updateVisibilityForActiveCell:(BOOL)arg0 inActiveCells:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif