// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSAPPINFOCACHE_H
#define DNDSAPPINFOCACHE_H

@class NSSet, NSMutableSet, NSMutableDictionary, NSURLSession, NSString;
@protocol DNDSKeybagStateObserver, LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue, DNDSKeybagStateProviding;

#import <Foundation/Foundation.h>


@interface DNDSAppInfoCache : NSObject <DNDSKeybagStateObserver, LSApplicationWorkspaceObserverProtocol>

 {
    NSSet *_monitoredBundleIdentifiers;
    NSSet *_relevantBundleIdentifiers;
    NSMutableSet *_inflightBundleIdentifiers;
    NSMutableDictionary *_appInfoByBundleIdentifier;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSKeybagStateProviding> *_keybag;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_fallbackAppInfoByBundleIdentifier;
-(id)_cacheURL;
-(id)_fallbackAppInfoForBundleIdentifier:(id)arg0 ;
-(id)_installedBundleIdentifiers;
-(id)_parseAppStoreResponseForBundleIdentifiers:(id)arg0 response:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(id)_queue_bundleIdentifiersWithMissingInfo;
-(id)appInfoForBundleIdentifier:(id)arg0 ;
-(id)appInfoForBundleIdentifiers:(id)arg0 ;
-(id)initWithKeybag:(id)arg0 ;
-(void)_fetchAppStoreInfoForBundleIdentifiers:(id)arg0 timeoutInterval:(CGFloat)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_fetchIconForAppInfo:(id)arg0 timeoutInterval:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)_fetchIconsForAppInfo:(id)arg0 timeoutInterval:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)_queue_fetchMissingAppInfo;
-(void)_queue_monitorBundleIdentifiers:(id)arg0 ;
-(void)_queue_read;
-(void)_queue_removeCachedDataForAppInfo:(id)arg0 ;
-(void)_queue_removeUnusedAppInfo;
-(void)_queue_write;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)keybagDidUnlockForTheFirstTime:(id)arg0 ;
-(void)monitorApplicationIdentifiers:(id)arg0 ;


@end


#endif