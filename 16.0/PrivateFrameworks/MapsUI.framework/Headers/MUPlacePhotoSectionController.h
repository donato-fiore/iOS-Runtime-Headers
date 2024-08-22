// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEPHOTOSECTIONCONTROLLER_H
#define MUPLACEPHOTOSECTIONCONTROLLER_H

@class UIImageView, MKLookAroundContainerView, NSString, MKLookAroundView, UIViewController, UIView, NSArray, MKUGCCallToActionViewAppearance;
@protocol MUPlacePhotoSliderDataSource, MUPlacePhotoSliderDelegate, MUPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MUPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MKLookAroundContainerViewDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUPlacePhotoSectionControllerLookAroundDelegate, MUPlacePhotoSectionControllerDelegate, MUUserInformationProvider;


#import "MUPlaceSectionController.h"
#import "MUPhotoSliderTileProvider.h"
#import "MUPlacePhotoSliderView.h"
#import "MUPlacePhotoGalleryViewController.h"
#import "MUPunchoutViewModel.h"
#import "MUPlaceSectionView.h"
#import "MUPlacePhotoSectionControllerConfiguration.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"
#import "MUUserSubmittedPhoto.h"

@interface MUPlacePhotoSectionController : MUPlaceSectionController <MUPlacePhotoSliderDataSource, MUPlacePhotoSliderDelegate, MUPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MUPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MKLookAroundContainerViewDelegate, MUPlaceSectionControlling>

 {
    MUPhotoSliderTileProvider *_photoTileProvider;
    MUPlacePhotoSliderView *_photoSliderView;
    MUPlacePhotoGalleryViewController *_photoGalleryViewController;
    UIImageView *_imageViewForTransition;
    MUPunchoutViewModel *_attributionViewModel;
    MUPunchoutViewModel *_addPhotoViewModel;
    MUPlaceSectionView *_sectionView;
    MKLookAroundContainerView *_lookAroundContainerView;
    MUPlacePhotoSectionControllerConfiguration *_configuration;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic) NSInteger contentVisibility; // ivar: _contentVisibility
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MUPlacePhotoSectionControllerLookAroundDelegate> *lookAroundDelegate; // ivar: _lookAroundDelegate
@property (readonly, nonatomic) MKLookAroundView *lookAroundView;
@property (nonatomic) NSInteger numberOfUserSubmittedPhotos; // ivar: _numberOfUserSubmittedPhotos
@property (weak, nonatomic) NSObject<MUPlacePhotoSectionControllerDelegate> *photoSectionControllerDelegate; // ivar: _photoSectionControllerDelegate
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MUUserInformationProvider> *userInfoProvider; // ivar: _userInfoProvider
@property (retain, nonatomic) MUUserSubmittedPhoto *userSubmittedPhoto; // ivar: _userSubmittedPhoto


-(BOOL)dismissPhotoGalleryIfNecessary:(id)arg0 ;
-(BOOL)isFirstParty;
-(BOOL)isImpressionable;
-(NSUInteger)numberOfAttributionsForPhotoSliderView:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)attributionViewModelsForPhotoSliderView:(id)arg0 ;
-(id)draggableContent;
-(id)infoCardChildPossibleActions;
-(id)initWithMapItem:(id)arg0 configuration:(id)arg1 ;
-(id)photoSliderView:(id)arg0 photoOverlayForModel:(id)arg1 ;
-(id)photoSliderViewHeaderViewForPhotoSlider:(id)arg0 ;
-(id)photoSliderViewRequestsViewModels:(id)arg0 ;
-(id)placePhotoGalleryImageViewForPhotoAtIndex:(NSUInteger)arg0 ;
-(int)analyticsModuleType;
-(void)_addPhotoButtonTappedWithEntryPoint:(NSInteger)arg0 presentationOptions:(id)arg1 ;
-(void)_capturePhotoGallerySwipeUserAction:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_captureSliderInstrumentationWithAction:(int)arg0 ;
-(void)_captureSliderInstrumentationWithAction:(int)arg0 eventValue:(id)arg1 ;
-(void)_populateRevealedAnalyticsModule:(id)arg0 ;
-(void)_routeAlbumTapWithIndex:(NSUInteger)arg0 ;
-(void)_routeFlatListTapWithViewModel:(id)arg0 index:(NSUInteger)arg1 ;
-(void)_setupSectionView;
-(void)_update;
-(void)lookAroundContainerView:(id)arg0 didAddLookAroundView:(id)arg1 ;
-(void)performInstrumentationForScrollLeft;
-(void)performInstrumentationForScrollRight;
-(void)photoGalleryTransitionAnimatorDidFinishAnimation;
-(void)photoSliderView:(id)arg0 didTapAttribution:(id)arg1 ;
-(void)photoSliderView:(id)arg0 didTapViewModel:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)photoSliderViewDidScroll:(id)arg0 ;
-(void)photoSliderViewDidTapHeaderView:(id)arg0 ;
-(void)placePhotoGallery:(id)arg0 attributionViewTappedAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoGallery:(id)arg0 didSelectReportImageAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoGallery:(id)arg0 openButtonTappedAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoGallery:(id)arg0 selectedAddPhotoWithEntryPoint:(NSInteger)arg1 usingPresentationOptions:(id)arg2 ;
-(void)placePhotoGallery:(id)arg0 willCloseAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoGalleryAdditionalViewTapped:(id)arg0 ;
-(void)placePhotoGalleryDidCloseAtIndex:(NSUInteger)arg0 ;
-(void)placePhotoGalleryDidScrollLeftToIndex:(NSUInteger)arg0 ;
-(void)placePhotoGalleryDidScrollRightToIndex:(NSUInteger)arg0 ;
-(void)updateForAttributionChange;
-(void)updateWithContentVisibility:(NSInteger)arg0 ;
-(void)updateWithUserSubmittedPhotos:(BOOL)arg0 ;


@end


#endif