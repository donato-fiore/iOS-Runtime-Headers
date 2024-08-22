// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTMUTABLEELEMENTPROPERTIES_H
#define TSCH3DCHARTMUTABLEELEMENTPROPERTIES_H



#import "TSCH3DChartElementProperties.h"
#import "TSCH3DTransform.h"
#import "TSCH3DLabelResources.h"
#import "TSCH3DArray2D.h"

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties

@property (retain, nonatomic) TSCH3DTransform *chartTransform; // ivar: _chartTransform
@property (retain, nonatomic) TSCH3DTransform *elementsTransform; // ivar: _elementsTransform
@property (retain, nonatomic) TSCH3DLabelResources *labels; // ivar: _labels
@property (retain, nonatomic) TSCH3DArray2D *lightingModels; // ivar: _lightingModels


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)renderingLightingModelForSeries:(id)arg0 ;


@end


#endif