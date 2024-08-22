// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKWEBSITEDATASTORE_H
#define WKWEBSITEDATASTORE_H

@class NSString, NSURL, NSDictionary;
@protocol WKObject, NSSecureCoding, _WKWebsiteDataStoreDelegate;

#import <Foundation/Foundation.h>

#import "_WKWebsiteDataStoreConfiguration.h"
#import "WKHTTPCookieStore.h"

@interface WKWebsiteDataStore : NSObject <WKObject, NSSecureCoding>

 {
    ObjectStorage<WebKit::WebsiteDataStore> _websiteDataStore;
    WeakObjCPtr<id<_WKWebsiteDataStoreDelegate>> _delegate;
}


@property (nonatomic, setter=_setAllowsCellularAccess:) BOOL _allowsCellularAccess;
@property (nonatomic, setter=_setAllowsTLSFallback:) BOOL _allowsTLSFallback;
@property (readonly) *Object _apiObject;
@property (nonatomic, setter=_setBoundInterfaceIdentifier:) NSString *_boundInterfaceIdentifier;
@property (readonly, copy, nonatomic) _WKWebsiteDataStoreConfiguration *_configuration;
@property (weak, nonatomic) NSObject<_WKWebsiteDataStoreDelegate> *_delegate;
@property (readonly, nonatomic) NSURL *_indexedDBDatabaseDirectory;
@property (nonatomic, setter=_setPerOriginStorageQuota:) NSUInteger _perOriginStorageQuota;
@property (nonatomic, setter=_setProxyConfiguration:) NSDictionary *_proxyConfiguration;
@property (nonatomic, setter=_setResourceLoadStatisticsDebugMode:) BOOL _resourceLoadStatisticsDebugMode;
@property (nonatomic, setter=_setResourceLoadStatisticsEnabled:) BOOL _resourceLoadStatisticsEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WKHTTPCookieStore *httpCookieStore;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly) Class superclass;


+(BOOL)_defaultDataStoreExists;
+(BOOL)_defaultNetworkProcessExists;
+(BOOL)supportsSecureCoding;
+(id)_allWebsiteDataTypesIncludingPrivate;
+(id)allWebsiteDataTypes;
+(id)defaultDataStore;
+(id)nonPersistentDataStore;
+(void)_allowWebsiteDataRecordsForAllOrigins;
+(void)_deleteDefaultDataStoreForTesting;
+(void)_makeNextNetworkProcessLaunchFailForTesting;
+(void)_setCachedProcessSuspensionDelayForTesting:(CGFloat)arg0 ;
+(void)_setNetworkProcessSuspensionAllowedForTesting:(BOOL)arg0 ;
-(BOOL)_hasRegisteredServiceWorker;
-(BOOL)_hasServiceWorkerBackgroundActivityForTesting;
-(BOOL)_networkProcessExists;
-(BOOL)_networkProcessHasEntitlementForTesting:(id)arg0 ;
-(id)_initWithConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(int)_networkProcessIdentifier;
-(void)_allowTLSCertificateChain:(id)arg0 forHost:(id)arg1 ;
-(void)_appBoundDomains:(id)arg0 ;
-(void)_appBoundSchemes:(id)arg0 ;
-(void)_clearLoadedSubresourceDomainsFor:(id)arg0 ;
-(void)_clearPrevalentDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)_clearResourceLoadStatistics:(id)arg0 ;
-(void)_closeDatabases:(id)arg0 ;
-(void)_countNonDefaultSessionSets:(id)arg0 ;
-(void)_deletePushAndNotificationRegistration:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchDataRecordsOfTypes:(id)arg0 withOptions:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_getAllStorageAccessEntriesFor:(id)arg0 completionHandler:(id)arg1 ;
-(void)_getIsPrevalentDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)_getOriginsWithPushAndNotificationPermissions:(id)arg0 ;
-(void)_getPendingPushMessages:(id)arg0 ;
-(void)_getResourceLoadStatisticsDataSummary:(id)arg0 ;
-(void)_isRegisteredAsSubresourceUnderFirstParty:(id)arg0 thirdParty:(id)arg1 completionHandler:(id)arg2 ;
-(void)_isRelationshipOnlyInDatabaseOnce:(id)arg0 thirdParty:(id)arg1 completionHandler:(id)arg2 ;
-(void)_loadedSubresourceDomainsFor:(id)arg0 completionHandler:(id)arg1 ;
-(void)_logUserInteraction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_processPushMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)_processStatisticsAndDataRecords:(id)arg0 ;
-(void)_renameOrigin:(id)arg0 to:(id)arg1 forDataOfTypes:(id)arg2 completionHandler:(id)arg3 ;
-(void)_scheduleCookieBlockingUpdate:(id)arg0 ;
-(void)_sendNetworkProcessDidResume;
-(void)_sendNetworkProcessPrepareToSuspend:(id)arg0 ;
-(void)_sendNetworkProcessWillSuspendImminently;
-(void)_setPrevalentDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)_setPrivateClickMeasurementDebugModeEnabledForTesting:(BOOL)arg0 ;
-(void)_setResourceLoadStatisticsTestingCallback:(id)arg0 ;
-(void)_setThirdPartyCookieBlockingMode:(BOOL)arg0 onlyOnSitesWithoutUserInteraction:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_statisticsDatabaseHasAllTables:(id)arg0 ;
-(void)_synthesizeAppIsBackground:(BOOL)arg0 ;
-(void)_terminateNetworkProcess;
-(void)_trustServerForLocalPCMTesting:(struct __SecTrust *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchDataRecordsOfTypes:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDataOfTypes:(id)arg0 forDataRecords:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeDataOfTypes:(id)arg0 modifiedSince:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif