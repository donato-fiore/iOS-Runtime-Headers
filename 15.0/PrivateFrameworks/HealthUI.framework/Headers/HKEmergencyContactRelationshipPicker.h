// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKEMERGENCYCONTACTRELATIONSHIPPICKER_H
#define HKEMERGENCYCONTACTRELATIONSHIPPICKER_H

@class NSArray;
@protocol HKEmergencyContactRelationshipPickerDelegate;


#import "HKTableViewController.h"

@interface HKEmergencyContactRelationshipPicker : HKTableViewController {
    NSArray *_tokens;
    NSArray *_labels;
}


@property (weak, nonatomic) NSObject<HKEmergencyContactRelationshipPickerDelegate> *delegate; // ivar: _delegate


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_cancelTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif