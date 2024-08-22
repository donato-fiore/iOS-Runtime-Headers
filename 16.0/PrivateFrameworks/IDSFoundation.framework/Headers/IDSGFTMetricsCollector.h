// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGFTMETRICSCOLLECTOR_H
#define IDSGFTMETRICSCOLLECTOR_H

@class NSMutableDictionary, NSSet, NSString;

#import <Foundation/Foundation.h>

#import "IDSGFTMetricsMembershipChange.h"
#import "IDSGFTMetricsAnonymizer.h"
#import "IDSGFTMetricsLocalJoin.h"

@interface IDSGFTMetricsCollector : NSObject {
    NSMutableDictionary *_referencePointsByType;
    NSMutableDictionary *_pushTokensByMKIs;
    NSMutableDictionary *_unknownMKMReceiptTimes;
    int _nextUniqueID;
    IDSGFTMetricsMembershipChange *_lastMembershipChange;
    NSMutableDictionary *_annotatorsByEventType;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _unknownMKMFlushLock;
    IDSGFTMetricsAnonymizer *_anonymizer;
}


@property (copy) NSSet *activeParticipantURIs; // ivar: _activeParticipantURIs
@property NSString *conversationID; // ivar: _conversationID
@property BOOL isInitiator; // ivar: _isInitiator
@property (readonly) IDSGFTMetricsLocalJoin *localJoin;


-(id)begin:(id)arg0 uniqueID:(id)arg1 ;
-(id)begin:(id)arg0 uniqueID:(id)arg1 withClass:(Class)arg2 ;
-(id)collectForTimeBase:(CGFloat)arg0 anonymize:(BOOL)arg1 ;
-(id)error:(id)arg0 ;
-(id)init;
-(id)joinCycleForToken:(id)arg0 ;
-(id)keyValueDelivery;
-(id)localDidJoin;
-(id)request:(id)arg0 ;
-(void)annotate:(id)arg0 block:(id)arg1 ;
-(void)annotate:(id)arg0 withEvent:(id)arg1 ;
-(void)avcReceiveMKMTime:(CGFloat)arg0 forMKI:(id)arg1 isGeneratedLocally:(BOOL)arg2 ;
-(void)clientChannelConnected;
-(void)connectQRServer;
-(void)didConnectUnderlyingE2ELink;
-(void)didConnectUnderlyingRelayLink;
-(void)didCreateMKM:(id)arg0 ;
-(void)didMitigateCollision:(BOOL)arg0 ;
-(void)didSendJoin;
-(void)firstIncomingPacketTime:(CGFloat)arg0 forMKI:(id)arg1 ;
-(void)firstOutgoingPacketTime:(CGFloat)arg0 forMKI:(id)arg1 ;
-(void)flushPendingNowKnownMKMs;
-(void)globalLinkStart;
-(void)mapMKI:(id)arg0 toPushToken:(id)arg1 ;
-(void)membershipChange;
-(void)quicAllocbindRequest;
-(void)quicAllocbindResponse;
-(void)receivedKMOverPushFromToken:(id)arg0 ;
-(void)receivedKMOverPushViaCacheForToken:(id)arg0 ;
-(void)receivedKMOverQRFromToken:(id)arg0 ;
-(void)receivedKMOverQUICFromToken:(id)arg0 ;
-(void)receivedUnknownKMOverPushViaCache:(id)arg0 ;
-(void)remoteDidBecomeActive:(id)arg0 ;
-(void)remoteDidJoin:(id)arg0 ;
-(void)sendAllocationRequest;
-(void)sendMKMToAVC:(id)arg0 isGeneratedLocally:(BOOL)arg1 ;
-(void)stunAllocbindRequest;
-(void)stunAllocbindResponse;
-(void)tcpAllocbindRequest;
-(void)tcpAllocbindResponse;
-(void)willSendAllocbindRequest;
-(void)willSendJoin;


@end


#endif