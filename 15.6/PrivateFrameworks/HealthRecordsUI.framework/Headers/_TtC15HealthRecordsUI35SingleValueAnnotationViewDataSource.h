// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15HEALTHRECORDSUI35SINGLEVALUEANNOTATIONVIEWDATASOURCE_H
#define _TTC15HEALTHRECORDSUI35SINGLEVALUEANNOTATIONVIEWDATASOURCE_H

@class TtC15HealthRecordsUI37MedicalRecordAnnotationViewDataSource;



@interface _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource : TtC15HealthRecordsUI37MedicalRecordAnnotationViewDataSource {
    ? valueRangeGroup;
    ? valueLabel;
    ? referenceRangeView;
    ? constraints;
}




-(id)init;
-(id)valueViewForColumnAtIndex:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
-(void)updateUsing:(id)arg0 ;
-(void)updateUsing:(id)arg0 valueRange:(id)arg1 dateRange:(id)arg2 timeScope:(NSInteger)arg3 ;


@end


#endif