// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBDISPLAYLIST_H
#define RBDISPLAYLIST_H

@class NSString;
@protocol RBDisplayListContents;

#import <Foundation/Foundation.h>


@interface RBDisplayList : NSObject <RBDisplayListContents>

 {
    DisplayList _list;
    unique_ptr<RB::XML::Document, std::default_delete<RB::XML::Document>> _xml_document;
    vector<std::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1, unsigned long> _contexts;
    NSUInteger _active_contexts;
    NSUInteger _active_states;
}


@property (nonatomic) CGAffineTransform CTM;
@property (readonly, nonatomic) CGRect boundingRect;
@property (readonly, nonatomic) CGRect clipBoundingBox;
@property (nonatomic) CGRect contentRect; // ivar: _contentRect
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int defaultColorSpace;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat deviceScale; // ivar: _deviceScale
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL linearColors;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *xmlDescription;


+(id)decodedObjectWithData:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(*void)_rbContents;
-(*void)_rbPredicate;
-(*void)_rbXmlDocument;
-(id)encodedDataForDelegate:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)moveContents;
-(struct CGContext *)beginCGContextWithAlpha:(float)arg0 ;
-(struct CGContext *)beginCGContextWithAlpha:(float)arg0 flags:(unsigned int)arg1 ;
-(void)addAlphaGradientFilterWithStopCount:(NSInteger)arg0 colors:(struct ? *)arg1 colorSpace:(int)arg2 locations:(*CGFloat)arg3 flags:(unsigned int)arg4 ;
-(void)addAlphaMultiplyFilterWithColor:(struct ? )arg0 ;
-(void)addAlphaMultiplyFilterWithColor:(struct ? )arg0 colorSpace:(int)arg1 flags:(unsigned int)arg2 ;
-(void)addAlphaThresholdFilterWithAlpha:(float)arg0 color:(struct ? )arg1 colorSpace:(int)arg2 ;
-(void)addAlphaThresholdFilterWithMinAlpha:(float)arg0 maxAlpha:(float)arg1 color:(struct ? )arg2 colorSpace:(int)arg3 ;
-(void)addBlurFilterWithRadius:(CGFloat)arg0 ;
-(void)addBlurFilterWithRadius:(CGFloat)arg0 bounds:(struct CGRect )arg1 flags:(unsigned int)arg2 ;
-(void)addBlurFilterWithRadius:(CGFloat)arg0 flags:(unsigned int)arg1 ;
-(void)addBlurFilterWithRadius:(CGFloat)arg0 opaque:(BOOL)arg1 ;
-(void)addBrightnessFilterWithAmount:(float)arg0 ;
-(void)addBrightnessFilterWithAmount:(float)arg0 flags:(unsigned int)arg1 ;
-(void)addColorInvertFilter;
-(void)addColorInvertFilterWithAmount:(float)arg0 flags:(unsigned int)arg1 ;
-(void)addColorMatrixFilterWithArray:(float)arg0 ;
-(void)addColorMatrixFilterWithArray:(float)arg0 flags:(unsigned int)arg1 ;
-(void)addColorMonochromeFilterWithAmount:(float)arg0 color:(struct ? )arg1 bias:(float)arg2 ;
-(void)addColorMonochromeFilterWithAmount:(float)arg0 color:(struct ? )arg1 colorSpace:(int)arg2 bias:(float)arg3 flags:(unsigned int)arg4 ;
-(void)addColorMultiplyFilterWithColor:(struct ? )arg0 ;
-(void)addColorMultiplyFilterWithColor:(struct ? )arg0 colorSpace:(int)arg1 flags:(unsigned int)arg2 ;
-(void)addContrastFilterWithAmount:(float)arg0 ;
-(void)addContrastFilterWithAmount:(float)arg0 flags:(unsigned int)arg1 ;
-(void)addGrayscaleFilterWithAmount:(float)arg0 ;
-(void)addGrayscaleFilterWithAmount:(float)arg0 flags:(unsigned int)arg1 ;
-(void)addHueRotationFilterWithAngle:(CGFloat)arg0 ;
-(void)addHueRotationFilterWithAngle:(CGFloat)arg0 flags:(unsigned int)arg1 ;
-(void)addLuminanceCurveFilterWithCurve:(float)arg0 color:(struct ? )arg1 colorSpace:(int)arg2 flags:(unsigned int)arg3 ;
-(void)addLuminanceToAlphaFilter;
-(void)addLuminanceToAlphaFilterWithFlags:(unsigned int)arg0 ;
-(void)addPredicateStyle:(id)arg0 ;
-(void)addProjectionStyleWithArray:(float)arg0 ;
-(void)addSaturationFilterWithAmount:(float)arg0 ;
-(void)addSaturationFilterWithAmount:(float)arg0 flags:(unsigned int)arg1 ;
-(void)addShadowStyleWithRadius:(CGFloat)arg0 offset:(struct CGSize )arg1 color:(struct ? )arg2 colorSpace:(int)arg3 blendMode:(int)arg4 flags:(unsigned int)arg5 ;
-(void)addShadowStyleWithRadius:(CGFloat)arg0 offset:(struct CGSize )arg1 color:(struct ? )arg2 mode:(unsigned int)arg3 ;
-(void)addTransformStyle:(id)arg0 ;
-(void)beginLayer;
-(void)beginLayerWithFlags:(unsigned int)arg0 ;
-(void)beginRecordingXML;
-(void)clear;
-(void)clearCaches;
-(void)clipLayerWithAlpha:(float)arg0 mode:(int)arg1 ;
-(void)clipShape:(id)arg0 mode:(int)arg1 ;
-(void)concat:(struct CGAffineTransform )arg0 ;
-(void)dealloc;
-(void)drawDisplayList:(id)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 alpha:(float)arg1 blendMode:(int)arg2 flags:(unsigned int)arg3 operation:(id)arg4 ;
-(void)drawInState:(struct _RBDrawingState *)arg0 ;
-(void)drawLayerWithAlpha:(float)arg0 blendMode:(int)arg1 ;
-(void)drawShape:(id)arg0 fill:(id)arg1 alpha:(float)arg2 blendMode:(int)arg3 ;
-(void)endCGContext;
-(void)renderInContext:(struct CGContext *)arg0 options:(id)arg1 ;
-(void)restore;
-(void)rotateBy:(CGFloat)arg0 ;
-(void)save;
-(void)scaleByX:(CGFloat)arg0 Y:(CGFloat)arg1 ;
-(void)translateByX:(CGFloat)arg0 Y:(CGFloat)arg1 ;


@end


#endif