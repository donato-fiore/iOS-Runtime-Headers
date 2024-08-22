// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI31MEDICALRECORDCHARTABILITYRESULT_H
#define _TTC15HEALTHRECORDSUI31MEDICALRECORDCHARTABILITYRESULT_H

@class NSDate, NSArray;
@protocol _TtP15HealthRecordsUI31MedicalRecordChartConfiguration_;

#import <Foundation/Foundation.h>

#import "_TtC15HealthRecordsUI28MedicalRecordChartDataSource.h"

@interface _TtC15HealthRecordsUI31MedicalRecordChartabilityResult : NSObject {
    ? seriesDataSources;
    ? latestChartableDate;
}


@property (nonatomic, readonly) NSObject<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> *configuration; // ivar: configuration
@property (nonatomic, readonly) NSDate *latestChartableDate;
@property (nonatomic, readonly) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *masterDataSource; // ivar: masterDataSource
@property (nonatomic, readonly) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *noRangeDataSource; // ivar: noRangeDataSource
@property (nonatomic, readonly) _TtC15HealthRecordsUI28MedicalRecordChartDataSource *outOfRangeDataSource; // ivar: outOfRangeDataSource
@property (nonatomic, readonly) NSArray *seriesDataSources;
@property (nonatomic, readonly) BOOL shouldProduceAtLeastOneOverlay;


-(id)init;


@end


#endif