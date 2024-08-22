// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBNOTIFICATION_H
#define WEBNOTIFICATION_H


#import <Foundation/Foundation.h>

#import "WebNotificationPrivate.h"

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}




-(NSUInteger)notificationID;
-(id)body;
-(id)dir;
-(id)iconURL;
-(id)init;
-(id)lang;
-(id)origin;
-(id)tag;
-(id)title;
-(void)dealloc;
-(void)dispatchClickEvent;
-(void)dispatchCloseEvent;
-(void)dispatchErrorEvent;
-(void)dispatchShowEvent;
-(void)finalize;


@end


#endif