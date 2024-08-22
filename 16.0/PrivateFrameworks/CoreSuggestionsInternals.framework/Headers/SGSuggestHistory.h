// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSUGGESTHISTORY_H
#define SGSUGGESTHISTORY_H

@class _PASLock, NSUbiquitousKeyValueStore;

#import <Foundation/Foundation.h>

#import "SGNoCloudNSUbiquitousKeyValueStore.h"

@interface SGSuggestHistory : NSObject {
    _PASLock *_lock;
    NSUbiquitousKeyValueStore *_backingKVStore;
    SGNoCloudNSUbiquitousKeyValueStore *_noCloudFakeBackingKVStore;
}


@property (readonly, nonatomic) NSUbiquitousKeyValueStore *kvs;


+(id)newTestingInstanceWithSharedKVS:(id)arg0 ;
+(id)sharedSuggestHistory;
+(void)reset;
+(void)resetNoFlush;
-(BOOL)_anyHash:(id)arg0 inSet:(id)arg1 ;
-(BOOL)hasConfirmedField:(id)arg0 value:(id)arg1 forStorageEvent:(id)arg2 ;
-(BOOL)hasContact:(id)arg0 ;
-(BOOL)hasContactDetail:(id)arg0 forContact:(id)arg1 ;
-(BOOL)hasContactDetailKey:(id)arg0 ;
-(BOOL)hasStorageContact:(id)arg0 ;
-(BOOL)isConfirmedEvent:(id)arg0 ;
-(BOOL)isConfirmedEventWithoutTimeStamp:(id)arg0 ;
-(BOOL)isConfirmedReminder:(id)arg0 ;
-(BOOL)isRejectedEvent:(id)arg0 ;
-(BOOL)isRejectedReminder:(id)arg0 ;
-(BOOL)isUpdatableContact:(id)arg0 ;
-(BOOL)isValidCancelledEvent:(id)arg0 ;
-(BOOL)isValidNewEvent:(id)arg0 ;
-(BOOL)isValidNewReminder:(id)arg0 ;
-(BOOL)isValidSuggestion:(id)arg0 ;
-(id)_canaryHash;
-(id)_hashesForConfirmedField:(id)arg0 value:(id)arg1 storageEvent:(id)arg2 forMatching:(BOOL)arg3 ;
-(id)confirmHashesForOpaqueKey:(id)arg0 withCreationTime:(struct SGUnixTimestamp_ )arg1 forMatching:(BOOL)arg2 ;
-(id)confirmHashesForOpaqueKeyWithoutTimestamp:(id)arg0 forMatching:(BOOL)arg1 ;
-(id)confirmHashesForRemindersOpaqueKey:(id)arg0 withCreationTime:(struct SGUnixTimestamp_ )arg1 forMatching:(BOOL)arg2 ;
-(id)description;
-(id)hashesForContact:(id)arg0 forMatching:(BOOL)arg1 ;
-(id)hashesForContactDetail:(id)arg0 fromContact:(id)arg1 forMatching:(BOOL)arg2 ;
-(id)hashesForCuratedContactDetail:(id)arg0 fromContact:(id)arg1 forMatching:(BOOL)arg2 ;
-(id)hashesForOpaqueKey:(id)arg0 forMatching:(BOOL)arg1 ;
-(id)hashesForPseudoEventByKey:(id)arg0 forMatching:(BOOL)arg1 ;
-(id)hashesForStorageContact:(id)arg0 forMatching:(BOOL)arg1 ;
-(id)hashesForStrings:(id)arg0 forMatching:(BOOL)arg1 ;
-(id)identityBasedHashesForPseudoEvent:(id)arg0 withCreationTime:(struct SGUnixTimestamp_ )arg1 ;
-(id)identityBasedHashesForPseudoReminder:(id)arg0 withCreationTime:(struct SGUnixTimestamp_ )arg1 ;
-(id)identitySalt;
-(id)init;
-(id)initWithKVS:(id)arg0 ;
-(id)keysForContact:(id)arg0 ;
-(id)keysForContactDetail:(id)arg0 ofContact:(id)arg1 ;
-(id)keysForCuratedContactDetail:(id)arg0 ofContact:(id)arg1 ;
-(id)keysForStorageContact:(id)arg0 ;
-(id)loadResetInfo;
-(id)modernHashesForClassicHashes:(id)arg0 forMatching:(BOOL)arg1 ;
-(id)mutableSetForKey:(id)arg0 ;
-(id)rejectHashesForOpaqueKey:(id)arg0 forMatching:(BOOL)arg1 ;
-(id)setForKey:(id)arg0 ;
-(void)_setHashes:(id)arg0 forKey:(id)arg1 ;
-(void)_setInternalStateAccordingToKVS:(id)arg0 ;
-(void)_tellObserversHashesDidChange;
-(void)addSuggestHistoryObserver:(id)arg0 ;
-(void)confirmEvent:(id)arg0 ;
-(void)confirmEventFromExternalDevice:(id)arg0 ;
-(void)confirmFieldValues:(id)arg0 forStorageEvent:(id)arg1 ;
-(void)confirmOrRejectDetail:(id)arg0 forContact:(id)arg1 ;
-(void)confirmOrRejectDetailHashes:(id)arg0 ;
-(void)confirmOrRejectRecordForContact:(id)arg0 ;
-(void)confirmReminder:(id)arg0 ;
-(void)confirmReminderFromExternalDevice:(id)arg0 ;
-(void)confirmStorageEvent:(id)arg0 ;
-(void)handleSyncedDataChanged:(id)arg0 ;
-(void)pushAll:(id)arg0 ;
-(void)pushConfirmedEventFields:(id)arg0 ;
-(void)pushConfirmedEventWithoutTimestampFields:(id)arg0 ;
-(void)pushConfirmedEvents:(id)arg0 ;
-(void)pushConfirmedEventsWithoutTimestamp:(id)arg0 ;
-(void)pushConfirmedReminders:(id)arg0 ;
-(void)pushContacts:(id)arg0 ;
-(void)pushDontUpdate:(id)arg0 ;
-(void)pushEmptyHashesForTestingKey:(id)arg0 ;
-(void)pushRejectedEvents:(id)arg0 ;
-(void)pushRejectedReminders:(id)arg0 ;
-(void)pushResetInfo:(id)arg0 ;
-(void)pushStorageDetails:(id)arg0 ;
-(void)rejectContact:(id)arg0 ;
-(void)rejectContactDetailKey:(id)arg0 ;
-(void)rejectEvent:(id)arg0 ;
-(void)rejectEventFromExternalDevice:(id)arg0 ;
-(void)rejectRealtimeContact:(id)arg0 ;
-(void)rejectReminder:(id)arg0 ;
-(void)rejectReminderFromExternalDevice:(id)arg0 ;
-(void)rejectStorageEvent:(id)arg0 ;
-(void)removeConfirmationHistoryForEntityWithOpaqueKey:(id)arg0 creationTimestamp:(struct SGUnixTimestamp_ )arg1 ;
-(void)removeConfirmationHistoryForEvent:(id)arg0 ;
-(void)reset;
-(void)resetNoFlush;
-(void)setInternalStateAccordingToKVS;
-(void)writeAndPushConfirmedEventHashes:(id)arg0 ;
-(void)writeAndPushConfirmedEventWithoutTimestampHashes:(id)arg0 ;
-(void)writeAndPushConfirmedReminderHashes:(id)arg0 ;
-(void)writeAndPushRejectedEventHashes:(id)arg0 ;
-(void)writeAndPushRejectedReminderHashes:(id)arg0 ;


@end


#endif