// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC27HEALTHMEDICATIONSEXPERIENCE29MEDICATIONLISTONBOARDINGEVENT_H
#define _TTC27HEALTHMEDICATIONSEXPERIENCE29MEDICATIONLISTONBOARDINGEVENT_H

@class SwiftObject, NSString;
@protocol HKAnalyticsEvent;



@interface _TtC27HealthMedicationsExperience29MedicationListOnboardingEvent : SwiftObject <HKAnalyticsEvent>

 {
    ? provenance;
    ? step;
    ? action;
    ? firstTimeMedFlow;
    ? medsDetailsEntryPoint;
    ? hasSuggestionsFromHealthRecords;
    ? itemRank;
    ? itemRankInOCR;
    ? timeSinceUserLastScannedAMed;
    ? didLastScanFallBackToOCR;
    ? algorithmType;
}


@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;


-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif