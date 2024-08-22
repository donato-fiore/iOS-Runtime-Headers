// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONDELIVERYSUGGESTIONMANAGER_H
#define ATXNOTIFICATIONDELIVERYSUGGESTIONMANAGER_H

@class ATXNotificationSuggestionBiomeStream, ATXNotificationManagementMAConstants, DNDStateService;

#import <Foundation/Foundation.h>

#import "ATXNotificationSmartPauseManager.h"
#import "ATXUrgencyTuningManager.h"
#import "ATXSendMessagesToDigestManager.h"
#import "ATXSendToDigestManager.h"
#import "ATXTurnOffNotificationsForAppSuggestionManager.h"
#import "ATXNotificationAndSuggestionDatastore.h"
#import "ATXChinSuggestionThrottlingManager.h"
#import "ATXNotificationsSuggestion.h"

@interface ATXNotificationDeliverySuggestionManager : NSObject {
    ATXNotificationSmartPauseManager *_smartPauseManager;
    ATXUrgencyTuningManager *_urgencyTuningManager;
    ATXSendMessagesToDigestManager *_sendMessagesToDigestManager;
    ATXSendToDigestManager *_sendToDigestManager;
    ATXTurnOffNotificationsForAppSuggestionManager *_turnOffNotificationsForAppManager;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationSuggestionBiomeStream *_biomeStream;
    ATXNotificationManagementMAConstants *_constants;
    DNDStateService *_dndStateService;
    ATXChinSuggestionThrottlingManager *_throttlingManager;
}


@property (readonly, nonatomic) ATXNotificationsSuggestion *promotingSuggester; // ivar: _promotingSuggester
@property (readonly, nonatomic) ATXNotificationsSuggestion *quietingSuggester; // ivar: _quietingSuggester
@property (readonly, nonatomic) ATXNotificationsSuggestion *rttOutcomeLogger; // ivar: _rttOutcomeLogger


-(BOOL)digestHasBeenShownEnoughTimes;
-(BOOL)shouldShowSuggestion:(id)arg0 withFeedback:(id)arg1 ;
-(NSUInteger)currentMode;
-(NSUInteger)getScoreForSuggestion:(id)arg0 ;
-(id)currentActiveSuggestions;
-(id)deduplicatedSuggestions:(id)arg0 ;
-(id)filteredSuggestionsBasedOnFeedback:(id)arg0 ;
-(id)init;
-(id)initWithDataStore:(id)arg0 suggestionBiomeStream:(id)arg1 ;
-(id)maxOneSuggestionFromSuggestions:(id)arg0 ;
-(void)_activeSuggestionsWithReply:(id)arg0 ;
-(void)activeSuggestionsWithReply:(id)arg0 ;
-(void)logSuggestionsToBiome:(id)arg0 ;
-(void)suggestionForNotification:(id)arg0 reply:(id)arg1 ;


@end


#endif