// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCHARTEXPERIMENTSMEDICATIONDOSAGE_H
#define WDCHARTEXPERIMENTSMEDICATIONDOSAGE_H

@class HKInteractiveChartViewController, UIColor;



@interface WDChartExperimentsMedicationDosage : HKInteractiveChartViewController

@property (retain, nonatomic) UIColor *color; // ivar: _color


-(id)_parseDoseSpecifications:(id)arg0 ;
-(id)initMedicationName:(id)arg0 dosages:(id)arg1 profile:(id)arg2 color:(id)arg3 ;
-(id)initMedicationName:(id)arg0 specifications:(id)arg1 profile:(id)arg2 color:(id)arg3 ;


@end


#endif