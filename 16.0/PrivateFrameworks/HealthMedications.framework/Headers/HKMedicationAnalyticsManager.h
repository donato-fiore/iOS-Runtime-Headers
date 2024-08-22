// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONANALYTICSMANAGER_H
#define HKMEDICATIONANALYTICSMANAGER_H

@class HKAnalyticsEventSubmissionManager, HKHealthStore, NSCalendar;



@interface HKMedicationAnalyticsManager : HKAnalyticsEventSubmissionManager {
    NSInteger _provenance;
    HKHealthStore *_healthStore;
    NSCalendar *_calendar;
}




-(id)initWithHealthStore:(id)arg0 provenance:(NSInteger)arg1 ;
-(void)asynchronouslySubmitRoomInteraction:(NSInteger)arg0 roomType:(NSInteger)arg1 ;


@end


#endif