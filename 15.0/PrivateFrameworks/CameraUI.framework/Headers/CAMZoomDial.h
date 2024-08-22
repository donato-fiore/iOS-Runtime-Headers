// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMZOOMDIAL_H
#define CAMZOOMDIAL_H

@class UIView, UIImageView, NSArray;
@protocol OS_dispatch_queue;


#import "CAMZoomDialDotsView.h"

@interface CAMZoomDial : UIView

@property (readonly, nonatomic) CAMZoomDialDotsView *_activeDots; // ivar: __activeDots
@property (readonly, nonatomic) CGFloat _backgroundAlpha;
@property (nonatomic, setter=_setBackgroundImageJobIdentifier:) NSInteger _backgroundImageJobIdentifier; // ivar: __backgroundImageJobIdentifier
@property (readonly, nonatomic) UIImageView *_backgroundView; // ivar: __backgroundView
@property (nonatomic, getter=_isBackgroundViewUpdateNeeded, setter=_setBackgroundViewUpdateNeeded:) BOOL _backgroundViewUpdateNeeded; // ivar: __backgroundViewUpdateNeeded
@property (readonly, nonatomic) CGFloat _borderStrokeWidth;
@property (readonly, nonatomic) UIView *_contentContainerView; // ivar: __contentContainerView
@property (readonly, nonatomic) UIImageView *_contentMaskView; // ivar: __contentMaskView
@property (nonatomic, getter=_isDotsUpdateNeeded, setter=_setDotsUpdateNeeded:) BOOL _dotsUpdateNeeded; // ivar: __dotsUpdateNeeded
@property (readonly, nonatomic) CGFloat _focalLengthInsetLandscape;
@property (readonly, nonatomic) CGFloat _focalLengthInsetPortrait;
@property (retain, nonatomic, setter=_setFocalLengthLabelsLandscape:) NSArray *_focalLengthLabelsLandscape; // ivar: __focalLengthLabelsLandscape
@property (retain, nonatomic, setter=_setFocalLengthLabelsPortrait:) NSArray *_focalLengthLabelsPortrait; // ivar: __focalLengthLabelsPortrait
@property (readonly, nonatomic) CGFloat _fullRadius;
@property (readonly, nonatomic) CGFloat _fullRadiusInset;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_imageGenerationQueue; // ivar: __imageGenerationQueue
@property (readonly, nonatomic) CAMZoomDialDotsView *_inactiveDots; // ivar: __inactiveDots
@property (readonly, nonatomic) UIView *_labelContainerView; // ivar: __labelContainerView
@property (readonly, nonatomic) CGFloat _labelPaddingForContentSizeCategory;
@property (retain, nonatomic, setter=_setLabels:) NSArray *_labels; // ivar: __labels
@property (nonatomic, getter=_isLabelsUpdateNeeded, setter=_setLabelsUpdateNeeded:) BOOL _labelsUpdateNeeded; // ivar: __labelsUpdateNeeded
@property (nonatomic, setter=_setMaskImageJobIdentifier:) NSInteger _maskImageJobIdentifier; // ivar: __maskImageJobIdentifier
@property (nonatomic, getter=_isMaskUpdateNeeded, setter=_setMaskUpdateNeeded:) BOOL _maskUpdateNeeded; // ivar: __maskUpdateNeeded
@property (readonly, nonatomic) UIView *_needleView; // ivar: __needleView
@property (readonly, nonatomic) CGFloat _radiusDelta;
@property (readonly, nonatomic) CGFloat _tickLabelCenterRadialInset;
@property (nonatomic, setter=_setTicksImageJobIdentifier:) NSInteger _ticksImageJobIdentifier; // ivar: __ticksImageJobIdentifier
@property (nonatomic, getter=_isTicksUpdateNeeded, setter=_setTicksUpdateNeeded:) BOOL _ticksUpdateNeeded; // ivar: __ticksUpdateNeeded
@property (readonly, nonatomic) UIImageView *_ticksView; // ivar: __ticksView
@property (readonly, nonatomic) BOOL _useDots;
@property (readonly, nonatomic) BOOL _useTicks;
@property (readonly, nonatomic) NSArray *activeZoomFactorLabels;
@property (nonatomic) CGFloat angleDeltaForZoomRange; // ivar: _angleDeltaForZoomRange
@property (nonatomic) CGFloat contentMaskingHeight; // ivar: _contentMaskingHeight
@property (nonatomic) CGFloat contractionDistance; // ivar: _contractionDistance
@property (readonly, nonatomic) CGFloat dialBorderWidth;
@property (readonly, nonatomic) CGPoint dialCenter;
@property (readonly, nonatomic) CGFloat dotCenterInset;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic) BOOL hideLabels; // ivar: _hideLabels
@property (nonatomic) CGFloat maxAvailableZoomFactor; // ivar: _maxAvailableZoomFactor
@property (readonly, nonatomic) CGFloat maximumZoomFactor;
@property (nonatomic) CGFloat minAvailableZoomFactor; // ivar: _minAvailableZoomFactor
@property (readonly, nonatomic) CGFloat minimumZoomFactor;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor
@property (retain, nonatomic) NSArray *zoomFactors; // ivar: _zoomFactors


