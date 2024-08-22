// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSETTINGSCONFIGURATIONSVIEWCONTROLLER_H
#define PXSETTINGSCONFIGURATIONSVIEWCONTROLLER_H

@class UITableViewController, UIAlertAction, UITextField;
@protocol PXSettingsConfigurationsSourceObserver;


#import "PXSettings.h"
#import "PXSettingsConfigurationsSource.h"

@interface PXSettingsConfigurationsViewController : UITableViewController <PXSettingsConfigurationsSourceObserver>



@property (nonatomic) BOOL areAllActionsAvailable; // ivar: _areAllActionsAvailable
@property (retain, nonatomic) UIAlertAction *promptConfirmAction; // ivar: _promptConfirmAction
@property (retain, nonatomic) UITextField *promptTextField; // ivar: _promptTextField
@property (readonly, nonatomic) PXSettings *settings; // ivar: _settings
@property (readonly, nonatomic) PXSettingsConfigurationsSource *source; // ivar: _source


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_titleForSettings:(id)arg0 ;
-(id)_untitledName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_handleDone:(id)arg0 ;
-(void)_promptNameWithAlertTitle:(id)arg0 message:(id)arg1 proposedNamed:(id)arg2 confirmationButtonTitle:(id)arg3 completionHandler:(id)arg4 ;
-(void)_promptedNameDidChange:(id)arg0 ;
-(void)_shareConfigurations:(id)arg0 ;
-(void)_updateAvailableActions;
-(void)settingsConfigurationSource:(id)arg0 didChange:(id)arg1 ;
-(void)settingsConfigurationSource:(id)arg0 performChanges:(id)arg1 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif