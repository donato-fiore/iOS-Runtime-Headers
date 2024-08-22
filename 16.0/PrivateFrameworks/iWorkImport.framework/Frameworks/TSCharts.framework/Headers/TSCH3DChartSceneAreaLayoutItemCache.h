// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTSCENEAREALAYOUTITEMCACHE_H
#define TSCH3DCHARTSCENEAREALAYOUTITEMCACHE_H


#import <Foundation/Foundation.h>

#import "TSCH3DVector.h"

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {
    TSCH3DChartSceneAreaLayoutItemCacheValues _values;
}


@property (readonly, nonatomic) tvec2<float> chartBodyLayoutOffsetInChartAreaLayoutSpace;
@property (readonly, nonatomic) CGSize chartBodyLayoutSize;
@property (readonly, nonatomic) tvec2<int> containingViewport;
@property (readonly, nonatomic) TSCH3DVector *containingViewportVector; // ivar: _containingViewportVector
@property (readonly, nonatomic) BOOL forcedValid;
@property (readonly, nonatomic) tvec4<float> infoChartScale;
@property (readonly, nonatomic) ? layoutSettings;
@property (readonly, nonatomic) CGSize layoutSize;
@property (readonly, nonatomic) tvec2<int> modelSize;
@property (readonly, nonatomic) CGSize requestChartBodyLayoutSize;
@property (readonly, nonatomic) CGSize requestLayoutSize;


+(id)cacheWithCacheValues:(*void)arg0 ;
-(*void)values;
-(id)initWithCacheValues:(*void)arg0 ;
-(void)printDebug;


@end


#endif