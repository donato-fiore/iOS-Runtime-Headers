// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNAIDENTITYMANAGER_H
#define ICNAIDENTITYMANAGER_H

@class NSDate, NSUbiquitousKeyValueStore, NSString, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICNAIdentityManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (copy, nonatomic) NSDate *currentDateForTesting; // ivar: _currentDateForTesting
@property (retain, nonatomic) NSUbiquitousKeyValueStore *encryptedKVStore; // ivar: _encryptedKVStore
@property (nonatomic) BOOL identifierResetOccurred; // ivar: _identifierResetOccurred
@property (copy, nonatomic) NSString *identityTimestampYYYYMM; // ivar: _identityTimestampYYYYMM
@property (copy, nonatomic) NSString *privateUserID; // ivar: _privateUserID
@property (copy, nonatomic) NSDictionary *salts; // ivar: _salts
@property (nonatomic) NSUInteger startMonth; // ivar: _startMonth
@property (nonatomic) NSUInteger startYear; // ivar: _startYear
@property (copy, nonatomic) NSString *userID; // ivar: _userID


+(id)newSalt;
+(id)saltedID:(id)arg0 withSalt:(id)arg1 ;
+(id)sharedManager;
-(id)init;
-(id)saltedID:(id)arg0 forClass:(Class)arg1 ;
-(id)todayTimestampYYYYMM:(id)arg0 ;
-(void)_keyValueStoreDidChangeExternally:(id)arg0 ;
-(void)debug_clearIdentifiers;
-(void)debug_dumpIdentifiers;
-(void)debug_forceRegenerateIdentifiers;
-(void)loadIdentifiersAndRegenerateIfNecessary;
-(void)loadIdentifiersFromKVSAndForceRegenerateIdentity:(BOOL)arg0 ;


@end


#endif