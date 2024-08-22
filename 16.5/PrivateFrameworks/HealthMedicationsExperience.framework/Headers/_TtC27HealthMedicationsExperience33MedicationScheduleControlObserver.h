// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC27HEALTHMEDICATIONSEXPERIENCE33MEDICATIONSCHEDULECONTROLOBSERVER_H
#define _TTC27HEALTHMEDICATIONSEXPERIENCE33MEDICATIONSCHEDULECONTROLOBSERVER_H

@protocol HKMedicationScheduleControlObserver;

#import <Foundation/Foundation.h>


@interface _TtC27HealthMedicationsExperience33MedicationScheduleControlObserver : NSObject <HKMedicationScheduleControlObserver>

 {
    ? observerOptions;
    ? scheduleChangedSubject;
}




-(id)init;
-(void)scheduleControl:(id)arg0 didAddOrModifySchedules:(id)arg1 ;
-(void)scheduleControlDidRescheduleItems;


@end


#endif