// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTBASICELEMENTPROPERTIES_H
#define TSCH3DCHARTBASICELEMENTPROPERTIES_H



#import "TSCH3DChartMutableElementProperties.h"
#import "TSCH3DChartModelEnumerator.h"

@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties {
    TSCH3DChartModelEnumerator *_enumerator;
}


@property (readonly, nonatomic) tvec2<int> size; // ivar: _size


-(id)boundsGeometryForSeries:(id)arg0 index:(*void)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)geometryForSeries:(id)arg0 index:(*void)arg1 ;
-(id)normalsForSeries:(id)arg0 index:(*void)arg1 ;
-(id)texcoordsForSeries:(id)arg0 index:(*void)arg1 ;
-(void)createResources;
-(void)dealloc;
-(void)resetWithEnumerator:(id)arg0 layoutSettings:(struct ? )arg1 ;


@end


#endif