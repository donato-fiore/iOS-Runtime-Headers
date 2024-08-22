// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODEAUTOMATIONSUGGESTIONTESTER_H
#define ATXMODEAUTOMATIONSUGGESTIONTESTER_H

@class UNUserNotificationCenter, ATXActivitySuggestionClient, CHSTimelineController, NSString;
@protocol UNUserNotificationCenterDelegate, ATXActivitySuggestionClientObserver;

#import <Foundation/Foundation.h>


@interface ATXModeAutomationSuggestionTester : NSObject <UNUserNotificationCenterDelegate, ATXActivitySuggestionClientObserver>

 {
    UNUserNotificationCenter *_notificationCenter;
    ATXActivitySuggestionClient *_suggestionClient;
    CHSTimelineController *_modeWidgetTimelineController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_stringForActivityType:(NSUInteger)arg0 ;
-(id)init;
-(void)_sendNotificationWithContent:(id)arg0 ;
-(void)activitySuggestionClient:(id)arg0 didSuggestActivity:(id)arg1 ;
-(void)activitySuggestionClient:(id)arg0 didSuggestConfiguredActivity:(id)arg1 ;
-(void)activitySuggestionClient:(id)arg0 didSuggestSettingUpActivity:(id)arg1 ;
-(void)dealloc;


@end


#endif