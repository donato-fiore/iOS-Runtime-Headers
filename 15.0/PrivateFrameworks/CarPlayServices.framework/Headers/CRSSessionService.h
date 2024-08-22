// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSSESSIONSERVICE_H
#define CRSSESSIONSERVICE_H

@class NSHashTable, NSString, BSServiceConnectionListener;
@protocol CRSSessionClientToServerInterface, BSServiceConnectionListenerDelegate, OS_dispatch_queue, OS_os_transaction, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface CRSSessionService : NSObject <CRSSessionClientToServerInterface, BSServiceConnectionListenerDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (retain, nonatomic) NSHashTable *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_transaction> *idleExitTransaction; // ivar: _idleExitTransaction
@property (retain, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *watchdogMonitoringAssertion; // ivar: _watchdogMonitoringAssertion


-(id)init;
-(void)_connectionQueue_addConnection:(id)arg0 ;
-(void)_connectionQueue_removeConnection:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif