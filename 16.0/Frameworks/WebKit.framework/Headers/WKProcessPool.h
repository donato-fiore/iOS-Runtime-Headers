// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKPROCESSPOOL_H
#define WKPROCESSPOOL_H

@class NSURL, NSString;
@protocol WKObject, NSSecureCoding, _WKAutomationDelegate, _WKGeolocationCoreLocationProvider, _WKDownloadDelegate;

#import <Foundation/Foundation.h>

#import "_WKProcessPoolConfiguration.h"
#import "WKGeolocationProviderIOS.h"

@interface WKProcessPool : NSObject <WKObject, NSSecureCoding>

 {
    ObjectStorage<WebKit::WebProcessPool> _processPool;
    WeakObjCPtr<id<_WKAutomationDelegate>> _automationDelegate;
    WeakObjCPtr<id<_WKDownloadDelegate>> _downloadDelegate;
    RetainPtr<_WKAutomationSession> _automationSession;
    RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
    RetainPtr<id<_WKGeolocationCoreLocationProvider>> _coreLocationProvider;
}


@property (readonly) *Object _apiObject;
@property (weak, nonatomic, setter=_setAutomationDelegate:) NSObject<_WKAutomationDelegate> *_automationDelegate;
@property (readonly, nonatomic) _WKProcessPoolConfiguration *_configuration;
@property (nonatomic, getter=_isCookieStoragePartitioningEnabled, setter=_setCookieStoragePartitioningEnabled:) BOOL _cookieStoragePartitioningEnabled;
@property (nonatomic, setter=_setCoreLocationProvider:) NSObject<_WKGeolocationCoreLocationProvider> *_coreLocationProvider;
@property (weak, nonatomic, setter=_setDownloadDelegate:) NSObject<_WKDownloadDelegate> *_downloadDelegate;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (copy, nonatomic, setter=_setJavaScriptConfigurationDirectory:) NSURL *_javaScriptConfigurationDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_lockdownModeEnabledGloballyForTesting;
+(BOOL)supportsSecureCoding;
+(id)_allProcessPoolsForTesting;
+(id)_sharedProcessPool;
+(id)_websiteDataURLForContainerWithURL:(id)arg0 ;
+(id)_websiteDataURLForContainerWithURL:(id)arg0 bundleIdentifierIfNotInContainer:(id)arg1 ;
+(void)_clearCaptivePortalModeEnabledGloballyForTesting;
+(void)_forceGameControllerFramework;
+(void)_setCaptivePortalModeEnabledGloballyForTesting:(BOOL)arg0 ;
+(void)_setLinkedOnOrAfterEverything;
+(void)_setLinkedOnOrAfterEverythingForTesting;
+(void)_setLinkedOnOrBeforeEverythingForTesting;
+(void)_setWebProcessCountLimit:(unsigned int)arg0 ;
-(BOOL)_hasAudibleMediaActivity;
-(BOOL)_hasPrewarmedWebProcess;
-(BOOL)_requestWebProcessTermination:(int)arg0 ;
-(NSUInteger)_maximumSuspendedPageCount;
-(NSUInteger)_numberOfConnectedGameControllerFrameworkGamepadsForTesting;
-(NSUInteger)_numberOfConnectedGamepadsForTesting;
-(NSUInteger)_numberOfConnectedHIDGamepadsForTesting;
-(NSUInteger)_pluginProcessCount;
-(NSUInteger)_processCacheCapacity;
-(NSUInteger)_processCacheSize;
-(NSUInteger)_serviceWorkerProcessCount;
-(NSUInteger)_webPageContentProcessCount;
-(NSUInteger)_webProcessCount;
-(NSUInteger)_webProcessCountIgnoringPrewarmed;
-(NSUInteger)_webProcessCountIgnoringPrewarmedAndCached;
-(id)_downloadURLRequest:(id)arg0 websiteDataStore:(id)arg1 originatingWebView:(id)arg2 ;
-(id)_initWithConfiguration:(id)arg0 ;
-(id)_objectForBundleParameter:(id)arg0 ;
-(id)_resumeDownloadFromData:(id)arg0 websiteDataStore:(id)arg1 path:(id)arg2 originatingWebView:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(int)_gpuProcessIdentifier;
-(int)_prewarmedProcessIdentifier;
-(struct OpaqueWKNotificationManager *)_notificationManagerForTesting;
-(void)_addSupportedPlugin:(id)arg0 named:(id)arg1 withMimeTypes:(id)arg2 withExtensions:(id)arg3 ;
-(void)_automationCapabilitiesDidChange;
-(void)_clearPermanentCredentialsForProtectionSpace:(id)arg0 ;
-(void)_clearSupportedPlugins;
-(void)_clearWebProcessCache;
-(void)_garbageCollectJavaScriptObjectsForTesting;
-(void)_getActivePagesOriginsInWebProcessForTesting:(int)arg0 completionHandler:(id)arg1 ;
-(void)_makeNextWebProcessLaunchFailForTesting;
-(void)_preconnectToServer:(id)arg0 ;
-(void)_registerURLSchemeAsBypassingContentSecurityPolicy:(id)arg0 ;
-(void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)arg0 ;
-(void)_registerURLSchemeAsSecure:(id)arg0 ;
-(void)_seedResourceLoadStatisticsForTestingWithFirstParty:(id)arg0 thirdParty:(id)arg1 shouldScheduleNotification:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_setAllowsSpecificHTTPSCertificate:(id)arg0 forHost:(id)arg1 ;
-(void)_setAutomationSession:(id)arg0 ;
-(void)_setCanHandleHTTPSServerTrustEvaluation:(BOOL)arg0 ;
-(void)_setCookieAcceptPolicy:(NSUInteger)arg0 ;
-(void)_setDomainRelaxationForbiddenForURLScheme:(id)arg0 ;
-(void)_setObject:(id)arg0 forBundleParameter:(id)arg1 ;
-(void)_setObjectsForBundleParametersWithDictionary:(id)arg0 ;
-(void)_setUseSeparateServiceWorkerProcess:(BOOL)arg0 ;
-(void)_setUsesOnlyHIDGamepadProviderForTesting:(BOOL)arg0 ;
-(void)_syncNetworkProcessCookies;
-(void)_terminateAllWebContentProcesses;
-(void)_terminateServiceWorkers;
-(void)_warmInitialProcess;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif