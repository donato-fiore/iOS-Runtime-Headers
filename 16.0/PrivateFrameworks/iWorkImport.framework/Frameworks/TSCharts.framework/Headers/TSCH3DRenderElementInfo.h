// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DRENDERELEMENTINFO_H
#define TSCH3DRENDERELEMENTINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DSceneRenderPipeline.h"
#import "TSCH3DRenderProcessor.h"
#import "TSCH3DChartElementProperties.h"
#import "TSCHChartSeries.h"

@interface TSCH3DRenderElementInfo : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL geometryOnly; // ivar: _geometryOnly
@property (readonly, nonatomic) tvec2<int> index; // ivar: _index
@property (readonly, retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline; // ivar: _pipeline
@property (readonly, retain, nonatomic) TSCH3DRenderProcessor *processor;
@property (readonly, retain, nonatomic) TSCH3DChartElementProperties *properties; // ivar: _properties
@property (readonly, retain, nonatomic) TSCHChartSeries *series; // ivar: _series
@property (nonatomic) BOOL transparent; // ivar: _transparent
@property (nonatomic) BOOL twoPasses; // ivar: _twoPasses
@property (readonly, nonatomic) BOOL useBoundsGeometry; // ivar: _useBoundsGeometry


+(id)infoWithPipeline:(id)arg0 properties:(id)arg1 series:(id)arg2 index:(struct tvec2<int> )arg3 useBoundsGeometry:(BOOL)arg4 twoPasses:(BOOL)arg5 transparent:(BOOL)arg6 geometryOnly:(BOOL)arg7 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPipeline:(id)arg0 properties:(id)arg1 series:(id)arg2 index:(struct tvec2<int> )arg3 useBoundsGeometry:(BOOL)arg4 twoPasses:(BOOL)arg5 transparent:(BOOL)arg6 geometryOnly:(BOOL)arg7 ;


@end


#endif