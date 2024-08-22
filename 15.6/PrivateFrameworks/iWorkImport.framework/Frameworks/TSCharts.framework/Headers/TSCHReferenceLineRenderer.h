// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHREFERENCELINERENDERER_H
#define TSCHREFERENCELINERENDERER_H



#import "TSCHRenderer.h"

@interface TSCHReferenceLineRenderer : TSCHRenderer



-(BOOL)canRenderSelectionPath:(id)arg0 ;
-(int)chunkPlane;
-(void)addSelection:(id)arg0 toCGPath:(struct CGPath *)arg1 useWrapWidth:(BOOL)arg2 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)p_renderLabelsIntoContext:(struct CGContext *)arg0 forRefLineLabelsLayout:(id)arg1 ;
-(void)p_renderLabelsIntoContext:(struct CGContext *)arg0 forRefLineLabelsLayout:(id)arg1 forSelection:(id)arg2 ;
-(void)p_renderLinesIntoContext:(struct CGContext *)arg0 linesToRender:(id)arg1 ;
-(void)renderIntoContext:(struct CGContext *)arg0 selection:(id)arg1 ;


@end


#endif