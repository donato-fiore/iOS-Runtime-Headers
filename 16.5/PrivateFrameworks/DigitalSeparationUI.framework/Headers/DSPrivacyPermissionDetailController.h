// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSPRIVACYPERMISSIONDETAILCONTROLLER_H
#define DSPRIVACYPERMISSIONDETAILCONTROLLER_H

@class NSArray, DSSensor, NSMutableArray;
@protocol DSPrivacyPermissionsDelegate;


#import "DSTableWelcomeController.h"

@interface DSPrivacyPermissionDetailController : DSTableWelcomeController

@property (retain, nonatomic) NSArray *apps; // ivar: _apps
@property (weak, nonatomic) NSObject<DSPrivacyPermissionsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) DSSensor *permission; // ivar: _permission
@property (retain, nonatomic) NSMutableArray *selectedApps; // ivar: _selectedApps


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 permission:(id)arg3 apps:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_updateButton;
-(void)back;
-(void)returnFromDetailAndStopAllSharingForPermission;
-(void)stopAllPressed;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif