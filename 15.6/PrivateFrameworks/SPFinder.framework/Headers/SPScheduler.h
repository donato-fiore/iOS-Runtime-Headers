// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPSCHEDULER_H
#define SPSCHEDULER_H

@class FMXPCServiceDescription, FMXPCSession;
@protocol SPSchedulerXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPScheduler : NSObject

@property (retain, nonatomic) NSObject<SPSchedulerXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session


-(id)init;
-(id)remoteInterface;
-(void)dealloc;
-(void)publishImmediatelyWithCompletion:(id)arg0 ;
-(void)schedulePublishWakeWithInformation:(id)arg0 completion:(id)arg1 ;


@end


#endif