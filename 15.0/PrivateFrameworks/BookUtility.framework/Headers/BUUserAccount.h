// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BUUSERACCOUNT_H
#define BUUSERACCOUNT_H

@class ACAccountStore, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BUUserAccount : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) NSString *cachedICloudAccountName; // ivar: _cachedICloudAccountName
@property (retain, nonatomic) NSString *cachedICloudIdentity; // ivar: _cachedICloudIdentity
@property (nonatomic) BOOL cachedICloudValuesPrewarmed; // ivar: _cachedICloudValuesPrewarmed
@property (nonatomic) BOOL cachedIsGlobalICloudDriveSyncOptedIn; // ivar: _cachedIsGlobalICloudDriveSyncOptedIn
@property (nonatomic) BOOL cachedIsPrimaryAccountManagedAppleID; // ivar: _cachedIsPrimaryAccountManagedAppleID
@property (nonatomic) BOOL cachedIsUserSignedInToiCloud; // ivar: _cachedIsUserSignedInToiCloud
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prewarmQueue; // ivar: _prewarmQueue
@property (nonatomic) int tccNotifyToken; // ivar: _tccNotifyToken


+(BOOL)detectedUserSwitchWithId:(id)arg0 outSignedIn:(*BOOL)arg1 outSignedOut:(*BOOL)arg2 outAccountNumberChanged:(*BOOL)arg3 ;
+(BOOL)isAccountModificationAllowed;
+(BOOL)isGlobalICloudDriveSyncOptedIn;
+(BOOL)isPrimaryAccountManagedAppleID;
+(BOOL)isStoreAccountManagedAppleID;
+(BOOL)isUserSignedInToiCloud;
+(BOOL)isUserSignedInToiTunes;
+(id)iCloudAccountName;
+(id)iCloudIdentity;
+(id)lastUsedStoreAccountID;
+(id)primaryAppleAccount;
+(id)sharedInstance;
+(id)storeAccountID;
+(id)storeAccountName;
+(id)storeFrontIdentifier;
+(void)clearCachedData;
+(void)clearLastUsedStoreAccountID;
+(void)prewarm;
+(void)updateLastUsedStoreAccountID;
-(BOOL)_evaluateIsGlobalICloudDriveSyncOptedInForAccount:(id)arg0 ;
-(BOOL)_evaluateIsPrimaryAccountManagedAppleIDForAccount:(id)arg0 ;
-(BOOL)_evaluateIsUserSignedInToiCloudForAccount:(id)arg0 ;
-(BOOL)_isGlobalICloudDriveSyncOptedIn;
-(BOOL)_isPrimaryAccountManagedAppleID;
-(BOOL)_isUserSignedInToiCloud;
-(id)_evaluateICloudAccountNameForAccount:(id)arg0 ;
-(id)_evaluateICloudIdentityForAccount:(id)arg0 ;
-(id)_iCloudAccountName;
-(id)_iCloudIdentity;
-(id)description;
-(id)init;
-(void)_cacheValues;
-(void)_clearCachedData;
-(void)_prewarmAsyncICloudValuesIfNeeded;
-(void)_prewarmICloudValuesIfNeeded;
-(void)dealloc;


@end


#endif