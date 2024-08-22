// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC27HEALTHMEDICATIONSEXPERIENCE14MEDICATIONDOSE_H
#define _TTC27HEALTHMEDICATIONSEXPERIENCE14MEDICATIONDOSE_H

@class SwiftObject;
@protocol _TtP27HealthMedicationsExperience24MedicationDetailObserver_;



@interface _TtC27HealthMedicationsExperience14MedicationDose : SwiftObject <_TtP27HealthMedicationsExperience24MedicationDetailObserver_>

 {
    ? medicationDoseType;
    ? _medication;
    ? medicationDetailProvider;
}




-(void)medicationDetailDidUpdate:(id)arg0 for:(id)arg1 ;


@end


#endif