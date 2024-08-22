// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKWEBSITEDATASTORECONFIGURATION_H
#define _WKWEBSITEDATASTORECONFIGURATION_H

@class NSURL, NSString, NSDictionary;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKWebsiteDataStoreConfiguration : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebsiteDataStoreConfiguration> _configuration;
}


@property (readonly) *Object _apiObject;
@property (copy, nonatomic, setter=_setCacheStorageDirectory:) NSURL *_cacheStorageDirectory;
@property (copy, nonatomic, setter=_setCookieStorageFile:) NSURL *_cookieStorageFile;
@property (copy, nonatomic, setter=_setIndexedDBDatabaseDirectory:) NSURL *_indexedDBDatabaseDirectory;
@property (copy, nonatomic, setter=_setResourceLoadStatisticsDirectory:) NSURL *_resourceLoadStatisticsDirectory;
@property (copy, nonatomic, setter=_setServiceWorkerRegistrationDirectory:) NSURL *_serviceWorkerRegistrationDirectory;
@property (nonatomic, setter=_setShouldAcceptInsecureCertificatesForWebSockets:) BOOL _shouldAcceptInsecureCertificatesForWebSockets;
@property (copy, nonatomic, setter=_setWebSQLDatabaseDirectory:) NSURL *_webSQLDatabaseDirectory;
@property (copy, nonatomic, setter=_setWebStorageDirectory:) NSURL *_webStorageDirectory;
@property (nonatomic) BOOL allLoadsBlockedByDeviceManagementRestrictionsForTesting;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsHSTSWithUntrustedRootCertificate;
@property (nonatomic) BOOL allowsServerPreconnect;
@property (copy, nonatomic) NSURL *alternativeServicesStorageDirectory;
@property (copy, nonatomic) NSURL *applicationCacheDirectory;
@property (copy, nonatomic) NSString *applicationCacheFlatFileSubdirectoryName;
@property (copy, nonatomic) NSString *boundInterfaceIdentifier;
@property (copy, nonatomic) NSString *dataConnectionServiceType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *deviceIdHashSaltsStorageDirectory;
@property (nonatomic) BOOL deviceManagementRestrictionsEnabled;
@property (nonatomic) BOOL enableInAppBrowserPrivacyForTesting;
@property (nonatomic) BOOL fastServerTrustEvaluationEnabled;
@property (copy, nonatomic) NSURL *generalStorageDirectory;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=setHSTSStorageDirectory:) NSURL *hstsStorageDirectory;
@property (copy, nonatomic, setter=setHTTPProxy:) NSURL *httpProxy;
@property (copy, nonatomic, setter=setHTTPSProxy:) NSURL *httpsProxy;
@property (nonatomic) BOOL legacyTLSEnabled;
@property (copy, nonatomic) NSURL *mediaCacheDirectory;
@property (copy, nonatomic) NSURL *mediaKeysStorageDirectory;
@property (copy, nonatomic) NSURL *networkCacheDirectory;
@property (nonatomic) BOOL networkCacheSpeculativeValidationEnabled;
@property (nonatomic) NSUInteger overrideServiceWorkerRegistrationCountTestingValue;
@property (copy, nonatomic, setter=setPCMMachServiceName:) NSString *pcmMachServiceName;
@property (nonatomic) NSUInteger perOriginStorageQuota;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (nonatomic) BOOL preventsSystemHTTPProxyAuthentication;
@property (copy, nonatomic) NSURL *privateClickMeasurementStorageDirectory;
@property (copy, nonatomic) NSDictionary *proxyConfiguration;
@property (nonatomic) BOOL requiresSecureHTTPSProxyConnection;
@property (nonatomic) BOOL serviceWorkerProcessTerminationDelayEnabled;
@property (nonatomic) BOOL shouldRunServiceWorkersOnMainThreadForTesting;
@property (nonatomic) BOOL shouldUseCustomStoragePaths;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (copy, nonatomic) NSURL *standaloneApplicationURL;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesConnectionTerminationOnSystemChange;
@property (nonatomic) NSUInteger testSpeedMultiplier;
@property (nonatomic) BOOL webPushDaemonUsesMockBundlesForTesting;
@property (copy, nonatomic, setter=setWebPushMachServiceName:) NSString *webPushMachServiceName;


-(id)init;
-(id)initNonPersistentConfiguration;
-(void)dealloc;


@end


#endif