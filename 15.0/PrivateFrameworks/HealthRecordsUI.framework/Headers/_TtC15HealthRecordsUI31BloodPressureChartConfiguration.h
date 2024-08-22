// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI31BLOODPRESSURECHARTCONFIGURATION_H
#define _TTC15HEALTHRECORDSUI31BLOODPRESSURECHARTCONFIGURATION_H

@protocol _TtP15HealthRecordsUI31MedicalRecordChartConfiguration_, _TtP15HealthRecordsUI33MedicalRecordChartDataTransformer_;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI31BloodPressureChartConfiguration : NSObject <_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_>



@property (nonatomic, readonly) Class chartControllerClass;
@property (nonatomic, readonly) NSObject<_TtP15HealthRecordsUI33MedicalRecordChartDataTransformer_> *dataTransformer;
@property (nonatomic, readonly) BOOL shouldShowOutOfRangeOverlay;


-(id)init;


@end


#endif