// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFILEACCESSPROCESSMANAGER_H
#define NSFILEACCESSPROCESSMANAGER_H

@class NSArray, BKSApplicationStateMonitor;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NSFileAccessProcessManager : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    id *_suspensionHandler;
    NSArray *_urls;
    BKSApplicationStateMonitor *_monitor;
    id *_assertionToken;
    int _pendingMessageCount;
}


@property (copy) NSArray *URLs;
@property (copy) id *suspensionHandler;


+(BOOL)needToManageConnection:(id)arg0 forURLs:(id)arg1 ;
-(id)initWithClient:(id)arg0 queue:(id)arg1 ;
-(void)_ensureMonitor;
-(void)allowSuspension;
-(void)dealloc;
-(void)invalidate;
-(void)killProcessWithMessage:(id)arg0 ;
-(void)preventSuspensionWithActivityName:(id)arg0 ;
-(void)safelySendMessageWithReplyUsingBlock:(id)arg0 ;


@end


#endif