// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCINSTALLATIONWARNINGVIEWCONTROLLER_H
#define MCINSTALLATIONWARNINGVIEWCONTROLLER_H

@class NSArray;
@protocol MCInstallationWarningDelegate;


#import "MCUITableViewController.h"

@interface MCInstallationWarningViewController : MCUITableViewController

@property (nonatomic) BOOL isMDMInstall; // ivar: _isMDMInstall
@property (weak, nonatomic) NSObject<MCInstallationWarningDelegate> *warningDelegate; // ivar: _warningDelegate
@property (retain, nonatomic) NSArray *warnings; // ivar: _warnings


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelInstallProfile;
-(void)_confirmInstallProfileIfNeeded;
-(void)_installProfile;
-(void)_setup;


@end


#endif