// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTQUALITYSETTINGS_H
#define PTQUALITYSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PTQualitySettings : NSObject {
    NSString *_description;
}


@property BOOL disableForegroundBlur; // ivar: _disableForegroundBlur
@property float disparityGuidedFilterEpsilon; // ivar: _disparityGuidedFilterEpsilon
@property float disparityUpsampleFactor; // ivar: _disparityUpsampleFactor
@property BOOL doCenterDisparity; // ivar: _doCenterDisparity
@property (readonly) BOOL doDisparityUpsampling;
@property BOOL doFirstLevelGaussianDownsample; // ivar: _doFirstLevelGaussianDownsample
@property BOOL doFocusEdgeMask; // ivar: _doFocusEdgeMask
@property BOOL doIntermediate2XUpscale; // ivar: _doIntermediate2XUpscale
@property BOOL doMacroApertureLimit; // ivar: _doMacroApertureLimit
@property float foregroundBlurLimitingFactor; // ivar: _foregroundBlurLimitingFactor
@property NSUInteger intermediatePixelFormat; // ivar: _intermediatePixelFormat
@property int numberOfPatternCircles; // ivar: _numberOfPatternCircles
@property int quality; // ivar: _quality
@property BOOL rayMarch; // ivar: _rayMarch
@property BOOL rayMarchAll; // ivar: _rayMarchAll
@property float renderDownscale; // ivar: _renderDownscale
@property BOOL useExportQualityNoise; // ivar: _useExportQualityNoise
@property BOOL usePrecomputedGaussianNoise; // ivar: _usePrecomputedGaussianNoise


+(id)createWithQuality:(int)arg0 config:(id)arg1 ;
-(id)description;
-(void)updateDescription;


@end


#endif