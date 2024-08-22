// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONROOMINTERACTIONEVENT_H
#define HKMEDICATIONROOMINTERACTIONEVENT_H

@class HKHealthStore, NSCalendar, NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HKMedicationRoomInteractionEvent : NSObject <HKAnalyticsEvent>

 {
    HKHealthStore *_healthStore;
    NSCalendar *_calendar;
    NSInteger _action;
    NSInteger _roomType;
    NSInteger _provenance;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


-(id)_isImproveHealthRecordsAllowedPayloadWithDataSource:(id)arg0 ;
-(id)_statisticsAnalyticsPayloadWithDataSource:(id)arg0 ;
-(id)_userCharacteristicsAnalyticsPayloadWithDataSource:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 calendar:(id)arg1 medicationRoomAction:(NSInteger)arg2 roomType:(NSInteger)arg3 provenance:(NSInteger)arg4 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif