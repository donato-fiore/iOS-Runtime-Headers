// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPNOTIFICATIONMANAGERGUARDEDDATA_H
#define PPNOTIFICATIONMANAGERGUARDEDDATA_H

@class CNContactStore, EKEventStore, EKCalendarVisibilityManager;
@protocol NSObject, SGSuggestionsServiceContactsProtocol;

#import <Foundation/Foundation.h>

#import "PPNotificationHandler.h"

@interface PPNotificationManagerGuardedData : NSObject {
    PPNotificationHandler *_contactsHandler;
    id<NSObject> *_contactsToken;
    CNContactStore *_cnStore;
    PPNotificationHandler *_meCardHandler;
    id<NSObject> *_meCardToken;
    id<NSObject> *_meCardDonationToken;
    PPNotificationHandler *_portraitChangeHandler;
    int _portraitChangeToken;
    PPNotificationHandler *_portraitInvalidationHandler;
    int _portraitInvalidationToken;
    PPNotificationHandler *_eventKitHandler;
    id<NSObject> *_eventKitToken;
    EKEventStore *_ekStore;
    NSInteger _eventKitChangeTrackingToken;
    PPNotificationHandler *_calendarHandler;
    EKCalendarVisibilityManager *_calendarVisibilityManager;
    id<SGSuggestionsServiceContactsProtocol> *_suggestionsService;
    PPNotificationHandler *_suggestionsHandler;
    id *_suggestionsToken;
}




-(id)description;


@end


#endif