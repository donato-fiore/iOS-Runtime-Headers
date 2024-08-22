// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15HEALTHRECORDSUI37MEDICALRECORDANNOTATIONVIEWDATASOURCE_H
#define _TTC15HEALTHRECORDSUI37MEDICALRECORDANNOTATIONVIEWDATASOURCE_H

@protocol HKInteractiveChartAnnotationViewDataSource;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI37MedicalRecordAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>

 {
    ? dateGroup;
    ? monthYearLabel;
    ? timeLabel;
    ? dividerLabel;
}




-(BOOL)showSeparators;
-(NSInteger)numberOfValuesForAnnotationView:(id)arg0 ;
-(id)dateViewWithOrientation:(NSInteger)arg0 ;
-(id)init;
-(id)leftMarginViewWithOrientation:(NSInteger)arg0 ;
-(id)valueViewForColumnAtIndex:(NSInteger)arg0 orientation:(NSInteger)arg1 ;


@end


#endif