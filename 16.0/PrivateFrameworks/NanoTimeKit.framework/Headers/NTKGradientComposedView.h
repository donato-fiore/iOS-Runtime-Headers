// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGRADIENTCOMPOSEDVIEW_H
#define NTKGRADIENTCOMPOSEDVIEW_H

@class UIView, UIImageView;


#import "NTKGradientView.h"
#import "NTKRoundedCornerOverlayView.h"

@interface NTKGradientComposedView : UIView

@property (readonly, nonatomic) UIView *backgroundDimmingView; // ivar: _backgroundDimmingView
@property (readonly, nonatomic) NTKGradientView *backgroundGradientTransitionView; // ivar: _backgroundGradientTransitionView
@property (readonly, nonatomic) NTKGradientView *backgroundGradientView; // ivar: _backgroundGradientView
@property (readonly, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (readonly, nonatomic) UIView *composedView; // ivar: _composedView
@property (readonly, nonatomic) UIView *cornerMaskView; // ivar: _cornerMaskView
@property (readonly, nonatomic) NTKRoundedCornerOverlayView *cornerOverlayView; // ivar: _cornerOverlayView
@property (readonly, nonatomic) NTKGradientView *filterGradientView; // ivar: _filterGradientView
@property (nonatomic) BOOL filterOn; // ivar: _filterOn
@property (nonatomic) UIView *rootContainerView; // ivar: _rootContainerView
@property (nonatomic) BOOL showForegroundGradient; // ivar: _showForegroundGradient


-(id)initWithDevice:(id)arg0 ;
-(void)applyBackgroundGradientColorsFromPalette:(id)arg0 ;
-(void)applyEditingComplicationsFraction:(CGFloat)arg0 ;
-(void)applyForegroundGradientWithTopColor:(id)arg0 centerColor:(id)arg1 bottomColor:(id)arg2 ;
-(void)applyGossamerColorPalette:(id)arg0 ;
-(void)applyGradientColorsFromColorPalette:(id)arg0 toView:(id)arg1 ;
-(void)applyImageViewTransitionFraction:(CGFloat)arg0 ;


@end


#endif