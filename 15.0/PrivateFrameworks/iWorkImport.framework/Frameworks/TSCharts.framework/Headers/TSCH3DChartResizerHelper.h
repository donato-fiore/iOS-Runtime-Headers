// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTRESIZERHELPER_H
#define TSCH3DCHARTRESIZERHELPER_H


#import <Foundation/Foundation.h>

#import "TSCH3DChartBoundsLayout.h"
#import "TSCHChartInfo.h"
#import "TSCH3DVector.h"

@interface TSCH3DChartResizerHelper : NSObject {
    TSCH3DChartBoundsLayout *_boundsLayout;
}


@property (readonly, nonatomic) TSCHChartInfo *chartInfo; // ivar: _chartInfo
@property (nonatomic) tvec2<int> containingViewport; // ivar: _containingViewport
@property (readonly, nonatomic) TSCH3DVector *containingViewportVector;
@property (nonatomic) ? layoutSettings; // ivar: _layoutSettings
@property (readonly, nonatomic) tvec2<int> originalContainingViewport; // ivar: _originalContainingViewport


+(id)helperWithInfo:(id)arg0 ;
+(id)vectorForContainingViewport:(*void)arg0 ;
+(struct tvec2<int> )containingViewportForVector:(id)arg0 ;
-(id)boundsLayoutForScene:(id)arg0 mode:(int)arg1 ;
-(id)boundsLayoutResizedForScene:(id)arg0 bounds:(*void)arg1 resizeStartingSize:(*void)arg2 mode:(int)arg3 returningResultSize:(*void)arg4 ;
-(id)initWithInfo:(id)arg0 ;
-(struct tvec2<float> )chartBodyLayoutOffsetInChartAreaLayoutSpaceUsingConverter:(*void)arg0 ;
-(struct tvec2<float> )chartBodySizeByResizingScene:(id)arg0 toLayoutSize:(*void)arg1 resizeStartingSize:(*void)arg2 returningChartBodyLayoutOffsetInChartAreaLayoutSpace:(*void)arg3 resultLayoutSize:(*void)arg4 ;
-(struct tvec2<float> )layoutSizeByResizingScene:(id)arg0 toChartBodyLayoutSize:(*void)arg1 resizeStartingSize:(*void)arg2 returningChartBodyLayoutBoundsInChartAreaLayoutSpace:(*void)arg3 ;
-(void)initializeOriginalContainingViewport;
-(void)invalidateBounds;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg0 boundsIndex:(NSInteger)arg1 ;


@end


#endif