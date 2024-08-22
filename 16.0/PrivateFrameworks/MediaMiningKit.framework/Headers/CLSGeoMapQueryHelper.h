// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSGEOMAPQUERYHELPER_H
#define CLSGEOMAPQUERYHELPER_H

@protocol CLSQueryProtocol, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CLSGeoServiceThread.h"

@interface CLSGeoMapQueryHelper : NSObject

@property (nonatomic) BOOL alreadyLaunched; // ivar: _alreadyLaunched
@property (readonly, copy, nonatomic) id *cancellerBlock; // ivar: _cancellerBlock
@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) BOOL didFinishQuery; // ivar: _didFinishQuery
@property (retain, nonatomic) CLSGeoServiceThread *geoServiceThread; // ivar: _geoServiceThread
@property (nonatomic) CGFloat internalProgressTimeInterval; // ivar: _internalProgressTimeInterval
@property (nonatomic) CGFloat nextRetryTime; // ivar: _nextRetryTime
@property (nonatomic) CGFloat numberOfRetries; // ivar: _numberOfRetries
@property (readonly, nonatomic) NSObject<CLSQueryProtocol> *query; // ivar: _query
@property (nonatomic) NSUInteger retryLevel; // ivar: _retryLevel
@property (nonatomic, getter=isSimulatingTimeout) BOOL simulatesTimeout; // ivar: _simulatesTimeout
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // ivar: _timerQueue


-(id)initWithQueryObject:(id)arg0 ;
-(void)_cancel;
-(void)_forwardToGeoThread;
-(void)_handleError:(id)arg0 ;
-(void)_handleQueryResultsForQuery:(id)arg0 error:(id)arg1 ;
-(void)_heartBeat;
-(void)_startQuery;
-(void)cancel;
-(void)dealloc;
// -(void)launchQueryWithCancellerBlock:(id)arg0 completionBlock:(unk)arg1  ;


@end


#endif