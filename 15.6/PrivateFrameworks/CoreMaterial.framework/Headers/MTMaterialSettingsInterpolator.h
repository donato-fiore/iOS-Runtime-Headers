// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTMATERIALSETTINGSINTERPOLATOR_H
#define MTMATERIALSETTINGSINTERPOLATOR_H

@class NSString, NSArray;
@protocol MTRecipeMaterialSettingsProviding;

#import <Foundation/Foundation.h>

#import "MTColor.h"

@interface MTMaterialSettingsInterpolator : NSObject {
    CGFloat _previousWeighting;
}


@property (readonly, nonatomic, getter=isBackdropRequiredEver) BOOL backdropRequiredEver;
@property (readonly, nonatomic, getter=isBackdropRequiredFinally) BOOL backdropRequiredFinally;
@property (readonly, nonatomic, getter=isBackdropRequiredInitially) BOOL backdropRequiredInitially;
@property (readonly, nonatomic) CGFloat backdropScale;
@property (readonly, nonatomic, getter=isBlurAtEnd) BOOL blurAtEnd;
@property (readonly, nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
@property (readonly, copy, nonatomic) NSString *blurInputQuality;
@property (readonly, nonatomic) CGFloat blurRadius;
@property (copy, nonatomic) id *blurRadiusTransformer; // ivar: _blurRadiusTransformer
@property (readonly, nonatomic) CGFloat brightness;
@property (readonly, nonatomic, getter=isBrightnessEnabled) BOOL brightnessEnabled;
@property (readonly, nonatomic) CAColorMatrix colorMatrix;
@property (readonly, nonatomic, getter=isColorMatrixEnabled) BOOL colorMatrixEnabled;
@property (retain, nonatomic) NSObject<MTRecipeMaterialSettingsProviding> *finalSettings; // ivar: _finalSettings
@property (retain, nonatomic) NSObject<MTRecipeMaterialSettingsProviding> *initialSettings; // ivar: _initialSettings
@property (readonly, nonatomic) CGFloat luminanceAmount;
@property (readonly, nonatomic, getter=isLuminanceEnabled) BOOL luminanceEnabled;
@property (readonly, copy, nonatomic) NSArray *luminanceValues;
@property (readonly, nonatomic, getter=isOverlay) BOOL overlay; // ivar: _overlay
@property (readonly, nonatomic) CGFloat saturation;
@property (readonly, nonatomic, getter=isSaturationEnabled) BOOL saturationEnabled;
@property (readonly, nonatomic) CGFloat tintAlpha;
@property (readonly, copy, nonatomic) MTColor *tintColor;
@property (readonly, nonatomic, getter=isTintEnabled) BOOL tintEnabled;
@property (nonatomic) CGFloat weighting; // ivar: _weighting
@property (readonly, nonatomic, getter=isWeightingChanging) BOOL weightingChanging;
@property (readonly, nonatomic) CGFloat zoom;
@property (readonly, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;


+(id)_filteringProtocolGetterNames;
-(BOOL)_isBackdropRequiredWithSettings:(id)arg0 ;
-(BOOL)_isBackdropRequiredWithSubSettings:(id)arg0 ;
-(BOOL)_isPropertyEnabled:(id)arg0 consideringWeighting:(BOOL)arg1 ;
-(BOOL)_isTintEnabledWithSettings:(id)arg0 ;
-(CGFloat)_floatPropertyValueForProperty:(id)arg0 ;
-(CGFloat)_floatPropertyValueForProperty:(id)arg0 withTransformer:(id)arg1 ;
-(id)_backdropScaleWithSettings:(id)arg0 ;
-(id)_blurRadiusWithSettings:(id)arg0 ;
-(id)_brightnessWithSettings:(id)arg0 ;
-(id)_colorMatrixColorWithSettings:(id)arg0 alpha:(CGFloat)arg1 ;
-(id)_colorMatrixWithSettings:(id)arg0 ;
-(id)_colorWithGetterBlock:(id)arg0 ;
-(id)_filteringProperty:(id)arg0 withSettings:(id)arg1 ;
-(id)_luminanceAmountWithSettings:(id)arg0 ;
-(id)_luminanceInputValues;
-(id)_propertyValueForProperty:(id)arg0 withTransformer:(id)arg1 ;
-(id)_saturationWithSettings:(id)arg0 ;
-(id)_tintAlphaWithSettings:(id)arg0 ;
-(id)_zoomWithSettings:(id)arg0 ;
-(id)description;
-(id)initWithSettings:(id)arg0 ;
-(struct CGImage *)variableBlurInputMask;
-(void)finalizeWeighting;


@end


#endif