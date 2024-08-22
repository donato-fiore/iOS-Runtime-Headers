// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTMESHRESOURCES_H
#define TSCH3DCHARTMESHRESOURCES_H

@class TSUOnce;
@protocol TSCH3DChartMeshCreator;

#import <Foundation/Foundation.h>

#import "TSCHChartSeries.h"
#import "TSCH3DChartMeshSharedResource.h"
#import "TSCH3DResource.h"
#import "TSCH3DChartTexcoordSharedResource.h"
#import "TSCH3DGeometryArrays.h"
#import "TSCH3DGeometry.h"

@interface TSCH3DChartMeshResources : NSObject {
    NSObject<TSCH3DChartMeshCreator> *_creator;
    TSCHChartSeries *_series;
    TSCH3DChartMeshSharedResource *_vertex;
    TSCH3DChartMeshSharedResource *_bounds;
    TSCH3DResource *_cachedBounds;
    TSUOnce *_cachedBoundsOnce;
    TSCH3DChartMeshSharedResource *_normal;
    TSCH3DChartTexcoordSharedResource *_texcoord;
    TSCH3DGeometryArrays *_arrays;
    TSCH3DGeometry *_geometry;
}


@property (readonly, nonatomic) TSCH3DResource *bounds;
@property (readonly, nonatomic) TSCH3DResource *normal;
@property (readonly, nonatomic) TSCH3DResource *texcoord;
@property (readonly, nonatomic) TSCH3DResource *vertex;


+(id)nullBuffer;
+(id)resourcesWithSeries:(id)arg0 creator:(id)arg1 ;
-(id)geometryResourceWithPrimitiveType:(int)arg0 ;
-(id)initWithSeries:(id)arg0 creator:(id)arg1 ;
-(void)dealloc;
-(void)regenerate;
-(void)regenerateBounds;
-(void)regenerateForChild:(id)arg0 ;


@end


#endif