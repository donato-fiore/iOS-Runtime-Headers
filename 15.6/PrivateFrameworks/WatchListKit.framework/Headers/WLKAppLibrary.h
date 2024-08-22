// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKAPPLIBRARY_H
#define WLKAPPLIBRARY_H

@class NSDictionary, NSArray, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    NSDictionary *_appProxies;
    NSArray *_allAppBundleIdentifiers;
    NSArray *_installedAppBundleIdentifiers;
    NSArray *_subscribedAppBundleIdentifiers;
    NSArray *_testAppBundleIdentifiers;
    NSArray *_nonConformingAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    BOOL _appLibraryNeedsRefresh;
    NSInteger _ignoreAppLibraryChangesCount;
    int _didChangeNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultAppLibrary;
-(BOOL)isTVAppInstalled;
-(id)_bundleIdentifiersfromProxies:(id)arg0 ;
-(id)_nonConformingAppBundleIdentifiers;
-(id)_nonConformingAppProxies;
-(id)_refreshAppLibrary;
-(id)_subscriptionInfosForProxies:(id)arg0 ;
-(id)allAppBundleIdentifiers;
-(id)allAppProxies;
-(id)dictionaryRepresentation;
-(id)init;
-(id)installedAppBundleIdentifiers;
-(id)installedAppProxies;
-(id)localizedNameForBundle:(id)arg0 ;
-(id)refresh;
-(id)subscribedAppBundleIdentifiers;
-(id)subscribedAppProxies;
-(id)subscriptionInfoForBundle:(id)arg0 ;
-(id)testAppBundleIdentifiers;
-(id)testAppProxies;
-(void)_handleInvalidationWithReason:(id)arg0 ;
-(void)_subscriptionsDidChangeNotification:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)beginIgnoringAppLibraryChanges;
-(void)dealloc;
-(void)endIgnoringAppLibraryChanges;


@end


#endif