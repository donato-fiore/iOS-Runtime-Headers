// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSREMOTESERVICE_H
#define SIRIANALYTICSREMOTESERVICE_H

@protocol SiriAnalyticsService, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsXPCConnection.h"

@interface SiriAnalyticsRemoteService : NSObject <SiriAnalyticsService>

 {
    NSObject<OS_dispatch_queue> *_queue;
    SiriAnalyticsXPCConnection *_connection;
}




-(id)_packageMessageForXPC:(id)arg0 timestamp:(NSUInteger)arg1 isolatedStreamUUID:(id)arg2 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(void)barrierWithCompletion:(id)arg0 ;
-(void)emitMessage:(id)arg0 timestamp:(NSUInteger)arg1 isolatedStreamUUID:(id)arg2 completion:(id)arg3 ;
-(void)enqueueLargeMessageObjectFromPath:(id)arg0 dataUploadEvent:(id)arg1 completion:(id)arg2 ;
-(void)resolvePartialMessage:(id)arg0 timestamp:(NSUInteger)arg1 isolatedStreamUUID:(id)arg2 completion:(id)arg3 ;
-(void)sensitiveCondition:(int)arg0 endedAt:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sensitiveCondition:(int)arg0 startedAt:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif