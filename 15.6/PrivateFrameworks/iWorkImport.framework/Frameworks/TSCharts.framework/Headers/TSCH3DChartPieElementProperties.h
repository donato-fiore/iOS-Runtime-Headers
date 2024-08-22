// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTPIEELEMENTPROPERTIES_H
#define TSCH3DCHARTPIEELEMENTPROPERTIES_H



#import "TSCH3DChartBasicElementProperties.h"

@interface TSCH3DChartPieElementProperties : TSCH3DChartBasicElementProperties {
    vector<float, std::allocator<float>> _percentOfTotal;
    vector<float, std::allocator<float>> _rotation;
    vector<float, std::allocator<float>> _explode;
}




-(BOOL)anyHasExplosion;
-(BOOL)applyElementTransform:(*void)arg0 series:(id)arg1 index:(struct tvec2<int> )arg2 propertyAccessor:(id)arg3 ;
-(NSInteger)flatIndex:(*void)arg0 ;
-(float)elementTransformDepthFromPropertyAccessor:(id)arg0 ;
-(float)explosionAtElementIndex:(*void)arg0 ;
-(float)explosionAtElementIndex:(*void)arg0 propertyAccessor:(id)arg1 ;
-(float)percentOfTotalAtElementIndex:(*void)arg0 ;
-(float)rotationAtElementIndex:(*void)arg0 ;
-(id)boundsGeometryForSeries:(id)arg0 index:(*void)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)reset;
-(void)setExplosion:(float)arg0 atElementIndex:(*void)arg1 ;
-(void)setPercentOfTotal:(float)arg0 atElementIndex:(*void)arg1 ;
-(void)setRotation:(float)arg0 atElementIndex:(*void)arg1 ;
-(void)updateLabels;
-(void)updateValues;


@end


#endif