// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCHANNELSERVICESERVER_H
#define CXCHANNELSERVICESERVER_H

@class NSArray, BSServiceConnection, NSString, NSMutableDictionary, BSServiceConnectionListener;
@protocol CXChannelServiceClientDelegate, BSServiceConnectionListenerDelegate, CXChannelServiceServerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CXChannelServiceDefinition.h"
#import "CXTransactionManager.h"
#import "CXTransactionGroup.h"

@interface CXChannelServiceServer : NSObject <CXChannelServiceClientDelegate, BSServiceConnectionListenerDelegate>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, nonatomic) NSArray *clients;
@property (readonly, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CXChannelServiceDefinition *definition; // ivar: _definition
@property (weak, nonatomic) NSObject<CXChannelServiceServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *identifierToClient; // ivar: _identifierToClient
@property (readonly, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) CXTransactionManager *transactionManager; // ivar: _transactionManager
@property (retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup; // ivar: _uncommittedTransactionGroup


-(id)clientForIdentifier:(id)arg0 ;
-(id)init;
-(void)activate;
-(void)addAction:(id)arg0 toUncommittedTransactionForServiceClient:(id)arg1 ;
-(void)addClient:(id)arg0 ;
-(void)commitUncommittedTransactions;
-(void)dealloc;
-(void)failOutstandingActionsForChannelWithUUID:(id)arg0 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)removeClient:(id)arg0 ;
-(void)serviceClient:(id)arg0 actionCompleted:(id)arg1 ;
-(void)serviceClient:(id)arg0 registeredWithConfiguration:(id)arg1 ;
-(void)serviceClient:(id)arg0 reportedAudioFinishedForChannelWithUUID:(id)arg1 ;
-(void)serviceClient:(id)arg0 reportedChannelWithUUID:(id)arg1 connectedAtDate:(id)arg2 ;
-(void)serviceClient:(id)arg0 reportedChannelWithUUID:(id)arg1 disconnectedAtDate:(id)arg2 disconnectedReason:(NSInteger)arg3 ;
-(void)serviceClient:(id)arg0 reportedChannelWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 ;
-(void)serviceClient:(id)arg0 reportedChannelWithUUID:(id)arg1 updated:(id)arg2 ;
-(void)serviceClient:(id)arg0 reportedIncomingTransmissionEndedForChannelWithUUID:(id)arg1 reason:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)serviceClient:(id)arg0 reportedIncomingTransmissionStartedForChannelWithUUID:(id)arg1 update:(id)arg2 shouldReplaceOutgoingTransmission:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)serviceClient:(id)arg0 requestedTransaction:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif