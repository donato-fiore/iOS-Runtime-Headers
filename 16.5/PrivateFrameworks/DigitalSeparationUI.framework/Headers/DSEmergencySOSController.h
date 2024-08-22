// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSEMERGENCYSOSCONTROLLER_H
#define DSEMERGENCYSOSCONTROLLER_H

@class DSAppSharing, HKMedicalIDEmergencyContactFlow, NSString, NSArray, HKHealthStore, _HKMedicalIDData, HKMedicalIDStore, _HKEmergencyContact;
@protocol UITableViewDelegate, UITableViewDataSource, HKMedicalIDEmergencyContactFlowDelegate, DSController, DSNavigationDelegate;


#import "DSTableWelcomeController.h"

@interface DSEmergencySOSController : DSTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HKMedicalIDEmergencyContactFlowDelegate, DSController>



@property (retain, nonatomic) DSAppSharing *appSharing; // ivar: _appSharing
@property (retain, nonatomic) HKMedicalIDEmergencyContactFlow *contactFlow; // ivar: _contactFlow
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *emergencyContacts; // ivar: _emergencyContacts
@property BOOL hasRetriedEmergencyContactFetch; // ivar: _hasRetriedEmergencyContactFetch
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSString *kappaApprovedAppID; // ivar: _kappaApprovedAppID
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData; // ivar: _medicalIDData
@property (retain, nonatomic) HKMedicalIDStore *medicalIDStore; // ivar: _medicalIDStore
@property (retain, nonatomic) _HKEmergencyContact *selectedEmergencyContact; // ivar: _selectedEmergencyContact
@property (readonly) Class superclass;


-(BOOL)hasAppWithKappaApproved;
-(BOOL)maybeRetryDueToError:(id)arg0 withReason:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_showMaxContactsAlert;
-(void)chooseNewEmergencyContact;
-(void)emergencyContactFlow:(id)arg0 didSelectContact:(id)arg1 ;
-(void)emergencyContactFlowDidCancel:(id)arg0 ;
-(void)gatherEmergencyContacts;
-(void)removeEmergencyContact:(id)arg0 ;
-(void)revokeKappaPermission;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateKappaBundleID;
-(void)viewDidLoad;


@end


#endif