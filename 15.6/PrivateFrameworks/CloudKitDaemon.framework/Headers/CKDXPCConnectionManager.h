// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDXPCCONNECTIONMANAGER_H
#define CKDXPCCONNECTIONMANAGER_H

@class NSOperationQueue, NSMutableArray, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CKDXPCConnectionManager : NSObject

@property (retain, nonatomic) NSOperationQueue *clientConnectionQueue; // ivar: _clientConnectionQueue
@property (retain, nonatomic) NSMutableArray *clientConnections; // ivar: _clientConnections
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sighandlerSource; // ivar: _sighandlerSource
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportCallbackQueue; // ivar: _statusReportCallbackQueue
@property (retain, nonatomic) NSMutableArray *statusReportCallbacks; // ivar: _statusReportCallbacks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportQueue; // ivar: _statusReportQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *statusReportRequestSource; // ivar: _statusReportRequestSource
@property (nonatomic) int tccToken; // ivar: _tccToken
@property (retain, nonatomic) NSMutableArray *tearDownOperations; // ivar: _tearDownOperations
@property (retain, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


+(id)sharedConnectionManager;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)CKStatusReportArray;
-(id)init;
-(void)_dumpStatusReportArrayToOsTrace:(id)arg0 ;
-(void)_dumpStatusReportToFileHandle:(id)arg0 ;
-(void)dealloc;
-(void)dumpStatusReportToFileHandle:(id)arg0 ;
-(void)enumerateConnections:(id)arg0 ;
-(void)resume;
-(void)statusReportWithCompletionHandler:(id)arg0 ;


@end


#endif