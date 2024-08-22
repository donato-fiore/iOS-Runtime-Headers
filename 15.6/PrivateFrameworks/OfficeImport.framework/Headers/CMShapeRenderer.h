// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSHAPERENDERER_H
#define CMSHAPERENDERER_H


#import <Foundation/Foundation.h>


@interface CMShapeRenderer : NSObject



+(struct CGColor *)_copyCGColorFromOADColor:(id)arg0 andState:(id)arg1 ;
+(struct CGColor *)_copyCGColorFromOADFill:(id)arg0 andState:(id)arg1 ;
+(struct CGImage *)copyImageFromOADImageFill:(id)arg0 withContext:(id)arg1 ;
+(struct CGImage *)copyImageFromOADImageFill:(id)arg0 withMapper:(id)arg1 ;
+(void)_renderCGPath:(struct CGPath *)arg0 stroke:(id)arg1 fill:(id)arg2 orientedBounds:(id)arg3 state:(id)arg4 drawingContext:(id)arg5 ;
+(void)_setupDrawingStyleInDrawingContext:(id)arg0 dash:(id)arg1 state:(id)arg2 ;
+(void)_setupDrawingStyleInDrawingContext:(id)arg0 fill:(id)arg1 stroke:(id)arg2 state:(id)arg3 ;
+(void)_setupDrawingStyleInDrawingContext:(id)arg0 stroke:(id)arg1 state:(id)arg2 ;
+(void)renderCanonicalShape:(int)arg0 fill:(id)arg1 stroke:(id)arg2 adjustValues:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6 ;
+(void)renderDiagramPath:(id)arg0 fill:(id)arg1 stroke:(id)arg2 state:(id)arg3 drawingContext:(id)arg4 ;
+(void)renderFreeForm:(id)arg0 fill:(id)arg1 stroke:(id)arg2 orientedBounds:(id)arg3 state:(id)arg4 drawingContext:(id)arg5 ;
+(void)renderLine:(int)arg0 stroke:(id)arg1 adjustValues:(id)arg2 orientedBounds:(id)arg3 state:(id)arg4 drawingContext:(id)arg5 ;


@end


#endif