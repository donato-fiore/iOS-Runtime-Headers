// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSTROKEGROUPINGVISUALIZATION_H
#define CHSTROKEGROUPINGVISUALIZATION_H



#import "CHStrokeGroupBasedVisualization.h"

@interface CHStrokeGroupingVisualization : CHStrokeGroupBasedVisualization



-(struct CGColor *)_newColorForStroke:(id)arg0 inGroup:(id)arg1 ;
-(struct CGRect )dirtyRectForStrokeGroup:(id)arg0 ;
-(void)drawVisualizationInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 viewBounds:(struct CGRect )arg2 ;


@end


#endif