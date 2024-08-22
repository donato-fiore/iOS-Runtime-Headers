// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARVISUALSTYLE_H
#define _UINAVIGATIONBARVISUALSTYLE_H

@class UIFont;

#import <Foundation/Foundation.h>


@interface _UINavigationBarVisualStyle : NSObject

@property (readonly, nonatomic) CGFloat _legacyButtonFontSize;
@property (readonly, nonatomic) CGFloat _legacyButtonImagePadding;
@property (readonly, nonatomic) CGFloat _legacyLeftTitleMargin;
@property (readonly, nonatomic) CGFloat _legacyRightTitleMargin;
@property (readonly, nonatomic) CGFloat backButtonIndicatorSpacing;
@property (readonly, nonatomic) CGFloat backIndicatorBottomMargin;
@property (readonly, nonatomic) CGFloat barHeight;
@property (readonly, nonatomic) CGFloat barPromptHeight;
@property (readonly, nonatomic) CGFloat bottomButtonMargin;
@property (readonly, nonatomic) CGFloat bottomImageMargin;
@property (readonly, nonatomic) UIEdgeInsets buttonContentEdgeInsets;
@property (readonly, nonatomic) CGFloat buttonFontSize;
@property (readonly, nonatomic) CGFloat buttonHeight;
@property (readonly, nonatomic) CGFloat buttonImagePadding;
@property (readonly, nonatomic) CGFloat headingFontSize;
@property (readonly, nonatomic) CGFloat horizontalMarginAdjustment;
@property (readonly, nonatomic) NSInteger idiom; // ivar: _idiom
@property (nonatomic) BOOL inPopover; // ivar: _inPopover
@property (readonly, nonatomic) CGFloat interBlockSpace;
@property (readonly, nonatomic) CGFloat interItemSpace;
@property (readonly, nonatomic) CGFloat leftBackImageMargin;
@property (readonly, nonatomic) CGFloat leftBackTitleMargin;
@property (readonly, nonatomic) CGFloat leftTextMargin;
@property (readonly, nonatomic) CGFloat leftTitleMargin;
@property (readonly, nonatomic) CGFloat maxBackButtonProportion;
@property (nonatomic) NSInteger metrics; // ivar: _metrics
@property (readonly, nonatomic) BOOL metricsHasPrompt;
@property (readonly, nonatomic) BOOL metricsIsMini;
@property (readonly, nonatomic) CGFloat minBackImageWidth;
@property (readonly, nonatomic) CGFloat minBackTextWidth;
@property (readonly, nonatomic) CGFloat minButtonWidth;
@property (readonly, nonatomic) CGFloat minTitleWidth;
@property (readonly, nonatomic) CGFloat navigationItemBaselineOffset;
@property (readonly, copy, nonatomic) UIFont *promptFont;
@property (readonly, nonatomic) CGFloat promptFontSize;
@property (readonly, nonatomic) CGFloat promptInset;
@property (readonly, nonatomic) CGFloat promptTextOffset;
@property (readonly, nonatomic) CGFloat rightImageMargin;
@property (readonly, nonatomic) CGFloat rightTitleMargin;
@property (readonly, nonatomic) CGFloat topBackMargin;
@property (readonly, nonatomic) CGFloat topImageMargin;
@property (readonly, nonatomic) CGFloat topMargin;
@property (readonly, nonatomic) CGFloat topTitleMargin;
@property (nonatomic) BOOL wantsLetterPress; // ivar: _wantsLetterPress


+(id)visualStyleForIdiom:(NSInteger)arg0 ;
-(BOOL)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)arg0 ;
-(CGFloat)backButtonAnimationClippingPadding;
-(CGFloat)barHeightForMetrics:(NSInteger)arg0 ;
-(CGFloat)imageButtonMarginInNavigationBar:(id)arg0 ;
-(CGFloat)leftBackTitleMarginForCustomBackButtonBackground:(id)arg0 ;
-(CGFloat)textButtonMarginInNavigationBar:(id)arg0 ;
-(NSInteger)navigationBar:(id)arg0 metricsForOrientation:(NSInteger)arg1 hasPrompt:(BOOL)arg2 ;
-(id)_legacyButtonFontForStyle:(NSInteger)arg0 ;
-(id)buttonFontForStyle:(NSInteger)arg0 ;
-(id)defaultTitleColorForUserInterfaceStyle:(NSInteger)arg0 barStyle:(NSInteger)arg1 ;
-(id)initWithIdiom:(NSInteger)arg0 ;
-(id)timingFunctionForAnimationInView:(id)arg0 withKeyPath:(id)arg1 isInteractive:(BOOL)arg2 ;


@end


#endif