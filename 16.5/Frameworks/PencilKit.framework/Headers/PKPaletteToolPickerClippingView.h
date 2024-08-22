// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTETOOLPICKERCLIPPINGVIEW_H
#define PKPALETTETOOLPICKERCLIPPINGVIEW_H

@class UIView, NSArray, NSLayoutConstraint, NSString;
@protocol PKPaletteViewSizeScaling;


#import "PKPaletteToolPickerBackgroundContentView.h"
#import "PKPalettePassthroughView.h"
#import "PKPaletteToolPickerClippingEdgeView.h"

@interface PKPaletteToolPickerClippingView : UIView <PKPaletteViewSizeScaling>

 {
    PKPaletteToolPickerBackgroundContentView *_backgroundContentView;
    PKPalettePassthroughView *_contentOverlayView;
    PKPaletteToolPickerClippingEdgeView *_leadingEdgeView;
    PKPaletteToolPickerClippingEdgeView *_trailingEdgeView;
    PKPaletteToolPickerClippingEdgeView *_topEdgeView;
    PKPaletteToolPickerClippingEdgeView *_bottomEdgeView;
    NSArray *_edgeViews;
    NSArray *_edgeViewThicknessConstraints;
    NSLayoutConstraint *_leadingEdgeViewTopConstraint;
    NSLayoutConstraint *_trailingEdgeViewTopConstraint;
    NSLayoutConstraint *_topEdgeViewLeadingConstraint;
    NSLayoutConstraint *_topEdgeViewTrailingConstraint;
    NSLayoutConstraint *_bottomEdgeViewLeadingConstraint;
    NSLayoutConstraint *_bottomEdgeViewTrailingConstraint;
    BOOL _isVerticalRight;
    BOOL _leadingOrTopEdgeVisible;
    BOOL _trailingOrBottomEdgeVisible;
    UIView *_contentView;
    NSInteger _layoutAxis;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (readonly) Class superclass;


-(id)init;
-(void)layoutSubviews;


@end


#endif