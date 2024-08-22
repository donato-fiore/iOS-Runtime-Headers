// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTSTYLERENDERER_H
#define SXCOMPONENTSTYLERENDERER_H

@class NSString;
@protocol SXViewportChangeListener, SXComponentStyleRenderer, SXComponentStyle, SXGradientFactory, SXImageFillViewFactory, SXRepeatableImageFillViewFactory, SXVideoFillViewFactory;

#import <Foundation/Foundation.h>

#import "SXShapeLayer.h"
#import "SXComponentView.h"
#import "SXGradientFillView.h"
#import "SXImageFillView.h"
#import "SXRepeatableImageFillView.h"
#import "SXLayer.h"
#import "SXVideoFillView.h"
#import "SXViewport.h"

@interface SXComponentStyleRenderer : NSObject <SXViewportChangeListener, SXComponentStyleRenderer>



@property (retain, nonatomic) SXShapeLayer *borderLayer; // ivar: _borderLayer
@property (retain, nonatomic) SXShapeLayer *bottomBorderLayer; // ivar: _bottomBorderLayer
@property (readonly, nonatomic) NSObject<SXComponentStyle> *componentStyle; // ivar: _componentStyle
@property (readonly, weak, nonatomic) SXComponentView *componentView; // ivar: _componentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRegisterForDynamicBounds; // ivar: _didRegisterForDynamicBounds
@property (readonly, nonatomic) NSObject<SXGradientFactory> *gradientFactory; // ivar: _gradientFactory
@property (retain, nonatomic) SXGradientFillView *gradientFillView; // ivar: _gradientFillView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXImageFillView *imageFillView; // ivar: _imageFillView
@property (readonly, nonatomic) NSObject<SXImageFillViewFactory> *imageFillViewFactory; // ivar: _imageFillViewFactory
@property (retain, nonatomic) SXShapeLayer *leftBorderLayer; // ivar: _leftBorderLayer
@property (retain, nonatomic) SXRepeatableImageFillView *repeatableImageFillView; // ivar: _repeatableImageFillView
@property (readonly, nonatomic) NSObject<SXRepeatableImageFillViewFactory> *repeatableImageFillViewFactory; // ivar: _repeatableImageFillViewFactory
@property (retain, nonatomic) SXShapeLayer *rightBorderLayer; // ivar: _rightBorderLayer
@property (retain, nonatomic) SXLayer *shadowLayer; // ivar: _shadowLayer
@property (readonly) Class superclass;
@property (retain, nonatomic) SXShapeLayer *topBorderLayer; // ivar: _topBorderLayer
@property (retain, nonatomic) SXVideoFillView *videoFillView; // ivar: _videoFillView
@property (readonly, nonatomic) NSObject<SXVideoFillViewFactory> *videoFillViewFactory; // ivar: _videoFillViewFactory
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)gradientViewForFill:(id)arg0 ;
-(id)imageViewForFill:(id)arg0 ;
-(id)initWithComponentStyle:(id)arg0 viewport:(id)arg1 imageFillViewFactory:(id)arg2 videoFillViewFactory:(id)arg3 gradientViewFactory:(id)arg4 repeatableImageFillViewFactory:(id)arg5 ;
-(id)repeatableImageFillViewForFill:(id)arg0 ;
-(id)videoPlayerViewForFill:(id)arg0 ;
-(id)viewForFill:(id)arg0 ;
-(void)applyBackgroundColor:(id)arg0 ;
-(void)applyBorder:(id)arg0 ;
-(void)applyComponentStyle;
-(void)applyCornerRadius:(CGFloat)arg0 cornerMask:(NSUInteger)arg1 curve:(id)arg2 onView:(id)arg3 ;
-(void)applyFill:(id)arg0 ;
-(void)applyMask:(id)arg0 ;
-(void)applyOpacity:(CGFloat)arg0 ;
-(void)applyShadow:(id)arg0 ;
-(void)applyStrokeStyle:(id)arg0 borderLayer:(id)arg1 path:(id)arg2 lineWidth:(CGFloat)arg3 ;
-(void)componentVisiblityStateDidChange:(NSInteger)arg0 ;
-(void)dealloc;
-(void)prepareBorder:(id)arg0 ;
-(void)prepareFill:(id)arg0 ;
-(void)prepareForComponentView:(id)arg0 ;
-(void)prepareShadow:(id)arg0 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)viewport:(id)arg0 dynamicBoundsDidChangeFromBounds:(struct CGRect )arg1 ;


@end


#endif