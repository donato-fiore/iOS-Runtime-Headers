// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(BOOL)appIsOnDenyList:(id)arg0 dndModeUUID:(id)arg1 ;
-(BOOL)contactIsOnAllowList:(id)arg0 dndModeUUID:(id)arg1 ;
-(BOOL)contactIsOnDenyList:(id)arg0 dndModeUUID:(id)arg1 ;
-(BOOL)digestSetupComplete;
-(BOOL)doesAppAllowMessageBreakthrough:(id)arg0 ;
-(BOOL)doesAppSendNotificationsToDigest:(id)arg0 ;
-(NSUInteger)applicationConfigurationTypeForDNDModeUUID:(id)arg0 success:(*BOOL)arg1 ;
-(NSUInteger)senderConfigurationTypeForDNDModeUUID:(id)arg0 success:(*BOOL)arg1 ;
-(id)allConfiguredDigestApps;
-(id)init;
-(id)initWithModeConfigurationClient:(id)arg0 notificationSettingsCenter:(id)arg1 ;
-(id)modeConfiguration:(id)arg0 ;
-(id)notificationDigestDeliveryTimes;
-(id)numConfiguredModes;


@end


#endif