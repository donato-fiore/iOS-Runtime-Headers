// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCALLSOURCEMANAGER_H
#define CXCALLSOURCEMANAGER_H

@class NSArray, NSString, NSMutableDictionary, NSXPCListener;
@protocol NSXPCListenerDelegate, CXCallSourceDelegate, CXTransactionManagerDelegate, CXCallSourceManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CXTransactionManager.h"
#import "CXTransactionGroup.h"

@interface CXCallSourceManager : NSObject <NSXPCListenerDelegate, CXCallSourceDelegate, CXTransactionManagerDelegate>



@property (readonly, nonatomic) NSArray *callSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CXCallSourceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *identifierToCallSource; // ivar: _identifierToCallSource
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) CXTransactionManager *transactionManager; // ivar: _transactionManager
@property (retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup; // ivar: _uncommittedTransactionGroup
@property (readonly, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)callSourceWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)addAction:(id)arg0 toUncommittedTransactionForCallSource:(id)arg1 ;
-(void)addCallSource:(id)arg0 ;
-(void)callSource:(id)arg0 actionCompleted:(id)arg1 ;
-(void)callSource:(id)arg0 registeredWithConfiguration:(id)arg1 ;
-(void)callSource:(id)arg0 reportedAudioFinishedForCallWithUUID:(id)arg1 ;
-(void)callSource:(id)arg0 reportedCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(NSInteger)arg3 ;
-(void)callSource:(id)arg0 reportedCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(NSInteger)arg3 ;
-(void)callSource:(id)arg0 reportedCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(NSInteger)arg3 ;
-(void)callSource:(id)arg0 reportedCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(NSInteger)arg3 failureContext:(id)arg4 ;
-(void)callSource:(id)arg0 reportedCallWithUUID:(id)arg1 updated:(id)arg2 ;
-(void)callSource:(id)arg0 reportedNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(id)arg3 ;
-(void)callSource:(id)arg0 reportedNewOutgoingCallWithUUID:(id)arg1 update:(id)arg2 ;
-(void)callSource:(id)arg0 reportedOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 ;
-(void)callSource:(id)arg0 reportedOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 ;
-(void)callSource:(id)arg0 reportedOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 ;
-(void)callSource:(id)arg0 requestedTransaction:(id)arg1 completion:(id)arg2 ;
-(void)callSourceConnectionEnded:(id)arg0 ;
-(void)callSourceConnectionStarted:(id)arg0 ;
-(void)callSourceInvalidated:(id)arg0 ;
-(void)commitUncommittedTransactions;
-(void)failOutstandingActionsForCallWithUUID:(id)arg0 ;
-(void)performDelegateCallback:(id)arg0 ;
-(void)removeCallSource:(id)arg0 ;
-(void)transactionManager:(id)arg0 actionTimedOut:(id)arg1 forCallSource:(id)arg2 ;
-(void)transactionManager:(id)arg0 transactionGroupCompleted:(id)arg1 ;


@end


#endif