// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCINSTALLATIONCONSENTVIEWCONTROLLER_H
#define MCINSTALLATIONCONSENTVIEWCONTROLLER_H

@class MCProfile;
@protocol MCInstallationConsentDelegate;


#import "MCUITableViewController.h"

@interface MCInstallationConsentViewController : MCUITableViewController

@property (weak, nonatomic) NSObject<MCInstallationConsentDelegate> *consentDelegate; // ivar: _consentDelegate
@property (retain, nonatomic) MCProfile *profile; // ivar: _profile
@property (nonatomic) BOOL showInstall; // ivar: _showInstall


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelInstallProfile;
-(void)_installProfile;
-(void)_setup;


@end


#endif