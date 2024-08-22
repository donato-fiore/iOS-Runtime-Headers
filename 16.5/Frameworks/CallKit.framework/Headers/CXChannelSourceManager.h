// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCHANNELSOURCEMANAGER_H
#define CXCHANNELSOURCEMANAGER_H

@class NSArray, NSString, NSMutableDictionary;
@protocol CXChannelServiceServerDelegate, CXTransactionManagerDelegate, CXChannelSourceManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CXChannelServiceServer.h"
#import "CXTransactionManager.h"
#import "CXTransactionGroup.h"

@interface CXChannelSourceManager : NSObject <CXChannelServiceServerDelegate, CXTransactionManagerDelegate>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, nonatomic) NSArray *channelSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CXChannelSourceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *identifierToChannelSource; // ivar: _identifierToChannelSource
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) CXChannelServiceServer *serviceServer; // ivar: _serviceServer
@property (readonly) Class superclass;
@property (readonly, nonatomic) CXTransactionManager *transactionManager; // ivar: _transactionManager
@property (retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup; // ivar: _uncommittedTransactionGroup


-(id)channelSourceForIdentifier:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)addAction:(id)arg0 toUncommittedTransactionForChannelSource:(id)arg1 ;
-(void)addChannelSource:(id)arg0 ;
-(void)commitUncommittedTransactions;
-(void)failOutstandingActionsForChannelWithUUID:(id)arg0 ;
-(void)performDelegateCallback:(id)arg0 ;
-(void)removeChannelSource:(id)arg0 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 actionCompleted:(id)arg2 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 registeredWithConfiguration:(id)arg2 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 reportedAudioFinishedForChannelWithUUID:(id)arg2 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 reportedChannelWithUUID:(id)arg2 connectedAtDate:(id)arg3 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 reportedChannelWithUUID:(id)arg2 disconnectedAtDate:(id)arg3 disconnectedReason:(NSInteger)arg4 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 reportedChannelWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 reportedChannelWithUUID:(id)arg2 updated:(id)arg3 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 reportedIncomingTransmissionEndedForChannelWithUUID:(id)arg2 reason:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 reportedIncomingTransmissionStartedForChannelWithUUID:(id)arg2 update:(id)arg3 shouldReplaceOutgoingTransmission:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)serviceServer:(id)arg0 client:(id)arg1 requestedTransaction:(id)arg2 completionHandler:(id)arg3 ;
-(void)serviceServer:(id)arg0 didAddClient:(id)arg1 ;
-(void)serviceServer:(id)arg0 didRemoveClient:(id)arg1 ;
-(void)transactionManager:(id)arg0 actionTimedOut:(id)arg1 forCallSource:(id)arg2 ;
-(void)transactionManager:(id)arg0 transactionGroupCompleted:(id)arg1 ;


@end


#endif