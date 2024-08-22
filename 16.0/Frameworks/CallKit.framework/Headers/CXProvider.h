// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXPROVIDER_H
#define CXPROVIDER_H

@class NSString, NSArray;
@protocol CXActionDelegateInternal, OS_dispatch_queue, CXAbstractProviderDelegate><CXProviderDelegate, CXProviderDelegatePrivate;

#import <Foundation/Foundation.h>

#import "CXAbstractProvider.h"
#import "CXProviderConfiguration.h"

@interface CXProvider : NSObject <CXActionDelegateInternal>



@property (readonly, nonatomic) CXAbstractProvider *abstractProvider; // ivar: _abstractProvider
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (copy, nonatomic) CXProviderConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXAbstractProviderDelegate><CXProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly, nonatomic) NSObject<CXProviderDelegatePrivate> *privateDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)reportNewIncomingVoIPPushPayload:(id)arg0 completion:(id)arg1 ;
-(BOOL)requiresProxyingAVAudioSessionState;
-(id)callProviderHostDelegate;
-(id)hostProtocolDelegate;
-(id)initWithConfiguration:(id)arg0 ;
-(id)pendingCallActionsOfClass:(Class)arg0 withCallUUID:(id)arg1 ;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)handleAudioSessionActivationStateChangedTo:(id)arg0 ;
-(void)handleMediaServicesWereResetNotification:(id)arg0 ;
-(void)invalidate;
-(void)performAction:(id)arg0 ;
-(void)performCompletionBlock:(id)arg0 ;
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
-(void)reportNewOutgoingCallWithUUID:(id)arg0 update:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 connectedAtDate:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 sentInvitationAtDate:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 startedConnectingAtDate:(id)arg1 ;
-(void)requestTransaction:(id)arg0 completion:(id)arg1 ;


@end


#endif