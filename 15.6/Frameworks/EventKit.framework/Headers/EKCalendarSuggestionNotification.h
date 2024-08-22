// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARSUGGESTIONNOTIFICATION_H
#define EKCALENDARSUGGESTIONNOTIFICATION_H

@class SGEvent, NSString;


#import "EKCalendarResourceChangeNotification.h"

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification {
    SGEvent *_suggestedEvent;
    NSString *_originAppName;
}


@property (readonly, nonatomic) NSString *originAppName;
@property (readonly, nonatomic) SGEvent *suggestedEvent;


+(id)_queue;
-(Class)_SGSuggestionsServiceClass;
-(void)updateSuggestedEventWithEventStore:(id)arg0 ;


@end


#endif