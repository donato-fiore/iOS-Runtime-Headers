// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXINTERNALNOTIFICATION_H
#define _ATXINTERNALNOTIFICATION_H

@class NSString;
@protocol _ATXInternalNotificationProtocol;

#import <Foundation/Foundation.h>


@interface _ATXInternalNotification : NSObject <_ATXInternalNotificationProtocol>

 {
    NSString *_notificationName;
    id *_token;
    _opaque_pthread_mutex_t _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)postData:(id)arg0 forNotificationNamed:(id)arg1 ;
-(id)init;
-(id)initWithNotificationName:(id)arg0 ;
-(void)dealloc;
-(void)registerForNotifications:(id)arg0 ;


@end


#endif