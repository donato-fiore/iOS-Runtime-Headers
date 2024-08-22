// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STYFRAMEWORKHELPER_H
#define STYFRAMEWORKHELPER_H

@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STYFrameworkHelper : NSObject

@property (retain) NSObject<OS_os_log> *logHandle; // ivar: _logHandle
@property (retain) NSObject<OS_dispatch_queue> *sharedConcurrentQueueAtBackground; // ivar: _sharedConcurrentQueueAtBackground
@property (retain) NSObject<OS_dispatch_queue> *sharedConcurrentQueueAtUtility; // ivar: _sharedConcurrentQueueAtUtility
@property (retain) NSObject<OS_dispatch_queue> *sharedSerialQueueAtUtility; // ivar: _sharedSerialQueueAtUtility


+(id)sharedHelper;
-(id)subsystemForSignposts;


@end


#endif