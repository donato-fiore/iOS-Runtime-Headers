// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSMARTPAUSEMANAGER_H
#define ATXNOTIFICATIONSMARTPAUSEMANAGER_H

@class NSArray, NSDate, ATXNotificationManagementMAConstants;

#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXNotificationSmartPauseManager : NSObject {
    NSArray *_currentSuggestions;
    NSDate *_lastUpdatedDate;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}




-(BOOL)needRefresh;
-(id)_dictionaryForQueryResults:(id)arg0 ;
-(id)_proposeSmartPauseForNotification:(id)arg0 threadData:(id)arg1 bundleData:(id)arg2 ;
-(id)_queryResultIdentifierForBundleId:(id)arg0 threadId:(id)arg1 ;
-(id)activeSuggestions;
-(id)currentSuggestionsGivenCandiateNotifications:(id)arg0 ;
-(id)init;
-(id)initWithNotificationAndSuggestionDataStore:(id)arg0 ;
-(id)smartPauseForNotification:(id)arg0 ;
-(void)refreshSuggestions;


@end


#endif