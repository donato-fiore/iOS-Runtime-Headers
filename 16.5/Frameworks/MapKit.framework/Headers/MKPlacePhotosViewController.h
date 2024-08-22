// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACEPHOTOSVIEWCONTROLLER_H
#define MKPLACEPHOTOSVIEWCONTROLLER_H

@class UIViewController, UIView, UIImageView, NSArray, UIScrollView, NSLayoutConstraint, UIButton, NSString;
@protocol MKPlaceAttributionCellDelegate, UIScrollViewDelegate, MKLookAroundContainerViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKLookAroundViewProvider, _MKInfoCardAnalyticsDelegate, MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate;


#import "MKPhotoBigAttributionView.h"
#import "MKMapItem.h"
#import "MKPlaceAttributionCell.h"
#import "MKLookAroundContainerView.h"
#import "MKLookAroundView.h"
#import "_MKPlaceViewController.h"

@interface MKPlacePhotosViewController : UIViewController <MKPlaceAttributionCellDelegate, UIScrollViewDelegate, MKLookAroundContainerViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKLookAroundViewProvider>

 {
    UIView *_bottomHairline;
    UIImageView *_imageViewForTransition;
    MKPhotoBigAttributionView *_primaryAttributionView;
    MKPhotoBigAttributionView *_secondaryAttributionView;
    NSArray *_photoViews;
    UIScrollView *_photosContainerScrollView;
    UIView *_photosContainer;
    UIView *_photosSmallAttributionsView;
    UIView *_attributionClippingview;
    CGFloat _lastPhotoScrollOffset;
    BOOL _photoScrollViewScrollingLeft;
    BOOL _photoScrollViewScrollingRight;
    BOOL _canUseFullscreenViewer;
    BOOL _photoLoaded;
    BOOL _loadAppImageCanceledOrFailed;
    BOOL _isRTL;
    NSUInteger _photosCount;
    UIView *_externalView;
    MKMapItem *_mapItem;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSArray *_photos;
    NSUInteger _mode;
    NSUInteger _originalMode;
    NSUInteger _options;
    MKPlaceAttributionCell *_attributionCell;
    UIButton *_previousPageButton;
    UIButton *_nextPageButton;
    MKLookAroundContainerView *_lookAroundContainerView;
    UIScrollView *_parentScrollView;
    NSUInteger _initialAppearanceSignpostID;
    BOOL _isDisappearing;
}


@property (readonly, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hoverActive; // ivar: _hoverActive
@property (readonly, nonatomic) BOOL isCompactMode;
@property (readonly, nonatomic) BOOL isFirstParty;
@property (readonly, nonatomic) MKLookAroundView *lookAroundView;
@property (readonly, nonatomic) NSUInteger numberOfBigAttributionViews;
@property (weak, nonatomic) _MKPlaceViewController *owner; // ivar: _owner
@property (weak, nonatomic) NSObject<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> *photosControllerDelegate; // ivar: _photosControllerDelegate
@property (readonly, nonatomic) BOOL shouldShowAddPhotoButtons;
@property (nonatomic) BOOL showsBottomHairline; // ivar: _showsBottomHairline
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)isParsecProcess;
-(BOOL)isSafariProcess;
-(BOOL)isSiriProcess;
-(id)_firstPartyMorePhotosAttributionString;
-(id)attributionString;
-(id)formattedAttributionString;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithMapItem:(id)arg0 mode:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(struct CGSize )_photoActionSize;
-(struct CGSize )_photoSizeForIndex:(NSUInteger)arg0 ;
-(struct CGSize )sizeForIndex:(NSUInteger)arg0 ;
-(void)_adjustScrollIndexByOffset:(NSInteger)arg0 ;
-(void)_applyCornerRadius;
-(void)_cancelLoadPhotos;
-(void)_catchScrollNotification:(id)arg0 ;
-(void)_createImageViews;
-(void)_didBecomeActive:(id)arg0 ;
-(void)_didTapAttributionViewWithPresentingViewController:(id)arg0 photoAttributionView:(id)arg1 ;
-(void)_loadPhotos;
-(void)_logUGCAction:(int)arg0 ;
-(void)_photoSelected:(id)arg0 ;
-(void)_photoTappedAtIndex:(NSUInteger)arg0 ;
-(void)_scrollNext;
-(void)_scrollPrevious;
-(void)_setContentVisibility:(NSInteger)arg0 ;
-(void)_updateAlphaAttribution;
-(void)_updateChevronVisibility;
-(void)_updatePhotoBackgroundColor:(id)arg0 ;
-(void)_willResignActive:(id)arg0 ;
-(void)addAttributionCell;
-(void)dealloc;
-(void)didTapPrimaryAttributionViewWithPresentingViewController:(id)arg0 ;
-(void)didTapSecondaryAttributionViewWithPresentingViewController:(id)arg0 ;
-(void)handleHover:(id)arg0 ;
-(void)infoCardThemeChanged;
-(void)layoutImages;
-(void)lookAroundContainerView:(id)arg0 didAddLookAroundView:(id)arg1 ;
-(void)openURL;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setContentVisibility:(NSInteger)arg0 ;
-(void)updateAttributionCell;
-(void)updateAttributionPositionWithOffset:(CGFloat)arg0 ;
-(void)updateBottomHairlineVisibility;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif