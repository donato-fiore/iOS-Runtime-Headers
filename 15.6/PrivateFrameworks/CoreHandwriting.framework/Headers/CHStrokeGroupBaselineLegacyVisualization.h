// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSTROKEGROUPBASELINELEGACYVISUALIZATION_H
#define CHSTROKEGROUPBASELINELEGACYVISUALIZATION_H



#import "CHStrokeGroupBasedVisualization.h"

@interface CHStrokeGroupBaselineLegacyVisualization : CHStrokeGroupBasedVisualization



-(NSInteger)layeringPriority;
-(struct CGAffineTransform )_orientationTransformForStrokeBounds:(struct CGRect )arg0 atWritingDirectionIndex:(NSInteger)arg1 inGroup:(id)arg2 ;
-(struct CGPath *)_newBaselinePathForStrokeGroup:(id)arg0 outFirstPoint:(struct CGPoint *)arg1 strokeProvider:(id)arg2 ;
-(struct CGRect )_labelBoundsForAnchorPoint:(struct CGPoint )arg0 ;
-(struct CGRect )dirtyRectForStrokeGroup:(id)arg0 ;
-(void)_getOrientedBounds:(struct CGRect *)arg0 length:(*CGFloat)arg1 forStroke:(id)arg2 atWritingDirectionIndex:(NSInteger)arg3 inGroup:(id)arg4 ;
-(void)drawVisualizationInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 viewBounds:(struct CGRect )arg2 ;


@end


#endif