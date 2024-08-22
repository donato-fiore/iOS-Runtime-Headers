// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI32MEDICALRECORDCHARTOVERLAYCONTEXT_H
#define _TTC15HEALTHRECORDSUI32MEDICALRECORDCHARTOVERLAYCONTEXT_H

@protocol HKOverlayContext;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI32MedicalRecordChartOverlayContext : NSObject <HKOverlayContext>

 {
    ? title;
    ? dataSource;
    ? defaultColors;
    ? selectedColors;
    ? verticalAxis;
    ? cachedItem;
    ? cachedOverlayDisplayType;
    ? cachedDataSource;
}




-(id)contextItemForLastUpdate;
-(id)init;
-(id)initWithTitle:(id)arg0 dataSource:(id)arg1 defaultColors:(id)arg2 selectedColors:(id)arg3 verticalAxis:(id)arg4 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif