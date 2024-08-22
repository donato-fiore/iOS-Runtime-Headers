// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKPUCKACCURACYLAYER_H
#define _MKPUCKACCURACYLAYER_H

@class CALayer, UIColor, CAGradientLayer, NSArray, UITraitCollection;



@interface _MKPuckAccuracyLayer : CALayer {
    BOOL _externallyHidden;
    BOOL _internallyHidden;
    BOOL _shouldShowAnimationsIfAvailable;
    UIColor *_fullOpacityFillColor;
    CGFloat _baseOpacity;
    CGFloat _additionalOpacityMultiplier;
    UIColor *_fullOpacityStrokeColor;
    CGFloat _baseStrokeOpacity;
    CGFloat _additionalStrokeOpacityMultiplier;
    BOOL _useDarkAppearance;
    CALayer *_ring;
    CAGradientLayer *_faux3DHighlight;
    CALayer *_faux3DHighlightMask;
    NSArray *_faux3DHighlightMaskRings;
    CALayer *_faux3DShadow;
}


@property (readonly, nonatomic) CGFloat accuracy;
@property (readonly, nonatomic) CGFloat currentAccuracy;
@property (nonatomic, getter=isFaux3DEnabled) BOOL faux3DEnabled; // ivar: _faux3DEnabled
@property (nonatomic) CGFloat mapCameraDistance; // ivar: _mapCameraDistance
@property (nonatomic) CGFloat mapPitchRadians; // ivar: _mapPitchRadians
@property (nonatomic) NSUInteger mapType; // ivar: _mapType
@property (nonatomic) CGFloat minimumRadius; // ivar: _minimumRadius
@property (readonly, nonatomic) CGFloat presentationFillOpacity;
@property (readonly, nonatomic) CGRect significantBounds;
@property (nonatomic, getter=isStale) BOOL stale; // ivar: _stale
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(id)init;
-(void)_createFaux3DRings;
-(void)_updateColors;
-(void)_updateFaux3DRingsIfNecessary;
-(void)setFillOpacity:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setStrokeOpacity:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)startAnimationsIfNecessary;
-(void)stopAnimations;
-(void)updateLegacyConfiguration;


@end


#endif