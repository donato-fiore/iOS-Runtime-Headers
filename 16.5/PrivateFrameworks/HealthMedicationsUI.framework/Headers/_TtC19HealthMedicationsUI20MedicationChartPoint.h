// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHMEDICATIONSUI20MEDICATIONCHARTPOINT_H
#define _TTC19HEALTHMEDICATIONSUI20MEDICATIONCHARTPOINT_H

@protocol HKChartPoint;

#import <Foundation/Foundation.h>


@interface _TtC19HealthMedicationsUI20MedicationChartPoint : NSObject <HKChartPoint>

 {
    ? takenCount;
    ? skippedCount;
    ? startDate;
    ? endDate;
    ? statisticsInterval;
    ? medication;
    ? windowTakenCount;
    ? windowSkippedCount;
}




-(id)allYValues;
-(id)init;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)userInfo;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif