// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMESSAGINGSERVICE_H
#define COMESSAGINGSERVICE_H

@class NSMutableDictionary, NSString;
@protocol COMessagingAddOnDelegate, COMessageChannelServiceInterface;


#import "COService.h"
#import "_COMessagingServiceMeter.h"

@interface COMessagingService : COService <COMessagingAddOnDelegate, COMessageChannelServiceInterface>



@property (retain, nonatomic) NSMutableDictionary *connectedClients; // ivar: _connectedClients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _COMessagingServiceMeter *meter; // ivar: _meter
@property (retain, nonatomic) NSMutableDictionary *outstandingActivateCompletionHandlers; // ivar: _outstandingActivateCompletionHandlers
@property (retain, nonatomic) NSMutableDictionary *requestHandlers; // ivar: _requestHandlers
@property (readonly) Class superclass;


+(id)serviceWithDelegate:(id)arg0 ;
-(BOOL)_canRequestCreationOfCluster:(id)arg0 ;
-(id)initWithListenerProvider:(id)arg0 addOnProvider:(id)arg1 delegate:(id)arg2 ;
-(void)_addOnAdded:(id)arg0 ;
-(void)_addOnRemoved:(id)arg0 ;
-(void)_clientLost:(id)arg0 ;
-(void)_completeActivationForClient:(id)arg0 ;
-(void)_configureServiceInterfacesOnConnection:(id)arg0 ;
-(void)activateMessageChannelForTopic:(id)arg0 cluster:(id)arg1 handlers:(id)arg2 withCompletion:(id)arg3 ;
-(void)addOn:(id)arg0 receivedRequest:(id)arg1 callback:(id)arg2 ;
-(void)sendRequestWithPayload:(id)arg0 payloadType:(id)arg1 requestType:(NSInteger)arg2 requestID:(unsigned int)arg3 members:(id)arg4 ;
-(void)sessionEndedForSubTopic:(id)arg0 ;
-(void)sessionStartedForSubTopic:(id)arg0 withMember:(id)arg1 produced:(BOOL)arg2 ;


@end


#endif