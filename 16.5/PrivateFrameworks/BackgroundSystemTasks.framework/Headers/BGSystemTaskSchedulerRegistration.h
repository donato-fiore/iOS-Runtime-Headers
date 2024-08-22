// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BGSYSTEMTASKSCHEDULERREGISTRATION_H
#define BGSYSTEMTASKSCHEDULERREGISTRATION_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BGSystemTaskRequest.h"

@interface BGSystemTaskSchedulerRegistration : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *descriptor; // ivar: _descriptor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *expirationQueue; // ivar: _expirationQueue
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *launchHandler; // ivar: _launchHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *launchQueue; // ivar: _launchQueue
@property (retain, nonatomic) BGSystemTaskRequest *taskRequest; // ivar: _taskRequest


-(id)initWithIdentifier:(id)arg0 launchQueue:(id)arg1 launchHandler:(id)arg2 ;


@end


#endif