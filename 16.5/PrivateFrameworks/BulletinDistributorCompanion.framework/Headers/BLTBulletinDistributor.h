// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTBULLETINDISTRIBUTOR_H
#define BLTBULLETINDISTRIBUTOR_H

@class BBObserver, NSMutableSet, NSMutableDictionary, NSString, FBSDisplayLayoutMonitor, NSDate;
@protocol BLTBulletinDistributorSubscriberDeviceDelegate, BBObserverDelegate, BLTCompanionServer, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "BLTHashCache.h"
#import "BLTBulletinFetcher.h"
#import "BLTClientReplyTimeoutManager.h"
#import "BLTRemoteGizmoClient.h"
#import "BLTGizmoLegacyMap.h"
#import "BLTSimpleCache.h"
#import "BLTPingSubscriberManager.h"
#import "BLTSectionConfiguration.h"
#import "BLTSettingSync.h"
#import "BLTWatchKitAppList.h"

@interface BLTBulletinDistributor : NSObject <BLTBulletinDistributorSubscriberDeviceDelegate, BBObserverDelegate, BLTCompanionServer, NSXPCListenerDelegate>

 {
    NSUInteger _stateHandler;
    os_unfair_lock_s _pendingBulletinUpdatesLock;
}


@property (retain, nonatomic) BLTHashCache *attachmentHashCache; // ivar: _attachmentHashCache
@property (retain, nonatomic) BBObserver *bbObserver; // ivar: _bbObserver
@property (retain, nonatomic) BLTBulletinFetcher *bulletinFetcher; // ivar: _bulletinFetcher
@property (retain, nonatomic) NSMutableSet *bulletinIDsWaitingOnGizmoAdd; // ivar: _bulletinIDsWaitingOnGizmoAdd
@property (retain, nonatomic) NSMutableDictionary *bulletins; // ivar: _bulletins
@property (retain, nonatomic) BLTClientReplyTimeoutManager *clientReplyTimeoutManager; // ivar: _clientReplyTimeoutManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BLTRemoteGizmoClient *gizmoConnection; // ivar: _gizmoConnection
@property (retain, nonatomic) BLTGizmoLegacyMap *gizmoLegacyMap; // ivar: _gizmoLegacyMap
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BLTHashCache *iconHashCache; // ivar: _iconHashCache
@property (readonly, nonatomic) BOOL isStandaloneTestModeEnabled;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // ivar: _layoutMonitor
@property (retain, nonatomic) NSMutableSet *lockScreenFeed; // ivar: _lockScreenFeed
@property (retain, nonatomic) BLTSimpleCache *mruCacheOfSectionIDs; // ivar: _mruCacheOfSectionIDs
@property (retain, nonatomic) NSMutableSet *noticesFeed; // ivar: _noticesFeed
@property (retain, nonatomic) NSMutableDictionary *pendingBulletinUpdates; // ivar: _pendingBulletinUpdates
@property (retain, nonatomic) BLTPingSubscriberManager *pingSubscriberManager; // ivar: _pingSubscriberManager
@property (retain, nonatomic) BLTSectionConfiguration *sectionConfiguration; // ivar: _sectionConfiguration
@property (retain, nonatomic) BLTSettingSync *settingSync; // ivar: _settingSync
@property (nonatomic) BOOL standaloneTestModeEnabled; // ivar: _standaloneTestModeEnabled
@property (retain, nonatomic) NSDate *startupTime; // ivar: _startupTime
@property (readonly) Class superclass;
@property (retain, nonatomic) BLTWatchKitAppList *watchKitAppList; // ivar: _watchKitAppList


