// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSNOTIFICATIONSENDER_H
#define MAPSSUGGESTIONSNOTIFICATIONSENDER_H


#import <Foundation/Foundation.h>


@interface MapsSuggestionsNotificationSender : NSObject {
    unique_ptr<MSg::NotificationSender, std::default_delete<MSg::NotificationSender>> _sender;
}




-(id)initWithDarwinNotification:(char *)arg0 ;
-(void)notify;
-(void)notifyWithPayloadString:(id)arg0 ;
-(void)notifyWithState:(NSUInteger)arg0 ;


@end


#endif