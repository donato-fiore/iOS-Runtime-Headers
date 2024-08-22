// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXPROVIDER_H
#define CXPROVIDER_H

@class NSString, NSMutableArray, NSArray;
@protocol CXActionDelegate, CXProviderVendorProtocol, OS_dispatch_queue, CXProviderDelegate, CXProviderHostProtocol, CXProviderDelegatePrivate;

#import <Foundation/Foundation.h>

#import "CXProviderConfiguration.h"

@interface CXProvider : NSObject <CXActionDelegate, CXProviderVendorProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (copy, nonatomic) CXProviderConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CXProviderHostProtocol> *hostProtocolDelegate;
@property (retain, nonatomic) NSMutableArray *mutablePendingTransactions; // ivar: _mutablePendingTransactions
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly, nonatomic) NSObject<CXProviderDelegatePrivate> *privateDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BOOL requiresProxyingAVAudioSessionState;
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)reportNewIncomingVoIPPushPayload:(id)arg0 completion:(id)arg1 ;
-(id)_pendingActionWithUUID:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)pendingCallActionsOfClass:(Class)arg0 withCallUUID:(id)arg1 ;
-(void)_performAction:(id)arg0 ;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)_updatePendingTransactions;
-(void)actionCompleted:(id)arg0 ;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)handleAudioSessionActivationStateChangedTo:(BOOL)arg0 ;
-(void)handleConnectionInterruption;
-(void)handleMediaServicesWereResetNotification:(id)arg0 ;
-(void)invalidate;
-(void)performCompletionBlock:(id)arg0 ;
-(void)performDelegateCallback:(id)arg0 ;
-(void)registerCurrentConfiguration;
-(void)reportAudioFinishedForCallWithUUID:(id)arg0 ;
-(void)reportCallWithUUID:(id)arg0 changedFrequencyData:(id)arg1 forDirection:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 changedMeterLevel:(float)arg1 forDirection:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 crossDeviceIdentifier:(id)arg1 changedBytesOfDataUsed:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 endedAtDate:(id)arg1 privateReason:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 endedAtDate:(id)arg1 privateReason:(NSInteger)arg2 failureContext:(id)arg3 ;
-(void)reportCallWithUUID:(id)arg0 endedAtDate:(id)arg1 reason:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 failedAtDate:(id)arg1 withContext:(id)arg2 ;
-(void)reportCallWithUUID:(id)arg0 updated:(id)arg1 ;
-(void)reportNewIncomingCallWithUUID:(id)arg0 update:(id)arg1 completion:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 connectedAtDate:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 sentInvitationAtDate:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 startedConnectingAtDate:(id)arg1 ;
-(void)requestTransaction:(id)arg0 completion:(id)arg1 ;
-(void)sendProviderDidBegin;


@end


#endif