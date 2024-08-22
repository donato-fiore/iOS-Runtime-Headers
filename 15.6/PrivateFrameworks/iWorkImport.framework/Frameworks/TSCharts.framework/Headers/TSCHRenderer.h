// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHRENDERER_H
#define TSCHRENDERER_H

@class NSString;
@protocol TSCHSupportsTextEditing, TSCHSupportsRendering;

#import <Foundation/Foundation.h>

#import "TSCHChartLayoutItem.h"
#import "TSCHChartInfo.h"
#import "TSCHChartModel.h"

@interface TSCHRenderer : NSObject <TSCHSupportsTextEditing>

 {
    TSCHChartLayoutItem *_layoutItem;
}


@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (readonly, nonatomic) CGRect chartLayoutSpaceRenderingRect;
@property (readonly, weak, nonatomic) NSObject<TSCHSupportsRendering> *chartRep; // ivar: _chartRep
@property (readonly, nonatomic) int chunkPlane;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCompositeRenderer;
@property (readonly, nonatomic) TSCHChartLayoutItem *layoutItem;
@property (readonly, nonatomic) TSCHChartModel *model;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSeparateLabelsRenderPass;
@property (readonly, nonatomic) CGFloat viewScale;


-(BOOL)canEditTextForSelectionPath:(id)arg0 ;
-(BOOL)canRenderSelectionPath:(id)arg0 ;
-(CGFloat)frameHeightChangeForPath:(id)arg0 ;
-(id)initWithChartRep:(id)arg0 layoutItem:(id)arg1 ;
-(id)textEditorForSelectionPath:(id)arg0 chartEditor:(id)arg1 ;
-(int)textDrawingFlagForSelectionPath:(id)arg0 ;
-(struct CGRect )frameForEditingTextForSelectionPath:(id)arg0 ;
-(struct CGRect )tLayerRectForContext:(struct CGContext *)arg0 ;
-(void)addSelection:(id)arg0 toCGPath:(struct CGPath *)arg1 useWrapWidth:(BOOL)arg2 ;
-(void)drawErrorBarsInContext:(struct CGContext *)arg0 chartVertical:(BOOL)arg1 elementRenderClass:(Class)arg2 ;
-(void)drawTrendLinesInContext:(struct CGContext *)arg0 chartVertical:(BOOL)arg1 elementRenderClass:(Class)arg2 ;
-(void)p_debugLayoutInContext:(struct CGContext *)arg0 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)renderIntoContext:(struct CGContext *)arg0 selection:(id)arg1 ;
-(void)renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)strokeRectInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 color:(struct CGColor *)arg2 ;
-(void)useEditedString:(id)arg0 ;


@end


#endif