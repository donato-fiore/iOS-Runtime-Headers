// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIBOKEHWALLPAPERVIEW_H
#define PBUIBOKEHWALLPAPERVIEW_H

@class CADisplayLink, NSMutableArray, NSDictionary, UIImage, CAGradientLayer;


#import "PBUIWallpaperView.h"

@interface PBUIBokehWallpaperView : PBUIWallpaperView {
    CADisplayLink *_displayLink;
    NSMutableArray *_circleArray;
    NSDictionary *_options;
    NSInteger _circleFillColor;
    UIImage *_cachedSnapshotImage;
    *__IOSurface _snapshotBuffer;
    BOOL _isOnLockScreen;
    BOOL _contentIsVisible;
    BOOL _hasSingleVariant;
    BOOL _blursNeedInvalidation;
}


@property (readonly, nonatomic) CAGradientLayer *layer;


+(BOOL)allowsParallax;
-(BOOL)_layerIsOutOfBounds:(id)arg0 ;
-(BOOL)_lowPowerModeIsEnabled;
-(BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)arg0 ;
-(BOOL)_thermalStateIsCritical;
-(BOOL)isContentStatic;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg0 forVariant:(NSInteger)arg1 ;
-(NSInteger)userInterfaceStyle;
-(NSInteger)wallpaperType;
-(id)_computeAverageColor;
-(id)_generateImageFromImage:(id)arg0 forBackdropParameters:(struct ? )arg1 includeTint:(BOOL)arg2 traitCollection:(id)arg3 ;
-(id)cacheGroup;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 variant:(NSInteger)arg2 cacheGroup:(id)arg3 delegate:(id)arg4 options:(NSUInteger)arg5 ;
-(id)snapshotImage;
-(struct __IOSurface *)_createSnapshotBuffer;
-(void)_addBokehCircles:(NSInteger)arg0 inBounds:(struct CGRect )arg1 ;
-(void)_correctGyroValues:(*CGFloat)arg0 y:(*CGFloat)arg1 ;
-(void)_destroyDisplayLink;
-(void)_handleVariantChange;
-(void)_initDisplayLink;
-(void)_screenDidUpdate:(id)arg0 ;
-(void)_screenDimmed:(id)arg0 ;
-(void)_screenUndimmed:(id)arg0 ;
-(void)_styleModeChanged:(id)arg0 ;
-(void)_thermalStateDidChange:(id)arg0 ;
-(void)_toggleCircleAnimations:(BOOL)arg0 ;
-(void)_updateGradientAndFillColor;
-(void)_updateOrientationIfNeeded;
-(void)_updateVariantStatus;
-(void)_wallpaperDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)setWallpaperAnimationEnabled:(BOOL)arg0 ;


@end


#endif