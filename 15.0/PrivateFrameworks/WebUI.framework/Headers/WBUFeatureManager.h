// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBUFEATUREMANAGER_H
#define WBUFEATUREMANAGER_H

@class ACMonitoredAccountStore, ACAccount, NSNumber, STManagementState, OTClique, NSString;
@protocol ACMonitoredAccountStoreDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBUFeatureManager : NSObject <ACMonitoredAccountStoreDelegateProtocol>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACMonitoredAccountStore *_accountStore;
    ACAccount *_account;
    NSNumber *_cachedShouldRequestMoreTime;
    STManagementState *_managementState;
    NSNumber *_cachedLocallyRestricted;
    CGFloat _lastRestrictedSettingRequestedTime;
    OTClique *_keychainClique;
    NSString *_primaryAccountAltDSID;
}


@property (readonly, nonatomic, getter=isAirDropPasswordsAvailable) BOOL airDropPasswordsAvailable;
@property (readonly, nonatomic, getter=isAutoFillAvailable) BOOL autoFillAvailable; // ivar: _autoFillAvailable
@property (readonly, nonatomic, getter=isBookmarksAvailable) BOOL bookmarksAvailable; // ivar: _bookmarksAvailable
@property (readonly, nonatomic, getter=isCloudHistorySyncAvailable) BOOL cloudHistorySyncAvailable;
@property (readonly, nonatomic, getter=isCloudKitBookmarksAvailable) BOOL cloudKitBookmarksAvailable;
@property (readonly, nonatomic, getter=isCloudSyncAvailable) BOOL cloudSyncAvailable; // ivar: _cloudSyncAvailable
@property (readonly, nonatomic, getter=isCloudTabsAvailable) BOOL cloudTabsAvailable;
@property (readonly, nonatomic, getter=isCreditCardStorageAvailable) BOOL creditCardStorageAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInMemoryBookmarkChangeTrackingAvailable) BOOL inMemoryBookmarkChangeTrackingAvailable; // ivar: _inMemoryBookmarkChangeTrackingAvailable
@property (readonly, nonatomic, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property (readonly, nonatomic, getter=isOfflineReadingListAvailable) BOOL offlineReadingListAvailable; // ivar: _offlineReadingListAvailable
@property (readonly, nonatomic, getter=isPrivateBrowsingAvailable) BOOL privateBrowsingAvailable;
@property (readonly, nonatomic, getter=isReadingListAvailable) BOOL readingListAvailable; // ivar: _readingListAvailable
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUserRemotelyManagedAndLocallyRestricted) BOOL userRemotelyManagedAndLocallyRestricted;


+(BOOL)shouldOfferVirtualCards;
+(NSInteger)accessLevel;
+(id)webui_sharedFeatureManager;
-(BOOL)_isCloudTabsAvailableUsingManagedAppleID:(BOOL)arg0 ;
-(BOOL)_isUsingManagedAppleID;
-(BOOL)_locallyRestricted;
-(id)init;
-(void)_setAccount:(id)arg0 ;
-(void)_setAccountOnInternalQueue:(id)arg0 ;
-(void)_updateFeatureAvailabilityByAccessLevel;
-(void)_updateKeychainSyncingStatus;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasModified:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)dealloc;
-(void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(id)arg0 ;
-(void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(id)arg0 ;


@end


#endif