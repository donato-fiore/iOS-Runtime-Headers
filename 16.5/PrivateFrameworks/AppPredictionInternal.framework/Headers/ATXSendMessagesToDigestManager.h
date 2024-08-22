// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSENDMESSAGESTODIGESTMANAGER_H
#define ATXSENDMESSAGESTODIGESTMANAGER_H

@class UNNotificationSettingsCenter, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXSendMessagesToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    id<ATXNotificationSettingsReaderProtocol> *_notificationSettingsReader;
    UNNotificationSettingsCenter *_notificationCenter;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}




-(BOOL)bundleIdIsEligibleForSendMessagesToDigestSuggestions:(id)arg0 ;
-(id)activeSuggestions;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(id)sendMessagesToDigestSuggestion:(id)arg0 uuid:(id)arg1 engagementStatus:(id)arg2 ;


@end


#endif