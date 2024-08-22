// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSTROKEGROUPCLASSIFICATIONVISUALIZATION_H
#define CHSTROKEGROUPCLASSIFICATIONVISUALIZATION_H



#import "CHStrokeGroupingVisualization.h"

@interface CHStrokeGroupClassificationVisualization : CHStrokeGroupingVisualization



-(NSInteger)layeringPriority;
-(id)_attributedStringFromString:(id)arg0 withColor:(struct CGColor *)arg1 font:(struct __CTFont *)arg2 paragraphStyle:(struct __CTParagraphStyle *)arg3 ;
-(struct CGColor *)_newColorForStroke:(id)arg0 inGroup:(id)arg1 ;
-(void)drawVisualizationInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 viewBounds:(struct CGRect )arg2 ;


@end


#endif