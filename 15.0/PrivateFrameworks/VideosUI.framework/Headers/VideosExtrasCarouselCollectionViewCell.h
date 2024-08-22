// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASCAROUSELCOLLECTIONVIEWCELL_H
#define VIDEOSEXTRASCAROUSELCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString, UILabel, MPUContentSizeLayoutConstraint, UIPinchGestureRecognizer, UIView, NSArray, NSLayoutConstraint;
@protocol UIGestureRecognizerDelegate, VideosExtrasCarouselCollectionViewCell;


#import "VideosExtrasZoomingImageInteractiveTransitionSourceContext.h"
#import "VideosExtrasConstrainedArtworkContainerView.h"

@interface VideosExtrasCarouselCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, VideosExtrasCarouselCollectionViewCell>



@property (nonatomic) BOOL allowsPinchingThumbnailImageForInteractiveZoomingImageTransition; // ivar: _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLabelBaselineConstraint; // ivar: _descriptionLabelBaselineConstraint
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext; // ivar: _interactiveTransitionSourceContext
@property (nonatomic) NSUInteger itemIndex; // ivar: _itemIndex
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleBaselineConstraint; // ivar: _subtitleBaselineConstraint
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *textContainer; // ivar: _textContainer
@property (readonly, nonatomic) CGFloat thumbnailImageContainerHeight;
@property (retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *thumbnailImageContainerView; // ivar: _thumbnailImageContainerView
@property (retain, nonatomic) NSArray *thumbnailImageContainerViewConstraints; // ivar: _thumbnailImageContainerViewConstraints
@property (retain, nonatomic) NSLayoutConstraint *thumbnailImageContainerViewHeightConstraint; // ivar: _thumbnailImageContainerViewHeightConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGSize windowSize; // ivar: _windowSize
@property (copy, nonatomic) NSString *zoomingImageTransitionIdentifier; // ivar: _zoomingImageTransitionIdentifier


-(id)lockupElement;
-(id)subtitleText;
-(id)subtitleTextStyle;
-(id)thumbnailImage;
-(id)thumbnailImageAccessibilityText;
-(id)thumbnailImagePlaceholder;
-(id)titleText;
-(id)titleTextStyle;
-(struct CGSize )thumbnailMaxSize;
-(void)_handlePinchGesture:(id)arg0 ;
-(void)_setupDescriptionLabelWithConstraintsAccumulator:(id)arg0 ;
-(void)_setupSubtitleLabelWithConstraintsAccumulator:(id)arg0 ;
-(void)_setupThumbnailImageContainerViewWithConstraintsAccumulator:(id)arg0 ;
-(void)_setupTitleLabelWithConstraintsAccumulator:(id)arg0 ;
-(void)_updateThumbnailArtworkViewBorder;
-(void)dealloc;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg0 transitionFinished:(BOOL)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg0 ;
-(void)prepareForReuse;
-(void)prepareZoomingImageTransitionWithContext:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSubtitleText:(id)arg0 ;
-(void)setThumbnailBorderColor:(id)arg0 ;
-(void)setThumbnailImage:(id)arg0 ;
-(void)setThumbnailImageAccessibilityText:(id)arg0 ;
-(void)setThumbnailImagePlaceholder:(id)arg0 ;
-(void)setThumbnailMaxSize:(struct CGSize )arg0 ;
-(void)setThumbnailOverlayImage:(id)arg0 ;
-(void)setTitleText:(id)arg0 ;
-(void)updateConstraints;


@end


#endif