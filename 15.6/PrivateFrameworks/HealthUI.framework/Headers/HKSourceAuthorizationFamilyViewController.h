// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSOURCEAUTHORIZATIONFAMILYVIEWCONTROLLER_H
#define HKSOURCEAUTHORIZATIONFAMILYVIEWCONTROLLER_H

@class UIViewController, HKHealthStore, HKSource;


#import "HKTableViewController.h"
#import "HKClinicalSourceAuthorizationController.h"
#import "HKSourceAuthorizationController.h"

@interface HKSourceAuthorizationFamilyViewController : HKTableViewController

@property (retain, nonatomic) HKClinicalSourceAuthorizationController *clinicalAuthorizationController; // ivar: _clinicalAuthorizationController
@property (retain, nonatomic) UIViewController *clinicalAuthorizationSettingsViewController; // ivar: _clinicalAuthorizationSettingsViewController
@property (retain, nonatomic) HKSourceAuthorizationController *healthDataAuthorizationController; // ivar: _healthDataAuthorizationController
@property (retain, nonatomic) UIViewController *healthDataAuthorizationSettingsViewController; // ivar: _healthDataAuthorizationSettingsViewController
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, copy, nonatomic) HKSource *source; // ivar: _source


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_createFamilyCell;
-(id)_valueStringForAnyCategoryEnabled:(BOOL)arg0 ;
-(id)init;
-(id)initWithHealthStore:(id)arg0 source:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_reloadAuthorizationSettings;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif