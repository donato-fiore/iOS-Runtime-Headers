// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYBACKLINKMONITORSERVICE_H
#define SYBACKLINKMONITORSERVICE_H

@class NSMutableDictionary, NSXPCListener, NSMutableOrderedSet, NSString;
@protocol NSXPCListenerDelegate, SYBacklinkMonitorOperationDelegate, SYBacklinkMonitorServiceHandleDelegate, OS_os_transaction, OS_dispatch_queue, SYBacklinkMonitorServiceTestingDelegate;

#import <Foundation/Foundation.h>

#import "SYBacklinkMonitorOperation.h"
#import "SYNotesActivationObserver.h"

@interface SYBacklinkMonitorService : NSObject <NSXPCListenerDelegate, SYBacklinkMonitorOperationDelegate, SYBacklinkMonitorServiceHandleDelegate>



@property (retain, nonatomic) SYBacklinkMonitorOperation *_activeOperation; // ivar: __activeOperation
@property (readonly, nonatomic) BOOL _forTesting; // ivar: __forTesting
@property (retain, nonatomic) NSMutableDictionary *_handles; // ivar: __handles
@property (retain, nonatomic) NSObject<OS_os_transaction> *_keepAliveTransaction; // ivar: __keepAliveTransaction
@property (retain, nonatomic) NSXPCListener *_listener; // ivar: __listener
@property (retain, nonatomic) SYBacklinkMonitorOperation *_longerLivedOperation; // ivar: __longerLivedOperation
@property (retain, nonatomic) SYNotesActivationObserver *_notesObserver; // ivar: __notesObserver
@property (retain, nonatomic) NSMutableOrderedSet *_pendingOperations; // ivar: __pendingOperations
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue; // ivar: __serviceQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasKeepAliveTransaction;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SYBacklinkMonitorServiceTestingDelegate> *testingDelegate; // ivar: _testingDelegate


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initForTesting:(BOOL)arg0 ;
-(void)_createAndScheduleOperationForHandle:(id)arg0 withUserActivity:(id)arg1 context:(id)arg2 ;
-(void)_evaluateAndBeginPendingOperations;
-(void)_notesActivationDidChange:(BOOL)arg0 ;
-(void)_updateKeepAliveTransaction;
-(void)backlinkMonitorOperation:(id)arg0 shouldUpdateFilterCache:(id)arg1 ;
-(void)backlinkMonitorOperationDidFinish:(id)arg0 ;
-(void)beginListeningToConnections;
-(void)dealloc;
-(void)handleDidDisconnect:(id)arg0 ;
-(void)scheduleOperationForHandle:(id)arg0 withUserActivity:(id)arg1 context:(id)arg2 ;


@end


#endif