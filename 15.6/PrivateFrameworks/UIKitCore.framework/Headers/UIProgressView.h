// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPROGRESSVIEW_H
#define UIPROGRESSVIEW_H

@class NSArray, NSObservation, NSProgress;
@protocol NSCoding;


#import "UIView.h"
#import "UIImageView.h"
#import "UIVisualEffectView.h"
#import "UIImage.h"
#import "UIColor.h"

@interface UIProgressView : UIView <NSCoding>

 {
    NSInteger _barStyle;
    UIView *_contentView;
    UIImageView *_trackView;
    UIImageView *_progressView;
    BOOL _isAnimating;
    NSArray *_trackColors;
    NSArray *_progressColors;
    UIVisualEffectView *_effectView;
    NSObservation *_progressObservation;
    UIView *_shadowView;
    CGFloat _currentCornerRadius;
}


@property (retain, nonatomic) NSProgress *observedProgress; // ivar: _observedProgress
@property (nonatomic) float progress; // ivar: _progress
@property (retain, nonatomic) UIImage *progressImage; // ivar: _progressImage
@property (retain, nonatomic) UIColor *progressTintColor; // ivar: _progressTintColor
@property (nonatomic) NSInteger progressViewStyle; // ivar: _progressViewStyle
@property (retain, nonatomic) UIImage *trackImage; // ivar: _trackImage
@property (retain, nonatomic) UIColor *trackTintColor; // ivar: _trackTintColor


+(NSUInteger)_indexForStyle:(NSInteger)arg0 barStyle:(NSInteger)arg1 ;
+(id)_standardInnerImageForStyle:(NSInteger)arg0 barStyle:(NSInteger)arg1 ;
+(id)_standardOuterImageForStyle:(NSInteger)arg0 barStyle:(NSInteger)arg1 ;
+(id)_tintedImageWithTraitCollection:(id)arg0 forHeight:(CGFloat)arg1 andColors:(id)arg2 ;
+(id)_tintedImageWithTraitCollection:(id)arg0 forHeight:(CGFloat)arg1 andColors:(id)arg2 roundingRectCorners:(NSUInteger)arg3 ;
+(struct CGSize )defaultSize;
+(void)_fillImagesForIndex:(NSUInteger)arg0 style:(NSInteger)arg1 barStyle:(NSInteger)arg2 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_shouldTintProgress;
-(BOOL)_shouldTintTrack;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(CGFloat)_shadowOpacityForUserInterfaceStyle:(NSInteger)arg0 ;
-(NSInteger)barStyle;
-(NSUInteger)_roundedCornersForProgressForCurrentStyle;
-(NSUInteger)_roundedCornersForTrackForCurrentStyle;
-(id)_appropriateProgressImage;
-(id)_appropriateTrackImage;
-(id)_defaultTrackColorForCurrentStyle;
-(id)_effectiveContentView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithProgressViewStyle:(NSInteger)arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_layoutShadow;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_reducedTransparencyDidChange:(id)arg0 ;
-(void)_setupProgressViewCommon;
-(void)_setupShadow;
-(void)_updateCornerRadiusWithSize:(struct CGSize )arg0 ;
-(void)_updateImages;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBarStyle:(NSInteger)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif