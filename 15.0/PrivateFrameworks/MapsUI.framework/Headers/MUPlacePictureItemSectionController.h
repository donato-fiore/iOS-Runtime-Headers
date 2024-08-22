// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEPICTUREITEMSECTIONCONTROLLER_H
#define MUPLACEPICTUREITEMSECTIONCONTROLLER_H

@class UIImageView, MKPlacePhotoGalleryViewController, UIViewController, NSString, UIView, MKUGCCallToActionViewAppearance;
@protocol MUPlaceTilesViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MUPlaceSectionControlling, GEOAnnotatedItemList, MUInfoCardAnalyticsDelegate, MUPlacePictureItemSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceTilesView.h"
#import "MUPunchoutViewModel.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlacePictureItemSectionController : MUPlaceSectionController <MUPlaceTilesViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MUPlaceSectionControlling>

 {
    id<GEOAnnotatedItemList> *_annotatedList;
    MUPlaceSectionView *_sectionView;
    MUPlaceTilesView *_tilesView;
    UIImageView *_imageViewForTransition;
    MUPunchoutViewModel *_attributionViewModel;
    MKPlacePhotoGalleryViewController *_photoGalleryViewController;
    UIViewController *_presentingViewController;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MUPlacePictureItemSectionControllerDelegate> *pictureItemDelegate; // ivar: _pictureItemDelegate
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // ivar: _sectionHeaderViewModel
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithMapItem:(id)arg0 annotatedList:(id)arg1 presentingViewController:(id)arg2 ;
-(id)placePhotoGalleryImageViewForPhotoAtIndex:(NSUInteger)arg0 ;
-(int)analyticsModuleType;
-(void)_captureUserAction:(int)arg0 ;
-(void)_performPunchout;
-(void)_presentPhotoGalleryForPhotoIndex:(NSUInteger)arg0 ;
-(void)_setupSubviews;
-(void)performInstrumentationForScrollLeft;
-(void)performInstrumentationForScrollRight;
-(void)photoGalleryTransitionAnimatorDidFinishAnimation;
-(void)placePhotoGallery:(id)arg0 willCloseAtIndex:(NSUInteger)arg1 ;
-(void)placeTileCollectionView:(id)arg0 didTapOnAccessoryViewModel:(id)arg1 ;
-(void)placeTileCollectionView:(id)arg0 didTapOnViewModel:(id)arg1 ;
-(void)placeTileCollectionViewDidScroll:(id)arg0 ;


@end


#endif