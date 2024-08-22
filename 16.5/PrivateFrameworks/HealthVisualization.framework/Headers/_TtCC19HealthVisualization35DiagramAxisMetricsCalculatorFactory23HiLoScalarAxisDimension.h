// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC19HEALTHVISUALIZATION35DIAGRAMAXISMETRICSCALCULATORFACTORY23HILOSCALARAXISDIMENSION_H
#define _TTCC19HEALTHVISUALIZATION35DIAGRAMAXISMETRICSCALCULATORFACTORY23HILOSCALARAXISDIMENSION_H

@class HKAxisLabelDimensionScalar;



@interface _TtCC19HealthVisualization35DiagramAxisMetricsCalculatorFactory23HiLoScalarAxisDimension : HKAxisLabelDimensionScalar {
    ? displayType;
    ? valueFormatter;
    ? unitPreferenceController;
}




-(id)init;
-(id)stringForLocation:(id)arg0 formatterForStepSize:(id)arg1 ;


@end


#endif