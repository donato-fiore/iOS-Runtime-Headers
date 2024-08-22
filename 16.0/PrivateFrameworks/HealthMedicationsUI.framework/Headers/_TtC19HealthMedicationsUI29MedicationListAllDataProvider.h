// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI29MEDICATIONLISTALLDATAPROVIDER_H
#define _TTC19HEALTHMEDICATIONSUI29MEDICATIONLISTALLDATAPROVIDER_H

@class WDSampleListDataProvider, NSPredicate;



@interface _TtC19HealthMedicationsUI29MedicationListAllDataProvider : WDSampleListDataProvider {
    ? medication;
    ? predicate;
}


@property (nonatomic, retain) NSPredicate *defaultQueryPredicate;


-(id)detailSectionForSample:(id)arg0 ;
-(id)init;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 ;
-(id)sampleTypes;
-(id)textForObject:(id)arg0 ;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;


@end


#endif