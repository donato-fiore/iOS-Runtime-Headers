// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONINTERRUPTIONTUNER_H
#define ATXNOTIFICATIONINTERRUPTIONTUNER_H

@class ATXDNDModeConfigurationClient, ATXNotificationManagementMAConstants;
@protocol ATXModeEntityScorerProtocol, ATXNotificationSettingsReaderProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXNotificationInterruptionTuner : NSObject {
    id<ATXModeEntityScorerProtocol> *_modesModels;
    id<ATXNotificationSettingsReaderProtocol> *_notificationSettingsReader;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXNotificationManagementMAConstants *_constants;
}




-(BOOL)isAppEligibleForAddToMode:(id)arg0 ;
-(BOOL)isContactSuggestionRelevantForNotification:(id)arg0 tuningSuggestionForContact:(id)arg1 mode:(NSUInteger)arg2 ;
-(NSInteger)recommendedUrgencyForNotification:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)activeNotificationSuggestionsForMode:(NSUInteger)arg0 ;
-(id)activeNotificationSuggestionsForMode:(NSUInteger)arg0 candidateNotifications:(id)arg1 ;
-(id)deliverySuggestionsForApps:(id)arg0 notifications:(id)arg1 notificationEntities:(id)arg2 mode:(NSUInteger)arg3 ;
-(id)deliverySuggestionsForContacts:(id)arg0 notifications:(id)arg1 notificationEntities:(id)arg2 mode:(NSUInteger)arg3 ;
-(id)dndModeUUID:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithModesModels:(id)arg0 notificationSettingsReader:(id)arg1 dataStore:(id)arg2 ;
-(id)tuningSuggestionForNotification:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif