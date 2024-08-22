// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCQOSMONITOR_H
#define AVCQOSMONITOR_H

@class NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue, AVCQoSMonitorDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCQoSMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    id<AVCQoSMonitorDelegate> *_delegate;
    AVConferenceXPCClient *_connection;
    NSMutableDictionary *_reportingIntervals;
}


@property (weak, nonatomic) NSObject<AVCQoSMonitorDelegate> *delegate;
@property (readonly, nonatomic) NSArray *streamTokens; // ivar: _registeredStreamTokens


-(BOOL)generateInvalidStreamTokenWithError:(*id)arg0 ;
-(NSInteger)reportingIntervalForStreamToken:(NSInteger)arg0 ;
-(id)initWithStreamToken:(NSInteger)arg0 queue:(id)arg1 error:(*id)arg2 ;
-(id)registerStreamToken:(NSInteger)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)registerBlocksForNotifications;
-(void)requestQoSReport;
-(void)terminateConnection;


@end


#endif