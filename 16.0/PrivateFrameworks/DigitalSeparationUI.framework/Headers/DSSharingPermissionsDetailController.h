// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSSHARINGPERMISSIONSDETAILCONTROLLER_H
#define DSSHARINGPERMISSIONSDETAILCONTROLLER_H

@class NSArray, DSSharingPerson, DSSharingType, UIViewController;
@protocol DSSharingPermissionsDetailDelegate;


#import "DSTableWelcomeController.h"

@interface DSSharingPermissionsDetailController : DSTableWelcomeController

@property (weak, nonatomic) NSObject<DSSharingPermissionsDetailDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *remainingPeople; // ivar: _remainingPeople
@property (retain, nonatomic) NSArray *remainingSharingTypes; // ivar: _remainingSharingTypes
@property (retain, nonatomic) DSSharingPerson *sharingPerson; // ivar: _sharingPerson
@property (retain, nonatomic) DSSharingType *sharingType; // ivar: _sharingType
@property (retain, nonatomic) NSArray *sortedPeople; // ivar: _sortedPeople
@property (retain, nonatomic) NSArray *sortedSourceNames; // ivar: _sortedSourceNames
@property (retain, nonatomic) UIViewController *startingViewController; // ivar: _startingViewController


+(id)detailControllerWithPeople:(id)arg0 startingViewController:(id)arg1 delegate:(id)arg2 ;
+(id)detailControllerWithSharingTypes:(id)arg0 startingViewController:(id)arg1 delegate:(id)arg2 ;
+(void)initialize;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)alertTextForSources:(id)arg0 ;
-(id)personForIndexPath:(id)arg0 ;
-(id)sourceNameForIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_updateButton;
-(void)next;
-(void)reloadTableViewData;
-(void)sharingStoppedForPerson:(id)arg0 sourceNames:(id)arg1 error:(id)arg2 ;
-(void)sharingStoppedForType:(id)arg0 people:(id)arg1 error:(id)arg2 ;
-(void)stopAllSharing;
-(void)stopSelectedSharing;
-(void)stopSharingSources:(id)arg0 people:(id)arg1 alertLabel:(id)arg2 alertDetail:(id)arg3 completion:(id)arg4 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif