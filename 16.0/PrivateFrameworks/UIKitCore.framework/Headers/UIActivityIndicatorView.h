// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACTIVITYINDICATORVIEW_H
#define UIACTIVITYINDICATORVIEW_H

@class NSString, NSArray;
@protocol NSCoding;


#import "UIView.h"
#import "UIImageView.h"
#import "UIColor.h"
#import "_UIActivityIndicatorViewArtworkCacheKey.h"
#import "_UIActivityIndicatorMessageLabel.h"

@interface UIActivityIndicatorView : UIView <NSCoding>

 {
    BOOL _wasAnimatingWhenAnimationsRemoved;
}


@property (nonatomic, setter=_setCustomWidth:) CGFloat _customWidth; // ivar: _customWidth
@property (nonatomic) NSInteger activityIndicatorViewStyle; // ivar: _activityIndicatorViewStyle
@property (readonly, nonatomic, getter=_actualActivityIndicatorViewStyle) NSInteger actualActivityIndicatorViewStyle; // ivar: _actualActivityIndicatorViewStyle
@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (readonly, nonatomic, getter=_animatingImageView) UIImageView *animatingImageView; // ivar: _animatingImageView
@property (nonatomic) CGFloat animationDuration; // ivar: _duration
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic, getter=_disableUpdateColorOnTraitCollectionChange) BOOL disableUpdateColorOnTraitCollectionChange; // ivar: _disableUpdateColorOnTraitCollectionChange
@property (nonatomic) BOOL hasShadow; // ivar: _hasShadow
@property (nonatomic) BOOL hidesWhenStopped; // ivar: _hidesWhenStopped
@property (readonly, nonatomic, getter=_lastArtCacheKey) _UIActivityIndicatorViewArtworkCacheKey *lastArtCacheKey; // ivar: _lastArtCacheKey
@property (readonly, nonatomic, getter=_lastHighlightArtCacheKey) _UIActivityIndicatorViewArtworkCacheKey *lastHighlightArtCacheKey; // ivar: _lastHighlightArtCacheKey
@property (retain, nonatomic, getter=_message, setter=_setMessage:) NSString *message; // ivar: _message
@property (readonly, nonatomic, getter=_messageLabel) _UIActivityIndicatorMessageLabel *messageLabel; // ivar: _messageLabel
@property (readonly, nonatomic, getter=_restartAnimationOnNextLayout) BOOL restartAnimationOnNextLayout; // ivar: _restartAnimationOnNextLayout
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property BOOL spinning; // ivar: _spinning
@property (readonly, nonatomic, getter=_spokeCount) NSInteger spokeCount; // ivar: _spokeCount
@property (readonly, nonatomic, getter=_spokeFrameRatio) NSInteger spokeFrameRatio; // ivar: _spokeFrameRatio
@property (readonly, nonatomic, getter=_spokeHighlightImages) NSArray *spokeHighlightImages; // ivar: _spokeHighlightImages
@property (readonly, nonatomic, getter=_spokeImages) NSArray *spokeImages; // ivar: _spokeImages
@property (nonatomic) CGFloat width; // ivar: _width


+(id)_imageSetNameForArtworkBasedStyle:(NSInteger)arg0 outImageCount:(*NSInteger)arg1 ;
+(id)_loadResourcesForArtworkBasedStyle:(NSInteger)arg0 ;
+(struct CGSize )defaultSizeForStyle:(NSInteger)arg0 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_hasClientSetColor;
-(BOOL)_isArtworkBasedStyle;
-(BOOL)_isShowingMessage;
-(BOOL)_isStatusBarStyle;
-(BOOL)_shouldGoBackToBaseStyle;
-(BOOL)_shouldGoToCustomStyle;
-(BOOL)_useCustomStyleForLegacyStyles;
-(BOOL)_wantsAnimationRestoration;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isHighlighted;
-(CGFloat)_alphaValueForStep:(NSInteger)arg0 ;
-(CGFloat)_effectiveCustomWidth;
-(CGFloat)_spokeLengthForGearWidth:(CGFloat)arg0 ;
-(CGFloat)_spokeWidthForGearWidth:(CGFloat)arg0 ;
-(CGFloat)_widthForGearWidth:(CGFloat)arg0 ;
-(NSInteger)_actualStyleByResolvingAutoUpdatingStyle:(NSInteger)arg0 ;
-(NSInteger)_customStyleForStyle:(NSInteger)arg0 ;
-(NSInteger)_defaultStyle;
-(NSInteger)_externalStyleForStyle:(NSInteger)arg0 ;
-(NSInteger)_internalStyleForStyle:(NSInteger)arg0 ;
-(NSInteger)_sizeForStyle:(NSInteger)arg0 ;
-(NSUInteger)_indexOfFirstImageForStartingAnimation;
-(id)_artCacheKeyWithStyle:(NSInteger)arg0 color:(id)arg1 ;
-(id)_defaultColorForStyle:(NSInteger)arg0 ;
-(id)_generateImagesForColor:(id)arg0 highlight:(BOOL)arg1 ;
-(id)_generateModernImagesForImages:(id)arg0 color:(id)arg1 ;
-(id)_highlightColorForStyle:(NSInteger)arg0 ;
-(id)_imageForStep:(NSInteger)arg0 withColor:(id)arg1 ;
-(id)_imagesForStyle:(NSInteger)arg0 color:(id)arg1 highlight:(BOOL)arg2 ;
-(id)initWithActivityIndicatorStyle:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_animatingImageViewFrameForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_messageLabelFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_defaultSizeConsultingCustomWidthIfApplicable;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_commonInit;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_removeAllAnimations:(BOOL)arg0 ;
-(void)_restoreRemovedAnimationsIncludingSubviews;
-(void)_setUpAnimation;
-(void)_tearDownAnimation;
-(void)_updateLayoutInfo;
-(void)_updateMessageForStyle:(NSInteger)arg0 ;
-(void)_updateSubviewFramesWithBounds:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setStyle:(NSInteger)arg0 ;
-(void)startAnimating;
-(void)startAnimation;
-(void)stopAnimating;
-(void)stopAnimation;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif