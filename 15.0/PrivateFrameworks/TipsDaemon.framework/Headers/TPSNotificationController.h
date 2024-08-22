// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSNOTIFICATIONCONTROLLER_H
#define TPSNOTIFICATIONCONTROLLER_H

@class NSMutableDictionary, NSBundle;
@protocol TPSNotificationControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSLocalNotificationController.h"
#import "TPSNotificationCache.h"

@interface TPSNotificationController : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap; // ivar: _assetURLSessionMap
@property (weak, nonatomic) NSObject<TPSNotificationControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSBundle *frameworkBundle; // ivar: _frameworkBundle
@property (retain, nonatomic) TPSLocalNotificationController *localNotificationController; // ivar: _localNotificationController
@property (retain, nonatomic) TPSNotificationCache *notificationCache; // ivar: _notificationCache
@property (nonatomic) NSInteger notificationCount; // ivar: _notificationCount
@property (readonly, nonatomic, getter=isNotificationSettingValid) BOOL notificationSettingValid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (readonly, nonatomic) BOOL validNotificationInterval;


+(BOOL)alwaysDisplayCollectionIcon;
+(BOOL)respectsOptout;
+(BOOL)supportsExtension;
+(BOOL)supportsNotification;
+(BOOL)supportsRemoteIcon;
+(BOOL)supportsWelcomeNotification;
+(CGFloat)standardNotificationInterval;
+(NSInteger)remainingCountOfNotificationsUntilOptOut;
+(id)cacheDirectoryCreateIfEmpty:(BOOL)arg0 ;
+(id)displayDarwinNotificationKey;
+(void)removeAssetCacheDirectory;
+(void)removeNotificationCache;
-(BOOL)canUpdateHintEligibilityForIdentifier:(id)arg0 ;
-(BOOL)collectionEligibleForNotification:(id)arg0 ;
-(BOOL)isDocumentHintDisplayedOnOtherDevices:(id)arg0 ;
-(BOOL)isNotificationDeliveryInfoValid:(id)arg0 identifier:(id)arg1 overridedOptOutContentOnly:(BOOL)arg2 ignoreSuppressContent:(BOOL)arg3 ;
-(BOOL)preconditionValidForIdentifier:(id)arg0 documentDeliveryInfoMap:(id)arg1 deliveryInfoMap:(id)arg2 overridedOptOutContentOnly:(BOOL)arg3 ignoreSuppressContent:(BOOL)arg4 ;
-(BOOL)shouldDisplayCollectionIcon;
-(BOOL)updateHintEligibleForTip:(id)arg0 isValid:(BOOL)arg1 ;
-(id)assetsConfigurationForDocument:(id)arg0 ;
-(id)cacheAssetFileURLForDocument:(id)arg0 ;
-(id)cacheFilePathForFile:(id)arg0 ;
-(id)copyFileURL:(id)arg0 cachePath:(id)arg1 ;
-(id)documentToNotifyForCollection:(id)arg0 collectionDeliveryInfoMap:(id)arg1 deliveryInfoMap:(id)arg2 overridedOptOutContentOnly:(BOOL)arg3 ;
-(id)documentToNotifyForTipsInCollection:(id)arg0 tipMap:(id)arg1 tipDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 overridedOptOutContentOnly:(BOOL)arg4 ;
-(id)init;
-(id)notificationDeliveryInfoForIdentifier:(id)arg0 documentDeliveryInfoMap:(id)arg1 deliveryInfoMap:(id)arg2 ;
-(id)tipDocumentToNotifyWithIdentifier:(id)arg0 tipMap:(id)arg1 tipDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 overridedOptOutContentOnly:(BOOL)arg4 ;
-(id)updateNotificationCacheWithCollectionIdentifier:(id)arg0 document:(id)arg1 type:(NSUInteger)arg2 extensionPayload:(id)arg3 ;
-(void)clearNotificationCache;
-(void)clearNotificationCount;
-(void)fetchNotificationAssetIfNeededCompletionHandler:(id)arg0 ;
-(void)increaseUserNotificationCount;
-(void)removeAllNotifications;
-(void)removeNotificationWithIdentifier:(id)arg0 ;
-(void)showNotificationWithCompletionHandler:(id)arg0 ;
-(void)updateArchiveCache;
-(void)updateDocumentToNotifyWithPreferredIdentifiers:(id)arg0 collectionOrder:(id)arg1 collectionMap:(id)arg2 collectionDeliveryInfoMap:(id)arg3 tipMap:(id)arg4 tipsDeliveryInfoMap:(id)arg5 deliveryInfoMap:(id)arg6 documentDictionaryMap:(id)arg7 metadataDictionary:(id)arg8 completionHandler:(id)arg9 ;
-(void)updateLastNotificationDate;
-(void)updateNotificationCount;


@end


#endif