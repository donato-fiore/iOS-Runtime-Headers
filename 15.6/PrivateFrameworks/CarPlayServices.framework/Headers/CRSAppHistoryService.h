// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSAPPHISTORYSERVICE_H
#define CRSAPPHISTORYSERVICE_H

@class NSHashTable, NSString, BSServiceConnectionListener;
@protocol BSServiceConnectionListenerDelegate, CRSAppHistoryClientToServerInterface, BSInvalidatable, OS_dispatch_queue, CRSAppHistoryServiceDelegate;

#import <Foundation/Foundation.h>


@interface CRSAppHistoryService : NSObject <BSServiceConnectionListenerDelegate, CRSAppHistoryClientToServerInterface, BSInvalidatable>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (retain, nonatomic) NSHashTable *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRSAppHistoryServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)_connectionQueue_addConnection:(id)arg0 ;
-(void)_connectionQueue_removeConnection:(id)arg0 ;
-(void)fetchSessionEchoContextStatesWithCompletion:(id)arg0 ;
-(void)fetchSessionFeatureKeysWithCompletion:(id)arg0 ;
-(void)fetchSessionUIContextStatesWithCompletion:(id)arg0 ;
-(void)fetchUIContextStatesWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)setSessionFeatureKeys:(id)arg0 completion:(id)arg1 ;


@end


#endif