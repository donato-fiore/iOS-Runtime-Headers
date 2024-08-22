// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI28BLOODPRESSUREDATATRANSFORMER_H
#define _TTC15HEALTHRECORDSUI28BLOODPRESSUREDATATRANSFORMER_H

@class SwiftObject;
@protocol _TtP15HealthRecordsUI33MedicalRecordChartDataTransformer_;



@interface _TtC15HealthRecordsUI28BloodPressureDataTransformer : SwiftObject <_TtP15HealthRecordsUI33MedicalRecordChartDataTransformer_>

 {
    ? $__lazy_storage_$_mmHgUnit;
    ? $__lazy_storage_$_displayType;
}




-(id)chartDisplayTypeWith:(id)arg0 displayName:(id)arg1 unitName:(id)arg2 ;
-(id)chartPointFor:(id)arg0 in:(id)arg1 with:(NSInteger)arg2 dataSourceType:(NSInteger)arg3 ;
-(id)graphSeriesWith:(id)arg0 ;


@end


#endif