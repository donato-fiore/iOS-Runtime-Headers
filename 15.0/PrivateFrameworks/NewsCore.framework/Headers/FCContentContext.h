// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCONTENTCONTEXT_H
#define FCCONTENTCONTEXT_H

@class NSURL, NSString;
@protocol FCNetworkReachabilityRequirementObserving, FCCoreConfigurationObserving, FCContentContext, FCNewsAppConfigurationManager, FCAssetKeyCacheType, FCAssetKeyManagerType, FCAssetKeyServiceType, FCAVAssetCacheType, FCAVAssetFactoryType, FCAVAssetKeyCacheType, FCAVAssetKeyManagerType, FCAVAssetKeyServiceType, FCAVAssetPrewarming, FCAVAssetResourceLoaderType, FCBackgroundTaskable, FCCoreConfigurationManager, FCFeedDatabaseProtocol, FCPPTContext, FCNetworkReachabilityRequirement;

#import <Foundation/Foundation.h>

#import "FCArticleController.h"
#import "FCAssetManager.h"
#import "FCAVAssetDownloadManager.h"
#import "FCContextConfiguration.h"
#import "FCFlintResourceManager.h"
#import "FCContentContextInternal.h"
#import "FCNetworkBehaviorMonitor.h"
#import "FCTagController.h"

@interface FCContentContext : NSObject <FCNetworkReachabilityRequirementObserving, FCCoreConfigurationObserving, FCContentContext>



@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager;
@property (readonly, nonatomic) FCArticleController *articleController; // ivar: _articleController
@property (retain, nonatomic) NSURL *assetCacheDirectoryURL; // ivar: _assetCacheDirectoryURL
@property (retain, nonatomic) NSObject<FCAssetKeyCacheType> *assetKeyCache; // ivar: _assetKeyCache
@property (retain, nonatomic) NSObject<FCAssetKeyManagerType> *assetKeyManager; // ivar: _assetKeyManager
@property (retain, nonatomic) NSObject<FCAssetKeyServiceType> *assetKeyService; // ivar: _assetKeyService
@property (readonly, nonatomic) FCAssetManager *assetManager; // ivar: _assetManager
@property (retain, nonatomic) NSObject<FCAVAssetCacheType> *avAssetCache; // ivar: _avAssetCache
@property (retain, nonatomic) FCAVAssetDownloadManager *avAssetDownloadManager; // ivar: _avAssetDownloadManager
@property (retain, nonatomic) NSObject<FCAVAssetFactoryType> *avAssetFactory; // ivar: _avAssetFactory
@property (retain, nonatomic) NSObject<FCAVAssetKeyCacheType> *avAssetKeyCache; // ivar: _avAssetKeyCache
@property (retain, nonatomic) NSObject<FCAVAssetKeyManagerType> *avAssetKeyManager; // ivar: _avAssetKeyManager
@property (retain, nonatomic) NSObject<FCAVAssetKeyServiceType> *avAssetKeyService; // ivar: _avAssetKeyService
@property (readonly, nonatomic) NSObject<FCAVAssetPrewarming> *avAssetPrewarmer; // ivar: _avAssetPrewarmer
@property (retain, nonatomic) NSObject<FCAVAssetResourceLoaderType> *avAssetResourceLoader; // ivar: _avAssetResourceLoader
@property (readonly, weak, nonatomic) NSObject<FCBackgroundTaskable> *backgroundTaskable; // ivar: _backgroundTaskable
@property (readonly, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (copy, nonatomic) NSString *contentDirectory; // ivar: _contentDirectory
@property (readonly, copy, nonatomic) NSString *contentEnvironmentToken;
@property (readonly, copy, nonatomic) NSString *contentStoreFrontID;
@property (copy, nonatomic) FCContextConfiguration *contextConfiguration; // ivar: _contextConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<FCFeedDatabaseProtocol> *feedDatabase;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager; // ivar: _flintResourceManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FCContentContextInternal *internalContentContext; // ivar: _internalContentContext
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // ivar: _networkBehaviorMonitor
@property (readonly, nonatomic) NSObject<FCPPTContext> *pptContext; // ivar: _pptContext
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property (retain, nonatomic) NSObject<FCNetworkReachabilityRequirement> *supportedCountryNetworkReachabilityRequirement; // ivar: _supportedCountryNetworkReachabilityRequirement
@property (readonly, nonatomic) FCTagController *tagController; // ivar: _tagController


+(void)initialize;
-(id)initWithConfiguration:(id)arg0 configurationManager:(id)arg1 contentDatabase:(id)arg2 contentHostDirectory:(id)arg3 networkBehaviorMonitor:(id)arg4 setupCustomURLProtocols:(BOOL)arg5 desiredHeadlineFieldOptions:(NSUInteger)arg6 feedUsage:(NSInteger)arg7 assetKeyManagerDelegate:(id)arg8 appActivityMonitor:(id)arg9 backgroundTaskable:(id)arg10 pptContext:(id)arg11 ;
-(id)initWithConfiguration:(id)arg0 configurationManager:(id)arg1 contentHostDirectory:(id)arg2 networkBehaviorMonitor:(id)arg3 desiredHeadlineFieldOptions:(NSUInteger)arg4 feedUsage:(NSInteger)arg5 appActivityMonitor:(id)arg6 backgroundTaskable:(id)arg7 pptContext:(id)arg8 ;
-(id)initWithConfiguration:(id)arg0 configurationManager:(id)arg1 contentHostDirectory:(id)arg2 networkBehaviorMonitor:(id)arg3 desiredHeadlineFieldOptions:(NSUInteger)arg4 feedUsage:(NSInteger)arg5 assetKeyManagerDelegate:(id)arg6 appActivityMonitor:(id)arg7 backgroundTaskable:(id)arg8 pptContext:(id)arg9 ;
-(id)interestTokenForContentManifest:(id)arg0 ;
-(id)magazinesConfigurationManager;
-(id)news_core_ConfigurationManager;
-(id)recordSourceWithSchema:(id)arg0 ;
-(id)recordTreeSourceWithRecordSources:(id)arg0 ;
-(void)_updateReachabilityGivenRequirements;
-(void)configurationManager:(id)arg0 configurationDidChange:(id)arg1 ;
-(void)configurationManagerScienceExperimentFieldsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)enableFlushingWithFlushingThreshold:(NSUInteger)arg0 ;
-(void)enableFlushingWithFlushingThreshold:(NSUInteger)arg0 exceptForFlusher:(id)arg1 ;
-(void)networkReachabilityRequirementDidBecomeDirty:(id)arg0 ;
-(void)ppt_overrideFeedEndpoint:(NSInteger)arg0 ;
-(void)ppt_prewarmFeedDatabase;


@end


#endif