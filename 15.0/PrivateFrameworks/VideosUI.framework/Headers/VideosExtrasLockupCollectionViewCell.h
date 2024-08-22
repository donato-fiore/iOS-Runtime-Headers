// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASLOCKUPCOLLECTIONVIEWCELL_H
#define VIDEOSEXTRASLOCKUPCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, UILabel, NSLayoutConstraint, NSString, UIPinchGestureRecognizer, IKLockupElement;
@protocol VideosExtrasCarouselCollectionViewCell;


#import "VideosExtrasConstrainedArtworkContainerView.h"
#import "VideosExtrasZoomingImageInteractiveTransitionSourceContext.h"

@interface VideosExtrasLockupCollectionViewCell : UICollectionViewCell <VideosExtrasCarouselCollectionViewCell>

 {
    CGSize _artworkSize;
    VideosExtrasConstrainedArtworkContainerView *_artworkContainerView;
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    NSUInteger _itemIndex;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_descriptionBaselineConstraint;
    NSString *_zoomingImageTransitionIdentifier;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    BOOL _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) IKLockupElement *lockup; // ivar: _lockup
@property (readonly) Class superclass;


-(NSUInteger)itemIndex;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)subtitleText;
-(id)subtitleTextStyle;
-(id)thumbnailImage;
-(id)titleText;
-(id)titleTextStyle;
-(struct CGSize )thumbnailMaxSize;
-(void)_handlePinchGesture:(id)arg0 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg0 transitionFinished:(BOOL)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg0 ;
-(void)prepareForReuse;
-(void)prepareZoomingImageTransitionWithContext:(id)arg0 ;
-(void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setItemIndex:(NSUInteger)arg0 ;
-(void)setSubtitleText:(id)arg0 ;
-(void)setThumbnailBorderColor:(id)arg0 ;
-(void)setThumbnailImage:(id)arg0 ;
-(void)setThumbnailImageAccessibilityText:(id)arg0 ;
-(void)setThumbnailImagePlaceholder:(id)arg0 ;
-(void)setThumbnailMaxSize:(struct CGSize )arg0 ;
-(void)setThumbnailOverlayImage:(id)arg0 ;
-(void)setTitleText:(id)arg0 ;
-(void)setZoomingImageTransitionIdentifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif