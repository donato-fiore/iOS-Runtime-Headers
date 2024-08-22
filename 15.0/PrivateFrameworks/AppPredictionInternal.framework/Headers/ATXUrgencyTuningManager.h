// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXURGENCYTUNINGMANAGER_H
#define ATXURGENCYTUNINGMANAGER_H

@class ATXNotificationManagementMAConstants;

#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXUrgencyTuningManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}




-(id)activeSuggestions;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(id)urgencyTuningSuggestion:(id)arg0 uuid:(id)arg1 engagementStatus:(id)arg2 ;


@end


#endif