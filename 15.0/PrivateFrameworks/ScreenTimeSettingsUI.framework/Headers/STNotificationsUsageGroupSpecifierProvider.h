// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STNOTIFICATIONSUSAGEGROUPSPECIFIERPROVIDER_H
#define STNOTIFICATIONSUSAGEGROUPSPECIFIERPROVIDER_H

@class NSMutableDictionary, BBSettingsGateway;
@protocol OS_dispatch_queue;


#import "STShowMoreUsageGroupSpecifierProvider.h"

@interface STNotificationsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider

@property (readonly, nonatomic) NSMutableDictionary *notificationSectionByBundleID; // ivar: _notificationSectionByBundleID
@property (readonly, nonatomic) BBSettingsGateway *notificationSettingsGateway; // ivar: _notificationSettingsGateway
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationSettingsGatewayQueue; // ivar: _notificationSettingsGatewayQueue


-(id)_usageDetailsCoordinator:(id)arg0 ;
-(id)getNotificationsInfo:(id)arg0 ;
-(id)init;
-(id)newSpecifierWithUsageItem:(id)arg0 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_specifierIdentifierDidChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;
-(void)updateSpecifier:(id)arg0 usageItem:(id)arg1 ;


@end


#endif