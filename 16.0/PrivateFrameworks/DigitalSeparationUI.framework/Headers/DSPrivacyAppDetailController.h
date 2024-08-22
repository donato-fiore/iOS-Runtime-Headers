// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSPRIVACYAPPDETAILCONTROLLER_H
#define DSPRIVACYAPPDETAILCONTROLLER_H

@class DSApp, NSMutableArray, NSArray;
@protocol DSPrivacyPermissionsDelegate;


#import "DSTableWelcomeController.h"

@interface DSPrivacyAppDetailController : DSTableWelcomeController

@property (retain, nonatomic) DSApp *app; // ivar: _app
@property (weak, nonatomic) NSObject<DSPrivacyPermissionsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *selectedPermissions; // ivar: _selectedPermissions
@property (retain, nonatomic) NSArray *sortedPermissions; // ivar: _sortedPermissions


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 app:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_updateButton;
-(void)back;
-(void)returnFromDetailAndDeleteApp;
-(void)returnFromDetailAndRevokeSelectedPermissions;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif