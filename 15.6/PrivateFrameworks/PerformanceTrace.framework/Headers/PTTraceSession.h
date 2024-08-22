// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTTRACESESSION_H
#define PTTRACESESSION_H

@class NSXPCConnection;
@protocol PTTraceSessionDelegate;

#import <Foundation/Foundation.h>

#import "PTTraceConfig.h"

@interface PTTraceSession : NSObject

@property (retain, nonatomic) PTTraceConfig *config; // ivar: _config
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<PTTraceSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid


+(id)initWithConfig:(id)arg0 ;
-(id)_getRemoteObjectProxy;
-(id)init;
-(void)_didPingService:(id)arg0 ;
-(void)_initConnection;
-(void)_invalidateSession;
-(void)_ping:(id)arg0 ;
-(void)performanceTraceDidComplete:(id)arg0 withToken:(id)arg1 withError:(id)arg2 ;
-(void)performanceTraceDidStart:(id)arg0 ;
-(void)performanceTraceDidStop:(id)arg0 ;
-(void)startPerformanceTrace;
-(void)stopPerformanceTrace;


@end


#endif