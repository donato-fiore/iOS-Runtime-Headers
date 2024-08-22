// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSQUERYHANDLER_H
#define CLSQUERYHANDLER_H

@protocol CLSQueryPerformerProtocol, OS_dispatch_source, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "CLSGeoServiceThread.h"

@interface CLSQueryHandler : NSObject {
    id<CLSQueryPerformerProtocol> *_query;
    CGFloat _internalProgressTimeInterval;
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _retryLevel;
    CGFloat _nextRetryTime;
    BOOL _alreadyLaunched;
    BOOL _didQueryFinish;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_os_log> *_loggingConnection;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) CLSGeoServiceThread *geoServiceThread; // ivar: _geoServiceThread
@property (nonatomic) NSUInteger numberOfRetries; // ivar: _numberOfRetries
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (nonatomic, getter=isSimulatingTimeout) BOOL simulatesTimeout; // ivar: _simulatesTimeout
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


-(NSUInteger)_cacheMapItems:(id)arg0 ;
-(id)initWithQueryPerformer:(id)arg0 geoServiceThread:(id)arg1 loggingConnection:(id)arg2 ;
-(void)_cancel;
-(void)_forwardToGeoThread;
-(void)_handleError:(id)arg0 numberOfItems:(NSUInteger)arg1 ;
-(void)_handleQueryResultsForQuery:(id)arg0 items:(id)arg1 error:(id)arg2 ;
-(void)_heartBeat;
-(void)_startQuery;
-(void)cacheItems;
-(void)cancel;


@end


#endif