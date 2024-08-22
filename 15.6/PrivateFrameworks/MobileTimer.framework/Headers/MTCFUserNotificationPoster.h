// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTCFUSERNOTIFICATIONPOSTER_H
#define MTCFUSERNOTIFICATIONPOSTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MTCFUserNotificationPoster : NSObject

@property (retain, nonatomic) NSMutableDictionary *notifications; // ivar: _notifications


+(id)sharedInstance;
+(void)cancelNotificationsWithIdentifiers:(id)arg0 ;
+(void)postNotificationWithIdentifier:(id)arg0 title:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 bypassDND:(BOOL)arg5 handler:(id)arg6 ;
-(id)init;


@end


#endif