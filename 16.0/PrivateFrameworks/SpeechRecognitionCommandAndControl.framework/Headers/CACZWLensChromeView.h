// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACZWLENSCHROMEVIEW_H
#define CACZWLENSCHROMEVIEW_H

@class UIView, CAShapeLayer, CALayer, NSArray;



@interface CACZWLensChromeView : UIView

@property (retain, nonatomic) CAShapeLayer *backdropGrabberMaskLayer; // ivar: _backdropGrabberMaskLayer
@property (retain, nonatomic) CALayer *backdropLayer; // ivar: _backdropLayer
@property (retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer; // ivar: _backdropMaskShapeLayer
@property (retain, nonatomic) CAShapeLayer *backdropResizingMaskLayer; // ivar: _backdropResizingMaskLayer
@property (retain, nonatomic) CAShapeLayer *chromeInnerBorderLayer; // ivar: _chromeInnerBorderLayer
@property (retain, nonatomic) CAShapeLayer *chromeOuterBorderLayer; // ivar: _chromeOuterBorderLayer
@property (retain, nonatomic) CALayer *grabberOverlayLayer; // ivar: _grabberOverlayLayer
@property (nonatomic) CGFloat lensCornerRadius; // ivar: _lensCornerRadius
@property (retain, nonatomic) CAShapeLayer *lensResizingHandlesLayer; // ivar: _lensResizingHandlesLayer
@property (nonatomic) CGRect previousResizeBounds; // ivar: _previousResizeBounds
@property (retain, nonatomic) NSArray *resizeElements; // ivar: _resizeElements
@property (nonatomic) BOOL showingResizeHandles; // ivar: _showingResizeHandles
@property (retain, nonatomic) CAShapeLayer *touchStealerShapeLayer; // ivar: _touchStealerShapeLayer


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)showLensResizingHandles:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateChromeVisibility:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif