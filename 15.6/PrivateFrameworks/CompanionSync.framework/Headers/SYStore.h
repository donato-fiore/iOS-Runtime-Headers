// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYSTORE_H
#define SYSTORE_H

@class NSDictionary, NSString;
@protocol SYServiceDelegate, SYChangeSerializer, SYChangeTrackingWithErrors, OS_dispatch_queue, SYStoreDelegate, SYSerialization;

#import <Foundation/Foundation.h>

#import "SYStoreResetSessionOwner.h"
#import "SYPersistentStore.h"
#import "SYStoreSessionOwner.h"
#import "SYAtomicFIFO.h"
#import "SYService.h"

@interface SYStore : NSObject <SYServiceDelegate, SYChangeSerializer, SYChangeTrackingWithErrors>

 {
    NSObject<OS_dispatch_queue> *_qosTargetQueue;
    ? _flags;
}


@property (nonatomic) BOOL allowsDeletes; // ivar: _allowsDeletes
@property (copy, nonatomic) NSDictionary *customIDSDeliveryOptions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SYStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (nonatomic) unsigned int deliveryQOS;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCompletedFullSync;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inDeltaSync;
@property (nonatomic) NSInteger maxBytesInFlight; // ivar: _maxBytesInFlight
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (retain, nonatomic) SYStoreResetSessionOwner *pendingResetSessionOwner; // ivar: _pendingResetSessionOwner
@property (readonly, nonatomic) SYPersistentStore *persistentStore; // ivar: _persistentStore
@property (nonatomic) NSInteger priority;
@property (retain, nonatomic) NSObject<SYSerialization> *serializer; // ivar: _serializer
@property (retain, nonatomic) SYStoreSessionOwner *sessionOwner; // ivar: _sessionOwner
@property (readonly, nonatomic) SYAtomicFIFO *sessionQueue; // ivar: _sessionQueue
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SYService *syService; // ivar: _syService
@property (nonatomic) CGFloat timeToLive;


-(BOOL)_startResetSyncSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)addObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 error:(*id)arg3 ;
-(BOOL)addObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 error:(*id)arg3 ;
-(BOOL)deleteObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)resume:(*id)arg0 ;
-(BOOL)service:(id)arg0 startSession:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateObject:(id)arg0 error:(*id)arg1 ;
-(id)changeFromData:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)dataFromChange:(id)arg0 ;
-(id)decodeChangeData:(id)arg0 fromProtocolVersion:(NSInteger)arg1 ofType:(NSInteger)arg2 ;
-(id)decodeSYObject:(id)arg0 ;
-(id)encodeSYChangeForBackwardCompatibility:(id)arg0 protocolVersion:(NSInteger)arg1 ;
-(id)encodeSYObject:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 isGStore:(BOOL)arg1 highPriority:(BOOL)arg2 ;
-(id)initWithService:(id)arg0 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 highPriority:(BOOL)arg2 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 highPriority:(BOOL)arg2 isMasterStore:(BOOL)arg3 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 highPriority:(BOOL)arg2 isMasterStore:(BOOL)arg3 tracksChanges:(BOOL)arg4 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 priority:(NSInteger)arg2 isMasterStore:(BOOL)arg3 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 priority:(NSInteger)arg2 isMasterStore:(BOOL)arg3 tracksChanges:(BOOL)arg4 ;
-(id)initWithServiceName:(id)arg0 priority:(NSInteger)arg1 isMasterStore:(BOOL)arg2 ;
-(void)_enqueueDeltaSessionWithChanges:(id)arg0 contextInfo:(id)arg1 idsOptions:(id)arg2 blockUntilSent:(BOOL)arg3 reportError:(id)arg4 ;
-(void)_signalNextQueuedSession;
-(void)_startIncomingSession:(id)arg0 ;
// -(void)_transaction:(id)arg0 context:(unk)arg1 idsOptions:(id)arg2 blockUntilSent:(id)arg3 reportError:(BOOL)arg4  ;
-(void)addObject:(id)arg0 ;
-(void)addObject:(id)arg0 completion:(id)arg1 ;
-(void)addObject:(id)arg0 context:(id)arg1 ;
-(void)addObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 ;
-(void)blockingTransaction:(id)arg0 ;
// -(void)blockingTransaction:(id)arg0 handlingError:(unk)arg1  ;
-(void)deleteObject:(id)arg0 ;
-(void)deleteObject:(id)arg0 completion:(id)arg1 ;
-(void)deleteObject:(id)arg0 context:(id)arg1 ;
-(void)deleteObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 ;
-(void)didEndDeltaSync;
-(void)service:(id)arg0 didSwitchFromPairingID:(id)arg1 toPairingID:(id)arg2 ;
-(void)service:(id)arg0 encounteredError:(id)arg1 context:(id)arg2 ;
-(void)service:(id)arg0 incomingData:(id)arg1 identifier:(id)arg2 completion:(id)arg3 ;
-(void)service:(id)arg0 incomingStream:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 completion:(id)arg4 ;
-(void)service:(id)arg0 willSwitchFromPairingID:(id)arg1 toPairingID:(id)arg2 ;
-(void)setNeedsFullSync;
-(void)setNeedsFullSyncWithContext:(id)arg0 idsOptions:(id)arg1 ;
-(void)transaction:(id)arg0 ;
// -(void)transaction:(id)arg0 completion:(unk)arg1  ;
// -(void)transaction:(id)arg0 context:(unk)arg1  ;
// -(void)transaction:(id)arg0 context:(unk)arg1 idsOptions:(id)arg2  ;
// -(void)transaction:(id)arg0 context:(unk)arg1 idsOptions:(id)arg2 blockUntilSent:(id)arg3  ;
// -(void)transaction:(id)arg0 handlingError:(unk)arg1  ;
-(void)updateObject:(id)arg0 ;
-(void)updateObject:(id)arg0 completion:(id)arg1 ;
-(void)updateObject:(id)arg0 context:(id)arg1 ;
-(void)updateObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 ;


@end


#endif