+(CGFloat)_normalizedValueForZoomFactor:(CGFloat)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 ;
+(CGFloat)_offsetAngleForZoomFactor:(CGFloat)arg0 relativeToCurrentZoomFactor:(BOOL)arg1 currentZoomFactor:(CGFloat)arg2 min:(CGFloat)arg3 max:(CGFloat)arg4 signedAngleDeltaForZoomRange:(CGFloat)arg5 ;
+(id)_createBackgroundImageForBounds:(struct CGRect )arg0 dialCenter:(struct CGPoint )arg1 radius:(CGFloat)arg2 backgroundAlpha:(CGFloat)arg3 borderStrokeWidth:(CGFloat)arg4 ;
+(id)_createMaskImageWithSize:(struct CGSize )arg0 tickLabelCenterRadialInset:(CGFloat)arg1 notchMaskImage:(id)arg2 labelMaskImage:(id)arg3 ;
+(id)_createTicksImageForBounds:(struct CGRect )arg0 dialCenter:(struct CGPoint )arg1 radius:(CGFloat)arg2 pixelWidth:(CGFloat)arg3 zoomFactors:(id)arg4 minAvailableZoomFactor:(CGFloat)arg5 maxAvailableZoomFactor:(CGFloat)arg6 signedAngleDeltaForZoomRange:(CGFloat)arg7 ;
+(struct CGPoint )_pointForOffsetAngle:(CGFloat)arg0 dialCenter:(struct CGPoint )arg1 radius:(CGFloat)arg2 ;
-(CGFloat)_labelRotationAngleForOrientation;
-(CGFloat)_offsetAngleForZoomFactor:(CGFloat)arg0 relativeToCurrentZoomFactor:(BOOL)arg1 ;
-(CGFloat)_signedAngleDeltaForZoomRange;
-(CGFloat)normalizedValueForZoomFactor:(CGFloat)arg0 ;
-(CGFloat)offsetAngleForPoint:(struct CGPoint )arg0 ;
-(CGFloat)offsetAngleForZoomFactor:(CGFloat)arg0 ;
-(CGFloat)zoomFactorForNormalizedValue:(CGFloat)arg0 ;
-(CGFloat)zoomFactorForOffsetAngle:(CGFloat)arg0 ;
-(id)_createDotImage;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGPoint )_dotCenterForOffsetAngle:(CGFloat)arg0 assumeExpanded:(BOOL)arg1 ;
-(struct CGPoint )_dotCenterForZoomFactor:(CGFloat)arg0 assumeExpanded:(BOOL)arg1 relativeToCurrentZoomFactor:(BOOL)arg2 ;
-(struct CGPoint )_pointForOffsetAngle:(CGFloat)arg0 radialInset:(CGFloat)arg1 assumeExpanded:(BOOL)arg2 ;
-(struct CGPoint )_textCenterForOffsetAngle:(CGFloat)arg0 assumeExpanded:(BOOL)arg1 ;
-(struct CGPoint )_tickEndpointForOffsetAngle:(CGFloat)arg0 isTop:(BOOL)arg1 ;
-(struct CGPoint )textCenterForZoomFactor:(CGFloat)arg0 assumeExpanded:(BOOL)arg1 ;
-(void)_commonCAMZoomDialInitialization;
-(void)_invalidateImagesForViewSize;
-(void)_layoutBackgroundAndContainerWithContentInset:(CGFloat)arg0 ;
-(void)_layoutSubviewsWithDots;
-(void)_layoutSubviewsWithTicks;
-(void)_updateBackroundImageViewIfNeeded;
-(void)_updateContentIfNeeded;
-(void)_updateDots;
-(void)_updateFocalLengthLabelAlphas;
-(void)_updateFocalLengthLabels;
-(void)_updateLabels;
-(void)_updateMaskImageIfNeeded;
-(void)_updateTicksImageIfNeeded;
-(void)layoutSubviews;
-(void)removeInternalAnimationsAndSetToCurrentPresentationValues:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif