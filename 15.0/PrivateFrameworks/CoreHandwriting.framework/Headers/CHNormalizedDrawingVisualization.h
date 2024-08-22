// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHNORMALIZEDDRAWINGVISUALIZATION_H
#define CHNORMALIZEDDRAWINGVISUALIZATION_H



#import "CHStrokeGroupBasedVisualization.h"

@interface CHNormalizedDrawingVisualization : CHStrokeGroupBasedVisualization



-(BOOL)shouldDrawStrokeGroup:(id)arg0 ;
-(BOOL)wantsInputDrawings;
-(NSInteger)layeringPriority;
-(struct CGAffineTransform )_transformForInputDrawingBounds:(struct CGRect )arg0 referenceBounds:(struct CGRect )arg1 viewBounds:(struct CGRect )arg2 ;
-(struct CGRect )dirtyRectForStrokeGroup:(id)arg0 ;
-(void)_drawCutPoints:(id)arg0 inputDrawing:(id)arg1 inContext:(struct CGContext *)arg2 transform:(struct CGAffineTransform )arg3 ;
-(void)_drawGroupBrackgroundInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)drawInputDrawing:(id)arg0 inContext:(struct CGContext *)arg1 transform:(struct CGAffineTransform )arg2 ;
-(void)drawVisualizationInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 viewBounds:(struct CGRect )arg2 ;


@end


#endif