// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEPHOTOGALLERYVIEWCONTROLLER_H
#define MUPLACEPHOTOGALLERYVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, UIView, NSString, NSMutableArray, MKMapItem, NSNumber, NSArray, UIScrollView, UIActivityIndicatorView;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegate, MUPlacePhotoGalleryAttributionViewDelegate, MKActivityObserving, MUPlacePhotoGalleryViewControllerDelegate;


#import "MUPlacePhotoGalleryAttributionView.h"
#import "MUPlaceUserAttributionViewModel.h"

@interface MUPlacePhotoGalleryViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, MUPlacePhotoGalleryAttributionViewDelegate, MKActivityObserving>



@property (readonly, nonatomic) UIBarButtonItem *addPhotoBarButtonItem; // ivar: _addPhotoBarButtonItem
@property (retain, nonatomic) UIView *additionalView; // ivar: _additionalView
@property (retain, nonatomic) MUPlacePhotoGalleryAttributionView *attributionView; // ivar: _attributionView
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem; // ivar: _backBarButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlacePhotoGalleryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *downloadingImagesURLs; // ivar: _downloadingImagesURLs
@property (nonatomic) BOOL enablePersonalizedAttribution; // ivar: _enablePersonalizedAttribution
@property (retain, nonatomic) UIView *gestureTrackedView; // ivar: _gestureTrackedView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint imageViewCenterPoint; // ivar: _imageViewCenterPoint
@property (retain, nonatomic) NSMutableArray *indexesOfDownloadedImages; // ivar: _indexesOfDownloadedImages
@property (nonatomic) CGFloat lastScrollViewOffsetBeforeScrolling; // ivar: _lastScrollViewOffsetBeforeScrolling
@property (readonly, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) NSUInteger numberOfViews;
@property (retain, nonatomic) UIBarButtonItem *openNavigationBarButton; // ivar: _openNavigationBarButton
@property (retain, nonatomic) NSNumber *originalIndex; // ivar: _originalIndex
@property (nonatomic) BOOL panAndSwipeToDismissGestureEnabled; // ivar: _panAndSwipeToDismissGestureEnabled
@property (nonatomic) NSInteger panGestureStartingDirection; // ivar: _panGestureStartingDirection
@property (copy, nonatomic) NSArray *photoViews; // ivar: _photoViews
@property (copy, nonatomic) NSArray *photos; // ivar: _photos
@property (readonly, nonatomic) UIView *rapBarButtonView;
@property (readonly, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL shouldFinishAnimation; // ivar: _shouldFinishAnimation
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (retain, nonatomic) MUPlaceUserAttributionViewModel *userAttributionViewModel; // ivar: _userAttributionViewModel


-(BOOL)_canShowWhileLocked;
-(BOOL)canBecomeFirstResponder;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(NSUInteger)indexOfView:(id)arg0 ;
-(NSUInteger)indexOfVisibleView;
-(NSUInteger)viewsCount;
-(id)currentPhoto;
-(id)initWithPhotos:(id)arg0 additionalView:(id)arg1 scrollToIndex:(NSUInteger)arg2 mapItem:(id)arg3 delegate:(id)arg4 ;
-(id)keyCommands;
-(id)photoViewForTransition;
-(void)_didTapDeletePhotoMenuItemForImageAtIndex:(NSUInteger)arg0 ;
-(void)_didTapEditPhotoCreditMenuItem;
-(void)_rapButtonPressed;
-(void)_selectedAddPhotosWithEntryPoint:(NSInteger)arg0 ;
-(void)attributionViewDidSelectDeletePhoto:(id)arg0 ;
-(void)attributionViewDidSelectEditPhotoCredit:(id)arg0 ;
-(void)attributionViewDidTapAttributionPunchout:(id)arg0 ;
-(void)attributionViewDidTapReportAnIssue:(id)arg0 ;
-(void)beginAnimatingActivityIndicator;
-(void)cancelDownloadingImages;
-(void)dealloc;
-(void)didTapDone;
-(void)didTapOnAdditionalView;
-(void)didTapOnAttributionView;
-(void)didTapOpen;
-(void)dismiss;
-(void)downloadImageForPhotoViewAtIndex:(NSUInteger)arg0 ;
-(void)downloadImageForURL:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(void)downloadImageForVisibleViews;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)handlePanGesture:(id)arg0 ;
-(void)reloadUserAttribution;
-(void)scrollLeft;
-(void)scrollRight;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setUIStyleWithNavigationBarHidden:(BOOL)arg0 ;
-(void)setupAdditionalView:(id)arg0 withStackView:(id)arg1 ;
-(void)setupAttributionView;
-(void)setupPhotoViewsWithStackView:(id)arg0 ;
-(void)setupViewsWithAdditionalView:(id)arg0 ;
-(void)startAnimatingActivityIndicatorViewForRAP;
-(void)stopAnimatingActivityIndicatorViewForRAP;
-(void)toggleBackground:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewsWithPhotoAtIndex:(NSUInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)zoomToPoint:(id)arg0 ;


@end


#endif