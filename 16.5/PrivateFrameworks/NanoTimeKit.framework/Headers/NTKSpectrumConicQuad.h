// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKSPECTRUMCONICQUAD_H
#define NTKSPECTRUMCONICQUAD_H

@class CLKUIQuad, CAMediaTimingFunction, NSCalendar, NSDate;
@protocol MTLDevice;


#import "NTKSpectrumResourceManager.h"

@interface NTKSpectrumConicQuad : CLKUIQuad {
    id<MTLDevice> *_device;
    NTKSpectrumResourceManager *_resourceManager;
    id<MTLBuffer>" _conicUniformsBuffers;
    CAMediaTimingFunction *_mediaTimingFunction;
    ? _fromColor;
    ? _toColor;
    ? _midColor;
    ? _aliasColor;
    NSUInteger _colorInterpolation;
    CGFloat _screenScale;
    ? _size;
    NSUInteger _frame;
    NSUInteger _style;
    CGFloat _startOverrideTime;
    CGFloat _endOverrideTime;
    float _startSecondAngle;
    float _startMinuteAngle;
    float _startHourAngle;
    float _endSecondAngle;
    float _endMinuteAngle;
    float _endHourAngle;
    BOOL _isAnimatingStyle;
    NSUInteger _role;
    float _styleTransitionFraction;
    NSUInteger _toStyle;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (nonatomic) float maskRadius; // ivar: _maskRadius
@property (nonatomic, getter=isMasking) BOOL masking; // ivar: _masking
@property (nonatomic) float opacity; // ivar: _opacity
@property (nonatomic) float overlayOpacity; // ivar: _overlayOpacity
@property (readonly, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (nonatomic) float vignetteOpacity; // ivar: _vignetteOpacity


-(BOOL)prepareForTime:(CGFloat)arg0 ;
-(id)initWithRole:(NSUInteger)arg0 screenScale:(CGFloat)arg1 ;
-(void)_significantTimeChanged;
-(void)applyTransitionFraction:(CGFloat)arg0 fromStyle:(NSUInteger)arg1 toStyle:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)renderForDisplayWithEncoder:(id)arg0 ;
-(void)setFromColor:(id)arg0 toColor:(id)arg1 ;
-(void)setFromColor:(id)arg0 toColor:(id)arg1 midColor:(id)arg2 interpolation:(NSUInteger)arg3 ;
-(void)setStyle:(NSUInteger)arg0 ;
-(void)setupForQuadView:(id)arg0 ;


@end


#endif