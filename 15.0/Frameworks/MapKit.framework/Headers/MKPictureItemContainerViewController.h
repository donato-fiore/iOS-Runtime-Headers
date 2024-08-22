// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPICTUREITEMCONTAINERVIEWCONTROLLER_H
#define MKPICTUREITEMCONTAINERVIEWCONTROLLER_H

@class UIViewController, GEOMapItemAttribution, NSString, UIImageView, UIButton, UIScrollView, UIStackView;
@protocol UIScrollViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MKPictureItemContainerAnalyticsDelegate, MKPictureItemContainerDelegate, GEOPictureItemContainer, MKPlaceViewControllerPresentingProtocol;



@interface MKPictureItemContainerViewController : UIViewController <UIScrollViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator>



@property (weak, nonatomic) NSObject<MKPictureItemContainerAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, nonatomic) GEOMapItemAttribution *attribution; // ivar: _attribution
@property (nonatomic) CGPoint beginAnalyticsScrollingPoint; // ivar: _beginAnalyticsScrollingPoint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPictureItemContainerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isActive) BOOL hoverActive; // ivar: _hoverActive
@property (retain, nonatomic) UIImageView *imageViewForTransition; // ivar: _imageViewForTransition
@property (retain, nonatomic) UIButton *nextPageButton; // ivar: _nextPageButton
@property (readonly, nonatomic) NSObject<GEOPictureItemContainer> *pictureItemContainer; // ivar: _pictureItemContainer
@property (weak, nonatomic) NSObject<MKPlaceViewControllerPresentingProtocol> *presentingProtocol; // ivar: _presentingProtocol
@property (retain, nonatomic) UIButton *previousPageButton; // ivar: _previousPageButton
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithPictureItemContainer:(id)arg0 attribution:(id)arg1 ;
-(id)placePhotoGalleryImageViewForPhotoAtIndex:(NSUInteger)arg0 ;
-(id)visiblePictureItemViews;
-(void)addControlButtons;
-(void)adjustScrollIndexByOffset:(NSInteger)arg0 ;
-(void)applyCornerRadius;
-(void)didTapOnPictureItemView:(id)arg0 ;
-(void)downloadImageForVisiblePictureItemViews;
-(void)infoCardThemeChanged;
-(void)photoGalleryTransitionAnimatorDidFinishAnimation;
-(void)placePhotoGallery:(id)arg0 willCloseAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoGalleryDidFinishDismissing:(id)arg0 ;
-(void)scrollToNext;
-(void)scrollToPrevious;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateChevronVisibility;
-(void)updateUIForTheme:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif