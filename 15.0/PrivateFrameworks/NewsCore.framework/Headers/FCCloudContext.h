// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCLOUDCONTEXT_H
#define FCCLOUDCONTEXT_H

@class NSURL, NSString;
@protocol FCTestingContext, FCCKDatabaseEncryptionDelegate, FCAssetKeyManagerDelegate, FCBundleSubscriptionChangeObserver, FCContentContext, FCPrivateDataContext, FCCacheFlushing, FCAppActivityMonitor, FCNewsAppConfigurationManager, FCAVAssetPrewarming, FCBackgroundTaskable, FCBundleSubscriptionManagerType, FCCoreConfigurationManager, FCCurrentIssuesChecker, FCFavoritesPersonalizer, FCFeedDatabaseProtocol, FCFeedPersonalizing, FCPersonalizedGrouping, FCContentContextInternal, FCPrivateDataContextInternal, FCLocalRegionManager, FCNewsletterManager, FCOfflineArticleManagerType, FCPaidAccessCheckerType, FCPPTContext, FCPushNotificationHandling, FCPurchaseManagerType, FCPurchaseProviderType, FCWebURLResolutionEndpointConnection;

#import <Foundation/Foundation.h>

#import "FCAccessChecker.h"
#import "FCArticleController.h"
#import "FCAssetManager.h"
#import "FCAudioPlaylist.h"
#import "FCCommandQueue.h"
#import "FCClientEndpointConnection.h"
#import "FCEntitlementService.h"
#import "FCFeedManager.h"
#import "FCFlintResourceManager.h"
#import "FCIssueReadingHistory.h"
#import "FCLocalAreasManager.h"
#import "FCNetworkBehaviorMonitor.h"
#import "FCNewsletterEndpointConnection.h"
#import "FCNotificationController.h"
#import "FCNotificationsEndpointConnection.h"
#import "FCPersonalizationData.h"
#import "FCPrivateChannelMembershipController.h"
#import "FCPurchaseController.h"
#import "FCReadingHistory.h"
#import "FCReadingList.h"
#import "FCSubscriptionController.h"
#import "FCSubscriptionList.h"
#import "FCTagController.h"
#import "FCTagSettings.h"
#import "FCTranslationManager.h"
#import "FCUserInfo.h"
#import "FCUserVectorManager.h"

@interface FCCloudContext : NSObject <FCTestingContext, FCCKDatabaseEncryptionDelegate, FCAssetKeyManagerDelegate, FCBundleSubscriptionChangeObserver, FCContentContext, FCPrivateDataContext, FCCacheFlushing>



