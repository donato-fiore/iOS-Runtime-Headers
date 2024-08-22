// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCOVERSHEETBLURVIEW_H
#define SBCOVERSHEETBLURVIEW_H

@class UIView, NSString, UIColor;
@protocol PBUIWallpaperObserver;



@interface SBCoverSheetBlurView : UIView <PBUIWallpaperObserver>

 {
    id *_scaleAdjustment;
    id *_alphaAdjustment;
    UIView *_reduceTransparencyView;
    NSInteger _variantToTrack;
}


@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *dimmingColor; // ivar: _dimmingColor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat weighting; // ivar: _weighting


+(Class)layerClass;
-(id)_averageWallpaperColor;
-(id)backdropLayer;
// -(id)initWithFrame:(struct CGRect )arg0 scaleAdjustment:(id)arg1 alphaAdjustment:(unk)arg2  ;
-(void)_configureForCurrentReduceTransparencySetting;
-(void)_createFilters;
-(void)_createReduceTransparencyView;
-(void)_reduceTransparencyEnabledStateDidChange:(id)arg0 ;
-(void)_removeFilters;
-(void)_removeReduceTransparencyView;
-(void)_updateForBlurRadius:(CGFloat)arg0 weighting:(CGFloat)arg1 forPresentationValue:(BOOL)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;


@end


#endif