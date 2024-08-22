// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHMEDICATIONSUI40MEDICATIONDOSEEVENTMETADATADETAILSECTION_H
#define _TTC19HEALTHMEDICATIONSUI40MEDICATIONDOSEEVENTMETADATADETAILSECTION_H

@class HKDataMetadataDetailSection;



@interface _TtC19HealthMedicationsUI40MedicationDoseEventMetadataDetailSection : HKDataMetadataDetailSection {
    ? medication;
}




-(id)initWithSample:(id)arg0 displayTypeController:(id)arg1 unitController:(id)arg2 ;
-(id)initWithWorkoutActivity:(id)arg0 displayTypeController:(id)arg1 unitController:(id)arg2 ;
-(id)initWithWorkoutEvent:(id)arg0 ;
-(void)addSampleDetailValues;


@end


#endif