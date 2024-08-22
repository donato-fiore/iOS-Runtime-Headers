// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINTERRUPTIONMANAGER_H
#define ATXINTERRUPTIONMANAGER_H

@protocol ATXModeEntityScorerProtocol, ATXNotificationSettingsReaderProtocol;

#import <Foundation/Foundation.h>

#import "ATXDNDModeConfigurationClient.h"
#import "ATXNotificationManagementMAConstants.h"

@interface ATXInterruptionManager : NSObject {
    id<ATXModeEntityScorerProtocol> *_modesModels;
    id<ATXNotificationSettingsReaderProtocol> *_notificationSettingsReader;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
    ATXNotificationManagementMAConstants *_notificationManagementConstants;
}




-(id)init;
-(id)initWithModesModels:(id)arg0 notificationSettingsReader:(id)arg1 modeConfigurationClient:(id)arg2 ;
-(id)recommendedAllowedAppsForDNDMode:(id)arg0 ;
-(id)recommendedAllowedAppsForDNDModeSemanticType:(NSInteger)arg0 ;
-(id)recommendedAllowedAppsForMode:(NSUInteger)arg0 ;
-(id)recommendedAllowedContactsForDNDMode:(id)arg0 ;
-(id)recommendedAllowedContactsForDNDModeSemanticType:(NSInteger)arg0 ;
-(id)recommendedAllowedContactsForMode:(NSUInteger)arg0 ;
-(void)recommendedAllowedAppsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedAppsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedAppsForMode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedContactsForDNDMode:(id)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedContactsForDNDModeSemanticType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)recommendedAllowedContactsForMode:(NSUInteger)arg0 reply:(id)arg1 ;


@end


#endif