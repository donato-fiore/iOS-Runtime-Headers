// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUINOTIFICATIONSETTINGSVIEWMODEL_H
#define AMSUINOTIFICATIONSETTINGSVIEWMODEL_H

@class NSString, NSArray;
@protocol AMSUINotificationInAppSettingsTableViewCellDelegate, UITableViewDataSource, AMSUINotificationSettingsViewModelDelegate;

#import <Foundation/Foundation.h>


@interface AMSUINotificationSettingsViewModel : NSObject <AMSUINotificationInAppSettingsTableViewCellDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUINotificationSettingsViewModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) BOOL showAllowNotificationsButton; // ivar: _showAllowNotificationsButton
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)notificationInAppSettingsTableViewCellDidToggleValue:(id)arg0 forItem:(id)arg1 ;


@end


#endif