@property (retain, nonatomic) NSObject<FCAppActivityMonitor> *appActivityMonitor; // ivar: _appActivityMonitor
@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager;
@property (retain, nonatomic) FCAccessChecker *articleAccessChecker; // ivar: _articleAccessChecker
@property (readonly, nonatomic) FCArticleController *articleController;
@property (readonly, nonatomic) NSURL *assetCacheDirectoryURL;
@property (readonly, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) FCAudioPlaylist *audioPlaylist;
@property (readonly, nonatomic) NSObject<FCAVAssetPrewarming> *avAssetPrewarmer;
@property (weak, nonatomic) NSObject<FCBackgroundTaskable> *backgroundTaskable; // ivar: _backgroundTaskable
@property (readonly, nonatomic) NSObject<FCBundleSubscriptionManagerType> *bundleSubscriptionManager; // ivar: _bundleSubscriptionManager
@property (readonly, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager;
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, copy, nonatomic) NSString *contentDirectory;
@property (readonly, copy, nonatomic) NSString *contentEnvironmentToken;
@property (readonly, copy, nonatomic) NSString *contentStoreFrontID;
@property (retain, nonatomic) NSObject<FCCurrentIssuesChecker> *currentIssuesChecker; // ivar: _currentIssuesChecker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL deviceIsiPad; // ivar: _deviceIsiPad
@property (readonly, nonatomic) FCCommandQueue *endpointCommandQueue; // ivar: _endpointCommandQueue
@property (readonly, nonatomic) FCClientEndpointConnection *endpointConnection; // ivar: _endpointConnection
@property (retain, nonatomic) FCEntitlementService *entitlementService; // ivar: _entitlementService
@property (retain, nonatomic) NSObject<FCFavoritesPersonalizer> *favoritesPersonalizer; // ivar: _favoritesPersonalizer
@property (readonly, nonatomic) NSObject<FCFeedDatabaseProtocol> *feedDatabase; // ivar: _feedDatabase
@property (readonly, nonatomic) FCFeedManager *feedManager; // ivar: _feedManager
@property (readonly, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (retain, nonatomic) NSObject<FCPersonalizedGrouping> *groupingPersonalizer; // ivar: _groupingPersonalizer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCContentContextInternal> *internalContentContext;
@property (readonly, nonatomic) NSObject<FCPrivateDataContextInternal> *internalPrivateDataContext;
@property (readonly, nonatomic) BOOL isPrivateDataEncryptionEnabled;
@property (readonly, nonatomic) BOOL isPrivateDatabaseOnline;
@property (readonly, nonatomic) BOOL isPrivateDatabaseStartingUp;
@property (readonly, nonatomic) BOOL isPrivateDatabaseTemporarilySuspended;
@property (retain, nonatomic) FCAccessChecker *issueAccessChecker; // ivar: _issueAccessChecker
@property (readonly, nonatomic) FCIssueReadingHistory *issueReadingHistory;
@property (retain, nonatomic) FCLocalAreasManager *localAreasManager; // ivar: _localAreasManager
@property (retain, nonatomic) NSObject<FCLocalRegionManager> *localRegionProvider; // ivar: _localRegionProvider
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // ivar: _networkBehaviorMonitor
@property (readonly, nonatomic) FCCommandQueue *newsletterEndpointCommandQueue; // ivar: _newsletterEndpointCommandQueue
@property (readonly, nonatomic) FCNewsletterEndpointConnection *newsletterEndpointConnection; // ivar: _newsletterEndpointConnection
@property (readonly, nonatomic) NSObject<FCNewsletterManager> *newsletterManager; // ivar: _newsletterManager
@property (readonly, nonatomic) FCNotificationController *notificationController; // ivar: _notificationController
@property (readonly, nonatomic) FCCommandQueue *notificationsEndpointCommandQueue; // ivar: _notificationsEndpointCommandQueue
@property (readonly, nonatomic) FCNotificationsEndpointConnection *notificationsEndpointConnection; // ivar: _notificationsEndpointConnection
@property (readonly, nonatomic) NSObject<FCOfflineArticleManagerType> *offlineArticleManager; // ivar: _offlineArticleManager
@property (copy, nonatomic) id *offlineArticleManagerProvider; // ivar: _offlineArticleManagerProvider
@property (nonatomic) NSInteger options; // ivar: _options
@property (retain, nonatomic) NSObject<FCPaidAccessCheckerType> *paidAccessChecker; // ivar: _paidAccessChecker
@property (readonly, nonatomic) FCPersonalizationData *personalizationData;
@property (readonly, nonatomic) NSObject<FCPPTContext> *pptContext; // ivar: _pptContext
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (retain, nonatomic) NSObject<FCPrivateDataContext> *privateDataContext; // ivar: _privateDataContext
@property (readonly, copy, nonatomic) NSString *privateDataDirectory;
@property (readonly, nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled;
@property (readonly, nonatomic) NSObject<FCPushNotificationHandling> *privatePushNotificationHandler;
@property (readonly, nonatomic) FCPurchaseController *purchaseController; // ivar: _purchaseController
@property (readonly, nonatomic) NSObject<FCPurchaseManagerType> *purchaseManager; // ivar: _purchaseManager
@property (readonly, nonatomic) NSObject<FCPurchaseProviderType> *purchaseProvider; // ivar: _purchaseProvider
@property (readonly, nonatomic) FCReadingHistory *readingHistory;
@property (readonly, nonatomic) FCReadingList *readingList;
@property (readonly, nonatomic) FCSubscriptionController *subscriptionController; // ivar: _subscriptionController
@property (readonly, nonatomic) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property (readonly, nonatomic) FCTagController *tagController;
@property (readonly, nonatomic) FCTagSettings *tagSettings;
@property (retain, nonatomic) FCTranslationManager *translationManager; // ivar: _translationManager
@property (readonly, nonatomic) FCUserInfo *userInfo;
@property (retain, nonatomic) FCUserVectorManager *userVectorManager; // ivar: _userVectorManager
@property (readonly, nonatomic) NSObject<FCWebURLResolutionEndpointConnection> *webURLResolutionEndpointConnection; // ivar: _webURLResolutionEndpointConnection


+(id)testingContext;
+(id)testingContextWithDesiredHeadlineFieldOptions:(NSUInteger)arg0 ;
+(void)initialize;
-(BOOL)shouldAssetKeyManagerSimulateUnauthorizedAssetKeys:(id)arg0 ;
-(id)init;
-(id)initForTesting;
-(id)initForTestingWithDesiredHeadlineFieldOptions:(NSUInteger)arg0 ;
-(id)initWithConfiguration:(id)arg0 configurationManager:(id)arg1 contentHostDirectory:(id)arg2 privateDataHostDirectory:(id)arg3 privateDataActionProvider:(id)arg4 networkBehaviorMonitor:(id)arg5 appActivityMonitor:(id)arg6 desiredHeadlineFieldOptions:(NSUInteger)arg7 feedUsage:(NSInteger)arg8 deviceIsiPad:(BOOL)arg9 backgroundTaskable:(id)arg10 privateDataSyncAvailability:(id)arg11 pptContext:(id)arg12 options:(NSInteger)arg13 ;
-(id)initWithConfiguration:(id)arg0 configurationManager:(id)arg1 contentHostDirectory:(id)arg2 privateDataHostDirectory:(id)arg3 privateDataActionProvider:(id)arg4 networkBehaviorMonitor:(id)arg5 appActivityMonitor:(id)arg6 desiredHeadlineFieldOptions:(NSUInteger)arg7 feedUsage:(NSInteger)arg8 lockStoreFrontIfNeeded:(BOOL)arg9 deviceIsiPad:(BOOL)arg10 backgroundTaskable:(id)arg11 privateDataSyncAvailability:(id)arg12 pptContext:(id)arg13 ;
-(id)initWithContentContext:(id)arg0 privateDataContext:(id)arg1 networkBehaviorMonitor:(id)arg2 options:(NSInteger)arg3 ;
-(id)insertTestArticle;
-(id)insertTestArticlesWithCount:(NSUInteger)arg0 ;
-(id)interestTokenForContentManifest:(id)arg0 ;
-(id)magazinesConfigurationManager;
-(id)news_core_ConfigurationManager;
-(id)notificationsController;
-(id)privateStoreWithName:(id)arg0 version:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)recordSourceWithSchema:(id)arg0 ;
-(id)recordTreeSourceWithRecordSources:(id)arg0 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg0 ;
-(void)enableFlushingWithFlushingThreshold:(NSUInteger)arg0 ;
-(void)enableFlushingWithFlushingThreshold:(NSUInteger)arg0 exceptForFlusher:(id)arg1 ;
-(void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)fetchPrivateDataEncryptionIsRequiredForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)fetchShouldSecureSubscriptionsForDatabase:(id)arg0 completion:(id)arg1 ;
-(void)ppt_overrideFeedEndpoint:(NSInteger)arg0 ;
-(void)ppt_prewarmFeedDatabase;


@end


#endif