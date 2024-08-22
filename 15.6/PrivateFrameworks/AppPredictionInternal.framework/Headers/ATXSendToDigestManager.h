// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSENDTODIGESTMANAGER_H
#define ATXSENDTODIGESTMANAGER_H

@class ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXSendToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    id<ATXNotificationSettingsReaderProtocol> *_notificationSettingsReader;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}




-(BOOL)bundleIdEligibleForSendToDigestSuggestions:(id)arg0 ;
-(id)_proposeSendToDigestForNotification:(id)arg0 bundleData:(id)arg1 ;
-(id)activeSuggestions;
-(id)currentSuggestionsGivenCandiateNotifications:(id)arg0 ;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;


@end


#endif