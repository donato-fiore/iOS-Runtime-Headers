// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMODERNREMOTEMESSAGETRANSPORT_H
#define HMDMODERNREMOTEMESSAGETRANSPORT_H

@class NSString, NSMutableOrderedSet;
@protocol HMDRemoteMessageTransportReachabilityDelegate, HMFMessageTransportDelegate, HMDDateProvider, HMDDeviceResidencyProvider, HMDTimerProvider, OS_dispatch_queue;


#import "HMDRemoteMessageTransport.h"
#import "HMDModernTransportMessageContextManager.h"

@interface HMDModernRemoteMessageTransport : HMDRemoteMessageTransport <HMDRemoteMessageTransportReachabilityDelegate, HMFMessageTransportDelegate>



@property (readonly, nonatomic) HMDModernTransportMessageContextManager *contextManager; // ivar: _contextManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HMDDateProvider> *idsDateProvider; // ivar: _idsDateProvider
@property (readonly, nonatomic) HMDRemoteMessageTransport *idsTransport; // ivar: _idsTransport
@property (readonly, nonatomic) NSMutableOrderedSet *messageIDDedupeBuffer; // ivar: _messageIDDedupeBuffer
@property (nonatomic, getter=isRapportLinkSlow) BOOL rapportLinkSlow; // ivar: _rapportLinkSlow
@property (readonly, nonatomic) HMDRemoteMessageTransport *rapportTransport; // ivar: _rapportTransport
@property (weak) NSObject<HMDDeviceResidencyProvider> *residencyProvider; // ivar: _residencyProvider
@property (getter=isStarted) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HMDDateProvider> *systemDateProvider; // ivar: _systemDateProvider
@property (readonly, nonatomic) NSObject<HMDTimerProvider> *timerProvider; // ivar: _timerProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)requestStartTimeHeaderKey;
+(id)timeToLiveHeaderKey;
-(BOOL)canSendMessage:(id)arg0 ;
-(BOOL)isSecure;
-(NSInteger)qualityOfService;
-(id)initWithAccountRegistry:(id)arg0 ;
-(id)initWithAccountRegistry:(id)arg0 rapportTransport:(id)arg1 idsTransport:(id)arg2 contextManager:(id)arg3 systemDateProvider:(id)arg4 idsDateProvider:(id)arg5 timerProvider:(id)arg6 ;
-(id)start;
-(void)messageTransport:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)transport:(id)arg0 idsIdentifier:(id)arg1 didAppearReachable:(BOOL)arg2 ;


@end


#endif