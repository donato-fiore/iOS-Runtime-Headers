// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHMEDICATIONSUI23MEDICATIONCHARTUSERINFO_H
#define _TTC19HEALTHMEDICATIONSUI23MEDICATIONCHARTUSERINFO_H

@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface _TtC19HealthMedicationsUI23MedicationChartUserInfo : NSObject <HKGraphSeriesChartData>

 {
    ? takenCount;
    ? skippedCount;
    ? statisticsInterval;
    ? medication;
    ? windowTakenCount;
    ? windowSkippedCount;
}




-(id)init;


@end


#endif