// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECCONSUMER_H
#define _DECCONSUMER_H

@class NSXPCConnection, PETScalarEventTracker;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DECResult.h"

@interface _DECConsumer : NSObject {
    id *_handler;
    _DECResult *_cachedResult;
    uint8_t _category;
    uint8_t _consumerType;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _startedMonitoring;
    NSUInteger _limit;
    PETScalarEventTracker *_consumerInitTracker;
}


@property NSUInteger category;
@property NSUInteger consumerType;


-(id)init;
-(id)initWithCategory:(NSUInteger)arg0 consumerType:(NSUInteger)arg1 ;
-(id)initWithCategory:(NSUInteger)arg0 consumerType:(NSUInteger)arg1 queue:(id)arg2 ;
-(void)_setupConnection;
-(void)dealloc;
-(void)fetchPredictionsWithLimit:(NSUInteger)arg0 criteria:(id)arg1 handler:(id)arg2 ;
-(void)fetchPredictionsWithLimit:(NSUInteger)arg0 criteria:(id)arg1 timeout:(NSUInteger)arg2 handler:(id)arg3 ;
-(void)fetchPredictionsWithLimit:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)fetchPredictionsWithLimit:(NSUInteger)arg0 providesFeedback:(BOOL)arg1 criteria:(id)arg2 handler:(id)arg3 ;
-(void)fetchPredictionsWithLimit:(NSUInteger)arg0 providesFeedback:(BOOL)arg1 criteria:(id)arg2 timeout:(NSUInteger)arg3 handler:(id)arg4 ;
-(void)fetchPredictionsWithLimit:(NSUInteger)arg0 providesFeedback:(BOOL)arg1 handler:(id)arg2 ;
-(void)handleDaemonStart;
-(void)invalidate;
-(void)receivePrediction:(id)arg0 consumer:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)startMonitoringForPredictionsWithLimit:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)stopMonitoringForPredictions;


@end


#endif