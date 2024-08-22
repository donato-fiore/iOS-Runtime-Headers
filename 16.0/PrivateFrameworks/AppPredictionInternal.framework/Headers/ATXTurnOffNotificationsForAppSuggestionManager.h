// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTURNOFFNOTIFICATIONSFORAPPSUGGESTIONMANAGER_H
#define ATXTURNOFFNOTIFICATIONSFORAPPSUGGESTIONMANAGER_H


#import <Foundation/Foundation.h>

#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXTurnOffNotificationsForAppSuggestionManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
}




-(id)activeSuggestions;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;


@end


#endif