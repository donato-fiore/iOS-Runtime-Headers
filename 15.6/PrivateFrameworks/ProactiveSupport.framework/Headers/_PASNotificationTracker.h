// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASNOTIFICATIONTRACKER_H
#define _PASNOTIFICATIONTRACKER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _PASNotificationTracker : NSObject {
    _opaque_pthread_mutex_t _lock;
    NSUInteger _nextNotificationToken;
    NSMutableDictionary *_observers;
}




-(BOOL)_deregisterHandlerWithToken:(id)arg0 waitOnPending:(BOOL)arg1 ;
-(BOOL)deregisterHandlerAsyncWithToken:(id)arg0 ;
-(BOOL)deregisterHandlerWithToken:(id)arg0 ;
-(id)init;
-(id)registerWithQueue:(id)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)issueNotificationAsyncWithContext:(id)arg0 ;
-(void)issueNotificationAsyncWithContext:(id)arg0 callback:(id)arg1 ;


@end


#endif