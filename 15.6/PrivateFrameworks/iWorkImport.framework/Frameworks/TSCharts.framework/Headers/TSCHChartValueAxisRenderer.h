// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTVALUEAXISRENDERER_H
#define TSCHCHARTVALUEAXISRENDERER_H



#import "TSCHChartAxisRenderer.h"

@interface TSCHChartValueAxisRenderer : TSCHChartAxisRenderer {
    NSUInteger _editingLabelIndex;
}




-(CGFloat)unitSpaceValueForAxis:(id)arg0 index:(NSUInteger)arg1 ;
-(id)labelStringForAxis:(id)arg0 index:(NSUInteger)arg1 ;
-(id)labelsLayoutItem;
-(id)transparencyLayers;
-(id)valueAxisLayoutItem;
-(void)drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect )arg2 ;


@end


#endif