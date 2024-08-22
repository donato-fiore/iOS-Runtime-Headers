// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONDELIVERYSUGGESTIONMANAGER_H
#define ATXNOTIFICATIONDELIVERYSUGGESTIONMANAGER_H

@class ATXNotificationSuggestionBiomeStream, ATXNotificationManagementMAConstants, DNDStateService;

#import <Foundation/Foundation.h>

#import "ATXNotificationSmartPauseManager.h"
#import "ATXUrgencyTuningManager.h"
#import "ATXSendMessagesToDigestManager.h"
#import "ATXSendToDigestManager.h"
#import "ATXNotificationAndSuggestionDatastore.h"
#import "ATXNotificationsSuggestion.h"

@interface ATXNotificationDeliverySuggestionManager : NSObject {
    ATXNotificationSmartPauseManager *_smartPauseManager;
    ATXUrgencyTuningManager *_urgencyTuningManager;
    ATXSendMessagesToDigestManager *_sendMessagesToDigestManager;
    ATXSendToDigestManager *_sendToDigestManager;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationSuggestionBiomeStream *_biomeStream;
    ATXNotificationManagementMAConstants *_constants;
    DNDStateService *_dndStateService;
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
-(id)initWithRecorder:(id)arg0 ;
-(id)initWithRecorder:(id)arg0 dataStore:(id)arg1 suggestionBiomeStream:(id)arg2 ;
-(id)maxOneSuggestionFromSuggestions:(id)arg0 ;
-(void)activeSuggestionsWithReply:(id)arg0 ;
-(void)logSuggestionsToBiome:(id)arg0 ;
-(void)suggestionForNotification:(id)arg0 reply:(id)arg1 ;


@end


#endif