+(id)sharedDistributor;
+(id)stringForSettingsWillPresentBlockedBy:(NSUInteger)arg0 ;
-(BOOL)_enqueuBulletinUpdate:(NSUInteger)arg0 bulletin:(id)arg1 feed:(NSUInteger)arg2 ;
-(BOOL)_notifyGizmoOfBulletin:(id)arg0 forFeed:(NSUInteger)arg1 updateType:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 shouldSendReplyIfNeeded:(BOOL)arg4 attachment:(id)arg5 attachmentType:(NSInteger)arg6 replyToken:(id)arg7 ;
-(BOOL)_rememberBulletin:(id)arg0 forFeed:(NSUInteger)arg1 syncChangesToWatch:(BOOL)arg2 ;
-(BOOL)_willNanoPresent:(NSUInteger)arg0 ;
-(BOOL)_willNanoPresent:(NSUInteger)arg0 forBulletin:(id)arg1 feed:(NSUInteger)arg2 ;
-(BOOL)isLocallyConnectedToRemote;
-(BOOL)shouldSuppressLightsAndSirensNow;
-(NSUInteger)_nanoPresentableFeedFromPhoneFeed:(NSUInteger)arg0 ;
-(id)_bulletinWithPublisherBulletinID:(id)arg0 recordID:(id)arg1 sectionID:(id)arg2 ;
-(id)_obsoletionDateRelativeToNow;
-(id)_replyTokenForSectionID:(id)arg0 publisherMatchID:(id)arg1 ;
-(id)_stateDescription;
-(id)init;
-(id)originalSettings;
-(id)overriddenSettings;
-(id)settingOverrides;
-(void)_addBulletin:(id)arg0 forFeed:(NSUInteger)arg1 playLightsAndSirens:(BOOL)arg2 attachment:(id)arg3 attachmentType:(NSInteger)arg4 alwaysSend:(BOOL)arg5 completion:(id)arg6 ;
-(void)_attachAttachment:(id)arg0 attachmentType:(NSInteger)arg1 toBulletin:(id)arg2 ;
-(void)_attachIconToBulletin:(id)arg0 ;
-(void)_cleanupForAddedBulletin:(id)arg0 ;
-(void)_handleAddBulletin:(id)arg0 feed:(NSUInteger)arg1 shouldPlayLightsAndSirens:(BOOL)arg2 performedWithSuccess:(BOOL)arg3 sendAttemptTime:(id)arg4 connectionStatus:(NSUInteger)arg5 isGizmoReady:(BOOL)arg6 shouldSendReplyIfNeeded:(BOOL)arg7 replyToken:(id)arg8 ;
-(void)_handleAllSyncComplete;
-(void)_handleDidPlayLightsAndSirens:(BOOL)arg0 forBulletin:(id)arg1 inPhoneSection:(id)arg2 finalReply:(BOOL)arg3 replyToken:(id)arg4 ;
-(void)_handleDidPlayLightsAndSirens:(BOOL)arg0 forBulletin:(id)arg1 inPhoneSection:(id)arg2 transmissionDate:(id)arg3 receptionDate:(id)arg4 fromGizmo:(BOOL)arg5 finalReply:(BOOL)arg6 replyToken:(id)arg7 ;
-(void)_handleInitialSyncStateCompleteChanged:(id)arg0 ;
-(void)_handleSyncStateChanged:(id)arg0 ;
-(void)_mapBulletin:(id)arg0 ;
-(void)_notifyGizmoOfCancelBulletin:(id)arg0 sectionID:(id)arg1 universalSectionID:(id)arg2 feed:(NSUInteger)arg3 withBulletinDate:(id)arg4 ;
-(void)_performModifyBulletin:(id)arg0 forFeed:(NSUInteger)arg1 ;
-(void)_performNextPendingBulletinUpdateForBulletinID:(id)arg0 ;
-(void)_performRemoveBulletin:(id)arg0 forFeed:(NSUInteger)arg1 ;
-(void)_performSync;
-(void)_pingSubscriberWithBulletin:(id)arg0 ack:(id)arg1 ;
-(void)_postWillSendBulletinToGizmoNotificationForBulletin:(id)arg0 ;
-(void)_registerForPairedDeviceBuildChanges;
-(void)_reloadBulletinsWithCompletion:(id)arg0 ;
-(void)_removeTranscodedAttachmentIfNeededForBulletin:(id)arg0 ;
-(void)_sendCurrentBulletinIdentifiers;
-(void)_sendPBBulletin:(id)arg0 forBulletin:(id)arg1 feed:(NSUInteger)arg2 updateType:(NSUInteger)arg3 playLightsAndSirens:(BOOL)arg4 shouldSendReplyIfNeeded:(BOOL)arg5 ;
-(void)_setupBBObserver;
-(void)_startBulletinListening;
-(void)_subscriberWillAllowBulletin:(id)arg0 completion:(id)arg1 ;
-(void)clearReplyBlockForReplyToken:(id)arg0 ;
-(void)clearSectionInfoSentCache;
-(void)dealloc;
-(void)disableStandaloneTestMode;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(NSUInteger)arg0 maximumSendDelay:(NSUInteger)arg1 minimumResponseDelay:(NSUInteger)arg2 maximumResponseDelay:(NSUInteger)arg3 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 completion:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 subsectionIDs:(id)arg1 completion:(id)arg2 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 subsectionIDs:(id)arg1 subtype:(NSInteger)arg2 completion:(id)arg3 ;
-(void)handleAction:(id)arg0 ;
-(void)handleDidPlayLightsAndSirens:(BOOL)arg0 forBulletin:(id)arg1 inPhoneSection:(id)arg2 transmissionDate:(id)arg3 receptionDate:(id)arg4 replyToken:(id)arg5 ;
-(void)observer:(id)arg0 addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(NSInteger)arg5 alwaysSend:(BOOL)arg6 withReply:(id)arg7 ;
-(void)observer:(id)arg0 addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 withReply:(id)arg4 ;
-(void)observer:(id)arg0 modifyBulletin:(id)arg1 forFeed:(NSUInteger)arg2 ;
-(void)observer:(id)arg0 removeBulletin:(id)arg1 forFeed:(NSUInteger)arg2 ;
-(void)removeBulletinWithPublisherBulletinID:(id)arg0 recordID:(id)arg1 sectionID:(id)arg2 ;
-(void)removeSectionID:(id)arg0 ;
-(void)sendAllSectionInfoWithSpool:(BOOL)arg0 completion:(id)arg1 ;
-(void)sendBulletinSummary:(id)arg0 ;
-(void)sendSectionInfoWithSectionID:(id)arg0 completion:(id)arg1 ;
// -(void)setReplyBlock:(id)arg0 forSection:(unk)arg1 bulletin:(id)arg2 publicationDate:(id)arg3 replyToken:(id)arg4  ;
-(void)spoolSectionInfoWithCompletion:(id)arg0 ;
-(void)willSendLightsAndSirensWithPublisherBulletinID:(id)arg0 recordID:(id)arg1 inPhoneSection:(id)arg2 systemApp:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif