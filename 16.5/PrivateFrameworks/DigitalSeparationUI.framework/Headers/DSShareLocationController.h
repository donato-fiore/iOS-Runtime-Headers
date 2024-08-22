// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSSHARELOCATIONCONTROLLER_H
#define DSSHARELOCATIONCONTROLLER_H

@class CNContactPickerViewController, NSString, FMFSession, NSArray, CNContact;
@protocol UITableViewDelegate, UITableViewDataSource, CNContactPickerDelegate, DSController, DSNavigationDelegate;


#import "DSTableWelcomeController.h"

@interface DSShareLocationController : DSTableWelcomeController <UITableViewDelegate, UITableViewDataSource, CNContactPickerDelegate, DSController>



@property (retain, nonatomic) CNContactPickerViewController *contactsViewController; // ivar: _contactsViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FMFSession *fmfSession; // ivar: _fmfSession
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *locationSharingTypeNames; // ivar: _locationSharingTypeNames
@property (retain, nonatomic) CNContact *selectedContact; // ivar: _selectedContact
@property (nonatomic) NSInteger selectedLocationSharingType; // ivar: _selectedLocationSharingType
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)bestDefaultContactProperty;
-(id)endDateFromNowForOfferTimespan:(NSInteger)arg0 ;
-(id)fmfHandleFromContactProperty:(id)arg0 ;
-(id)fmfHandlesFromContact:(id)arg0 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)manageBoldButton;
-(void)pickContact;
-(void)presentSharingFailedAlert;
-(void)shareLocation;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif