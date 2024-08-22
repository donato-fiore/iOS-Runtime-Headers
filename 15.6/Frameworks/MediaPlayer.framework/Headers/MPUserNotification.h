// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPUSERNOTIFICATION_H
#define MPUSERNOTIFICATION_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPUserNotification : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackInvocationQueue;
    id *_willShowNotificationHandler;
    id *strongSelf;
    BOOL _isShowing;
    *__CFRunLoopSource _runLoopSource;
    NSMutableArray *_showingCompletionHandlers;
}


@property (readonly, nonatomic) *__CFUserNotification cfUserNotification; // ivar: _cfUserNotification
@property (copy, nonatomic) id *willShowNotificationHandler;


+(id)_userNotificationConversionAccessQueue;
+(id)_userNotificationForCFUserNotification:(struct __CFUserNotification *)arg0 ;
+(void)_setUserNotification:(id)arg0 forCFUserNotification:(struct __CFUserNotification *)arg1 ;
-(id)init;
-(id)initWithCFUserNotification:(struct __CFUserNotification *)arg0 ;
-(void)_cancelSynchronously:(BOOL)arg0 ;
-(void)_didReceiveResponseWithFlags:(NSUInteger)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)showWithCompletionHandler:(id)arg0 ;


@end


#endif