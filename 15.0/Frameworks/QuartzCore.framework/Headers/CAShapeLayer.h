// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASHAPELAYER_H
#define CASHAPELAYER_H

@class NSString, NSArray;


#import "CALayer.h"

@interface CAShapeLayer : CALayer

@property *CGColor fillColor;
@property (copy) NSString *fillRule;
@property (copy) NSString *lineCap;
@property (copy) NSArray *lineDashPattern;
@property CGFloat lineDashPhase;
@property (copy) NSString *lineJoin;
@property CGFloat lineWidth;
@property CGFloat miterLimit;
@property *CGPath path;
@property *CGColor strokeColor;
@property CGFloat strokeEnd;
@property CGFloat strokeStart;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
+(id)defaultValueForKey:(id)arg0 ;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(id)implicitAnimationForKeyPath:(id)arg0 ;
-(unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0 ;
-(void)_colorSpaceDidChange;
-(void)_renderForegroundInContext:(struct CGContext *)arg0 ;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif