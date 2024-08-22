// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTTITLEPOSITIONER_H
#define TSCH3DCHARTTITLEPOSITIONER_H


#import <Foundation/Foundation.h>

#import "TSCH3DScene.h"
#import "TSCHChartInfo.h"

@interface TSCH3DChartTitlePositioner : NSObject {
    TSCH3DScene *_weakScene;
    tvec2<float> _cachedCategoryAxisLabelsSize;
    tvec2<float> _cachedValueAxisLabelsSize;
    tvec2<float> _cachedSeriesLabelsSize;
}


@property (readonly, nonatomic) TSCHChartInfo *info; // ivar: _info
@property (readonly, weak, nonatomic) TSCH3DScene *scene;


+(id)positionerWithInfo:(id)arg0 scene:(id)arg1 ;
-(BOOL)hasScene:(id)arg0 ;
-(CGFloat)wrapWidthForSize:(struct CGSize )arg0 labelTransform:(*void)arg1 ;
-(id)initWithInfo:(id)arg0 scene:(id)arg1 ;
-(struct tvec2<float> )sizeOfCategoryAxisLabels;
-(struct tvec2<float> )sizeOfSeriesLabels;
-(struct tvec2<float> )sizeOfValueAxisLabels;
-(void)applyParagraphStyle:(id)arg0 onLabelTransform:(*void)arg1 alignmentDimension:(int)arg2 ;


@end


#endif