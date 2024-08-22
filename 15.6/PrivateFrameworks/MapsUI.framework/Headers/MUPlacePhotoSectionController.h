// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPLACEPHOTOSECTIONCONTROLLER_H
#define MUPLACEPHOTOSECTIONCONTROLLER_H

@class MKPlacePhotoGalleryViewController, UIImageView, UIButton, MKMuninContainerView, NSString, MKMuninView, UIViewController, UIView, MKUGCCallToActionViewAppearance;
@protocol MUPlacePhotoSliderDataSource, MUPlacePhotoSliderDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MKMuninContainerViewDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUPlacePhotoSectionControllerLookAroundDelegate, MUPlacePhotoSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPhotoSliderTileProvider.h"
#import "MUPlacePhotoSliderView.h"
#import "MUPunchoutViewModel.h"
#import "MUPlaceSectionView.h"
#import "MUPlacePhotoSectionControllerConfiguration.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlacePhotoSectionController : MUPlaceSectionController <MUPlacePhotoSliderDataSource, MUPlacePhotoSliderDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MKMuninContainerViewDelegate, MUPlaceSectionControlling>

 {
    MUPhotoSliderTileProvider *_photoTileProvider;
    MUPlacePhotoSliderView *_photoSliderView;
    MKPlacePhotoGalleryViewController *_photoGalleryViewController;
    UIImageView *_imageViewForTransition;
    MUPunchoutViewModel *_attributionViewModel;
    MUPunchoutViewModel *_addPhotoViewModel;
    MUPlaceSectionView *_sectionView;
    UIButton *_floatingAttributionView;
    MKMuninContainerView *_muninContainerView;
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
@property (readonly, nonatomic) MKMuninView *lookAroundView;
@property (weak, nonatomic) NSObject<MUPlacePhotoSectionControllerDelegate> *photoSectionControllerDelegate; // ivar: _photoSectionControllerDelegate
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(BOOL)dismissPhotoGalleryIfNecessary:(id)arg0 ;
-(BOOL)isFirstParty;
-(NSUInteger)numberOfAttributionsForPhotoSliderView:(id)arg0 ;
-(NSUInteger)numberOfTilesForPhotoSliderView:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)attributionViewModelsForPhotoSliderView:(id)arg0 ;
-(id)draggableContent;
-(id)floatingViewForPhotoSliderView:(id)arg0 ;
-(id)infoCardChildPossibleActions;
-(id)initWithMapItem:(id)arg0 configuration:(id)arg1 ;
-(id)photoSliderView:(id)arg0 photoOverlayAtIndex:(NSUInteger)arg1 ;
-(id)photoSliderView:(id)arg0 photoViewModelAtIndex:(NSUInteger)arg1 ;
-(id)photoSliderViewHeaderViewForPhotoSlider:(id)arg0 ;
-(id)placePhotoGalleryImageViewForPhotoAtIndex:(NSUInteger)arg0 ;
-(int)analyticsModuleType;
-(void)_addPhotoButtonTapped;
-(void)_addPhotoButtonTappedWithPresentationOptions:(id)arg0 ;
-(void)_capturePhotoGallerySwipeUserAction:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_captureSliderInstrumentationWithAction:(int)arg0 ;
-(void)_captureSliderInstrumentationWithAction:(int)arg0 eventValue:(id)arg1 ;
-(void)_routeAlbumTapWithIndex:(NSUInteger)arg0 ;
-(void)_routeFlatListTapWithIndex:(NSUInteger)arg0 ;
-(void)_setupSectionView;
-(void)_update;
-(void)muninContainerView:(id)arg0 didAddMuninView:(id)arg1 ;
-(void)performInstrumentationForScrollLeft;
-(void)performInstrumentationForScrollRight;
-(void)photoGalleryTransitionAnimatorDidFinishAnimation;
-(void)photoSliderView:(id)arg0 didTapAttribution:(id)arg1 ;
-(void)photoSliderView:(id)arg0 didTapPhotoAtIndex:(NSUInteger)arg1 ;
-(void)photoSliderViewDidScroll:(id)arg0 ;
-(void)photoSliderViewDidTapHeaderView:(id)arg0 ;
-(void)placePhotoGallery:(id)arg0 attributionViewTappedAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoGallery:(id)arg0 didSelectReportImageAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoGallery:(id)arg0 openButtonTappedAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoGallery:(id)arg0 willCloseAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoGalleryAdditionalViewTapped:(id)arg0 ;
-(void)placePhotoGalleryDidCloseAtIndex:(NSUInteger)arg0 ;
-(void)placePhotoGalleryDidScrollLeftToIndex:(NSUInteger)arg0 ;
-(void)placePhotoGalleryDidScrollRightToIndex:(NSUInteger)arg0 ;
-(void)placePhotoGalleryDidSelectAddPhoto:(id)arg0 ;
-(void)updateForAttributionChange;
-(void)updateWithContentVisibility:(NSInteger)arg0 ;


@end


#endif