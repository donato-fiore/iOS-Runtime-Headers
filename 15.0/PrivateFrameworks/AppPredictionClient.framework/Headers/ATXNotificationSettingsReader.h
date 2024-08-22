// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONSETTINGSREADER_H
#define ATXNOTIFICATIONSETTINGSREADER_H

@class UNNotificationSettingsCenter, NSString;
@protocol ATXNotificationSettingsReaderProtocol;

#import <Foundation/Foundation.h>

#import "ATXDNDModeConfigurationClient.h"

@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol>

 {
    ATXDNDModeConfigurationClient *_modeConfigClient;
    UNNotificationSettingsCenter *_notificationSettingsCenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)appIsOnAllowList:(id)arg0 dndModeUUID:(id)arg1 ;
-(BOOL)contactIsOnAllowList:(id)arg0 dndModeUUID:(id)arg1 ;
-(BOOL)digestSetupComplete;
-(BOOL)doesAppAllowMessageBreakthrough:(id)arg0 ;
-(BOOL)doesAppSendNotificationsToDigest:(id)arg0 ;
-(id)allConfiguredDigestApps;
-(id)init;
-(id)initWithModeConfigurationClient:(id)arg0 notificationSettingsCenter:(id)arg1 ;
-(id)modeConfiguration:(id)arg0 ;
-(id)notificationDigestDeliveryTimes;


@end


#endif