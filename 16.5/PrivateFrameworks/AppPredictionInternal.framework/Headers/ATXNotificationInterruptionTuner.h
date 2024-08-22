// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONINTERRUPTIONTUNER_H
#define ATXNOTIFICATIONINTERRUPTIONTUNER_H

@class ATXDNDModeConfigurationClient, ATXNotificationManagementMAConstants, ATXInterruptionManager;
@protocol ATXModeEntityScorerProtocol, ATXNotificationSettingsReaderProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXNotificationInterruptionTuner : NSObject {
    id<ATXModeEntityScorerProtocol> *_modesModels;
    id<ATXNotificationSettingsReaderProtocol> *_notificationSettingsReader;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXNotificationManagementMAConstants *_constants;
    ATXInterruptionManager *_interruptionManager;
}




-(BOOL)validateNotificationUrgency:(id)arg0 ;
-(NSInteger)recommendedUrgencyForNotification:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)activeNotificationSuggestionsForMode:(NSUInteger)arg0 ;
-(id)activeNotificationSuggestionsForMode:(NSUInteger)arg0 candidateNotifications:(id)arg1 ;
-(id)dndModeUUID:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithModesModels:(id)arg0 notificationSettingsReader:(id)arg1 dataStore:(id)arg2 ;
-(id)initWithModesModels:(id)arg0 notificationSettingsReader:(id)arg1 dataStore:(id)arg2 modeConfigClient:(id)arg3 ;
-(id)initWithModesModels:(id)arg0 notificationSettingsReader:(id)arg1 dataStore:(id)arg2 modeConfigClient:(id)arg3 interruptionManager:(id)arg4 ;
-(id)initWithNotificationSettingsReader:(id)arg0 dataStore:(id)arg1 modeConfigClient:(id)arg2 interruptionManager:(id)arg3 ;
-(id)tuningSuggestionForNotification:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif