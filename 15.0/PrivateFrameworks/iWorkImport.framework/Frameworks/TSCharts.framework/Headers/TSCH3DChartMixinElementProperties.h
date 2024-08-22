// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTMIXINELEMENTPROPERTIES_H
#define TSCH3DCHARTMIXINELEMENTPROPERTIES_H



#import "TSCH3DChartElementProperties.h"

@interface TSCH3DChartMixinElementProperties : TSCH3DChartElementProperties {
    TSCH3DChartElementProperties *_original;
}




+(id)propertiesWithProperties:(id)arg0 ;
-(BOOL)applyElementTransform:(*void)arg0 series:(id)arg1 index:(struct tvec2<int> )arg2 propertyAccessor:(id)arg3 ;
-(float)elementTransformDepthFromPropertyAccessor:(id)arg0 ;
-(id)boundsGeometryForSeries:(id)arg0 index:(*void)arg1 ;
-(id)chartTransform;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)elementsTransform;
-(id)geometryForSeries:(id)arg0 index:(*void)arg1 ;
-(id)getPropertiesOfType:(Class)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(id)labels;
-(id)normalsForSeries:(id)arg0 index:(*void)arg1 ;
-(id)renderingLightingModelForSeries:(id)arg0 ;
-(id)texcoordsForSeries:(id)arg0 index:(*void)arg1 ;
-(void)applyChartElementsTransform:(*void)arg0 ;


@end


#endif