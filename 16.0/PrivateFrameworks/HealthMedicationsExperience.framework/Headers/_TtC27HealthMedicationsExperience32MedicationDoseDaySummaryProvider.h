// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC27HEALTHMEDICATIONSEXPERIENCE32MEDICATIONDOSEDAYSUMMARYPROVIDER_H
#define _TTC27HEALTHMEDICATIONSEXPERIENCE32MEDICATIONDOSEDAYSUMMARYPROVIDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC27HealthMedicationsExperience32MedicationDoseDaySummaryProvider : NSObject {
    ? _daySummary;
    ? healthStore;
    ? date;
    ? scheduleControl;
    ? medicationDetailProvider;
    ? observerQuery;
    ? doseEventPredicate;
}


@property (nonatomic, readonly) NSString *debugDescription;


-(id)init;
-(void)dealloc;


@end


#endif