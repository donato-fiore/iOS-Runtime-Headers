// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHGROUPBOUNDSVISUALIZATION_H
#define CHGROUPBOUNDSVISUALIZATION_H



#import "CHStrokeGroupBasedVisualization.h"

@interface CHGroupBoundsVisualization : CHStrokeGroupBasedVisualization



-(struct CGRect )dirtyRectForStrokeGroup:(id)arg0 ;
-(void)drawVisualizationInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 viewBounds:(struct CGRect )arg2 ;


@end


#endif