// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI43SIGNEDCLINICALDATAMULTIRECORDVIEWCONTROLLER_H
#define _TTC15HEALTHRECORDSUI43SIGNEDCLINICALDATAMULTIRECORDVIEWCONTROLLER_H

@class HKTableViewController;



@interface _TtC15HealthRecordsUI43SignedClinicalDataMultiRecordViewController : HKTableViewController {
    ? medicalRecords;
    ? profile;
    ? displayGroups;
}




-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithUsingInsetStyling:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif