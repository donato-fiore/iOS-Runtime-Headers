// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSNOTIFICATIONRECEIVER_H
#define MAPSSUGGESTIONSNOTIFICATIONRECEIVER_H


#import <Foundation/Foundation.h>


@interface MapsSuggestionsNotificationReceiver : NSObject {
    unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> _receiver;
}




-(id)initWithDarwinNotification:(char *)arg0 block:(id)arg1 ;
-(id)initWithDarwinNotification:(char *)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)dealloc;


@end


#endif