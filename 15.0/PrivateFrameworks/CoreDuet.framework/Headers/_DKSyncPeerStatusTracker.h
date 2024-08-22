// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNCPEERSTATUSTRACKER_H
#define _DKSYNCPEERSTATUSTRACKER_H

@class DKSyncContextObject, NSMutableDictionary, NSMutableArray, NSDate;


#import "_DKSyncPeer.h"
#import "_DKKnowledgeStorage.h"

@interface _DKSyncPeerStatusTracker : DKSyncContextObject {
    NSMutableDictionary *_peerInfos;
    _DKSyncPeer *_pseudoPeer;
    NSMutableArray *_observers;
    NSMutableDictionary *_lastSuccessfulActivityDates;
    NSDate *_firstForeignPeersCountDate;
}


@property (weak, nonatomic) _DKKnowledgeStorage *storage; // ivar: _storage


+(id)peerStatusTrackerWithContext:(id)arg0 ;
+(id)sharedInstance;
+(id)stringForTransports:(NSInteger)arg0 ;
-(BOOL)isSingleDevice;
-(NSInteger)activeTransportsForPeer:(id)arg0 ;
-(NSUInteger)foreignPeersCount;
-(id)addStatusChangeObserverWithBlock:(id)arg0 ;
-(id)allPeers;
-(id)description;
-(id)existingPeerWithIDSDeviceIdentifier:(id)arg0 ;
-(id)existingPeerWithSourceDeviceID:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)lastSuccessfulActivityDateOnTransport:(NSInteger)arg0 forPeer:(id)arg1 ;
-(id)peerWithCompanionLinkDevice:(id)arg0 ;
-(id)peerWithIDSDeviceIdentifier:(id)arg0 ;
-(id)peerWithZoneName:(id)arg0 sourceDeviceID:(id)arg1 ;
-(id)peersWithActiveTransports:(NSInteger)arg0 ;
-(id)peersWithAnyActiveTransports;
-(id)pseudoPeerForSyncTransportCloudUp;
-(void)addActiveTransports:(NSInteger)arg0 toPeer:(id)arg1 ;
-(void)debugLogPeers;
-(void)removeActiveTransports:(NSInteger)arg0 fromPeer:(id)arg1 ;
-(void)removePeer:(id)arg0 ;
-(void)removeStatusChangeObserver:(id)arg0 ;
-(void)setLastSeenDate:(id)arg0 onPeer:(id)arg1 ;
-(void)setLastSuccessfulActivityDate:(id)arg0 onTransport:(NSInteger)arg1 forPeer:(id)arg2 ;
-(void)setSourceDeviceID:(id)arg0 version:(id)arg1 peer:(id)arg2 ;


@end


#endif