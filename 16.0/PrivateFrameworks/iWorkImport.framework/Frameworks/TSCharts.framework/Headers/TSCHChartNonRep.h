// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTNONREP_H
#define TSCHCHARTNONREP_H

@class NSArray, NSString;
@protocol TSCHSupportsRendering;

#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"
#import "TSCHChartLayout.h"

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering>

 {
    NSArray *_renderers;
}


@property (retain, nonatomic) TSCHChartInfo *chartInfo; // ivar: _chartInfo
@property (retain, nonatomic) TSCHChartLayout *chartLayout; // ivar: _chartLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)forceRenderBlankBackground;
-(BOOL)is2DRepFor3DChartRep;
-(BOOL)isDrawingIntoPDF;
-(BOOL)renderElements;
-(BOOL)renderElementsShadowOnly;
-(BOOL)renderElementsWithoutShadows;
-(BOOL)renderGrid;
-(BOOL)renderLabels;
-(BOOL)renderReferenceLines;
-(BOOL)renderTrendLinesForSeriesIndex:(NSUInteger)arg0 ;
-(BOOL)requireSeparateLabelLayer;
-(BOOL)shadowsEnabled;
-(BOOL)shouldShowLegendHighlight;
-(CGFloat)viewScale;
-(id)commandController;
-(id)geometry;
-(id)initWithChartInfo:(id)arg0 ;
-(id)renderGroupIndexSetForSeriesIndex:(NSUInteger)arg0 ;
-(id)renderSeriesIndexSet;
-(id)renderers;
-(struct CGRect )convertNaturalRectToLayerRelative:(struct CGRect )arg0 ;
-(struct CGRect )convertUnscaledToBoundsRect:(struct CGRect )arg0 ;
-(struct CGRect )outerShadowFrame;
-(void)clearRenderers;
-(void)didDrawInLayer:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)setupForDrawingInLayer:(id)arg0 context:(struct CGContext *)arg1 ;


@end


#endif