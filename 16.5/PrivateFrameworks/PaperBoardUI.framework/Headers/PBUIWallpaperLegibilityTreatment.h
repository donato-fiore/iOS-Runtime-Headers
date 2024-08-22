// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERLEGIBILITYTREATMENT_H
#define PBUIWALLPAPERLEGIBILITYTREATMENT_H

@class CALayer, CABackdropLayer, CAGradientLayer, UIColor, NSString;
@protocol CALayerDelegate, CABackdropLayerDelegate, PBUIImageTreatment, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBUIWallpaperLegibilityTreatment : NSObject <CALayerDelegate, CABackdropLayerDelegate, PBUIImageTreatment, NSSecureCoding>

 {
    CALayer *_dimmingLayer;
    CALayer *_dimmedColorLayer;
    CABackdropLayer *_luminanceBackdropLayer;
    CAGradientLayer *_gradientLayer;
}


@property (retain, nonatomic) UIColor *averageColor; // ivar: _averageColor
@property (readonly, nonatomic) BOOL canInterpolateToLowerScales;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsDimmingTreatment; // ivar: _needsDimmingTreatment
@property (nonatomic) BOOL needsLuminanceTreatment; // ivar: _needsLuminanceTreatment
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)commitToRenderingTree:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)colorByDimmingColor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)luminanceTreatmentFilters;
-(id)makeDimmingLayer;
-(id)makeGradientLayer;
-(id)makeLuminanceBackdropLayer;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;


@end


#endif