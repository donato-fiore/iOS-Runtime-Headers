// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQOFFERMANAGER_H
#define ICQOFFERMANAGER_H

@class NSTimer, NSMutableDictionary, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICQOfferManager : NSObject {
    NSObject<OS_dispatch_queue> *_cachedOfferQueue;
    NSTimer *_regularOfferInvalidationTimer;
    NSTimer *_premiumOfferInvalidationTimer;
}


@property (nonatomic, getter=isBuddyOfferEnabled) BOOL buddyOfferEnabled;
@property (retain, nonatomic) NSMutableDictionary *cachedOffers; // ivar: _cachedOffers
@property (readonly, nonatomic) BOOL isDeviceStorageAlmostFull;
@property (readonly, nonatomic) NSNumber *photosLibrarySize;
@property (retain, nonatomic) NSMutableDictionary *registeredDarwinNotifications; // ivar: _registeredDarwinNotifications
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;


+(BOOL)_legacyBuddyOfferMightNeedPresenting;
+(BOOL)buddyOfferMightNeedPresenting;
+(id)ckBackupDeviceID;
+(id)defaultBundleIdentifier;
+(id)defaultPlaceholderKeys;
+(id)sharedOfferManager;
+(id)stringWithPlaceholderFormat:(id)arg0 alternateString:(id)arg1 ;
-(BOOL)_offerTypeMatchesRequestOptions:(id)arg0 offer:(id)arg1 ;
-(BOOL)_shouldUseOffer:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)fetchOfferIfNeeded;
-(id)_currentOfferForBundleIdentifier:(id)arg0 options:(id)arg1 ;
-(id)_premiumOptions;
-(id)_refreshOfferWithDaemonOfferDict:(id)arg0 offerRequestType:(NSInteger)arg1 bundleId:(id)arg2 ;
-(id)cachedOfferForType:(NSInteger)arg0 ;
-(id)currentDefaultOffer;
-(id)currentOffer;
-(id)currentOfferForBundleIdentifier:(id)arg0 ;
-(id)currentPremiumOffer;
-(id)currentPremiumOfferForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)_firedPremiumOfferInvalidationTimer:(id)arg0 ;
-(void)_firedRegularOfferInvalidationTimer:(id)arg0 ;
-(void)_funnelCloudServerOfferForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_getOfferForAccount:(id)arg0 bundleIdentifier:(id)arg1 options:(id)arg2 offerContext:(id)arg3 completion:(id)arg4 ;
-(void)_getOfferForBundleIdentifier:(id)arg0 options:(id)arg1 offerContext:(id)arg2 completion:(id)arg3 ;
-(void)_handlePushReceivedDarwinNotificationRequestType:(NSInteger)arg0 ;
-(void)_refetchDefaultOffer;
-(void)_refetchPremiumOffer;
-(void)_refetchRegularOffer;
-(void)_registerForDarwinNotification:(id)arg0 ;
-(void)_setupTimerForInvalidationDate:(id)arg0 forType:(NSInteger)arg1 ;
-(void)_setupTimerForPremiumOfferInvalidationDate:(id)arg0 ;
-(void)_setupTimerForRegularOfferInvalidationDate:(id)arg0 ;
-(void)_teardownInvalidationTimerForRequestType:(NSInteger)arg0 ;
-(void)_teardownPremiumOfferInvalidationTimer;
-(void)_teardownRegularOfferInvalidationTimer;
-(void)_unregisterForAllDarwinNotifications;
-(void)_unregisterForDarwinNotification:(id)arg0 ;
-(void)clearFollowups;
-(void)dealloc;
-(void)forcePostFollowup;
-(void)getDefaultOfferWithCompletion:(id)arg0 ;
-(void)getOfferForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getOfferForBundleIdentifier:(id)arg0 offerContext:(id)arg1 completion:(id)arg2 ;
-(void)getOfferWithCompletion:(id)arg0 ;
-(void)getPremiumOfferAndOpportunityBubbleForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getPremiumOfferAndOpportunityBubbleWithCompletion:(id)arg0 ;
-(void)getPremiumOfferForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getPremiumOfferForBundleIdentifier:(id)arg0 offerContext:(id)arg1 completion:(id)arg2 ;
-(void)getPremiumOfferWithCompletion:(id)arg0 ;
-(void)postBuddyOfferType:(id)arg0 ;
-(void)postOfferType:(id)arg0 ;
-(void)setCachedOfferForType:(NSInteger)arg0 newOffer:(id)arg1 ;
-(void)teardownCachedBuddyOffer;
-(void)teardownCachedOffer;
-(void)teardownCachedOffers;
-(void)teardownCachedPremiumOffer;
-(void)updateOfferId:(id)arg0 buttonId:(id)arg1 info:(id)arg2 completion:(id)arg3 ;


@end


#endif