// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGNOTIFICATIONLISTENER_H
#define SGNOTIFICATIONLISTENER_H


#import <Foundation/Foundation.h>


@interface SGNotificationListener : NSObject {
    id *_callback;
    *__CFString _notification;
    _opaque_pthread_mutex_t _lock;
}




-(BOOL)unsubscribe;
-(id)initWithNotification:(struct __CFString *)arg0 callback:(id)arg1 ;
-(void)_notify;
-(void)dealloc;


@end


#endif