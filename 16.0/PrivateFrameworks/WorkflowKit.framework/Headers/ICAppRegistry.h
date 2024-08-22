// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAPPREGISTRY_H
#define ICAPPREGISTRY_H

@class NSDictionary, NSArray, NSMutableDictionary, NSLock;

#import <Foundation/Foundation.h>

#import "ICApp.h"

@interface ICAppRegistry : NSObject

@property (retain, nonatomic) NSDictionary *actions; // ivar: _actions
@property (readonly, nonatomic) NSArray *allActions;
@property (readonly, nonatomic) NSArray *apps;
@property (retain, nonatomic) NSDictionary *appsDictionary; // ivar: _appsDictionary
@property (readonly, nonatomic) ICApp *currentApp; // ivar: _currentApp
@property (readonly, nonatomic) BOOL isFilled; // ivar: _isFilled
@property (retain, nonatomic) NSMutableDictionary *observersByIdentifier; // ivar: _observersByIdentifier
@property (retain, nonatomic) NSLock *observersLock; // ivar: _observersLock
@property (retain, nonatomic) NSLock *registryLock; // ivar: _registryLock
@property (nonatomic) int urlTypesToken; // ivar: _urlTypesToken


+(id)bundleIdentifierForLegacyAppIdentifier:(id)arg0 ;
+(id)legacyAppIdentifierForBundleIdentifier:(id)arg0 ;
+(id)sharedRegistry;
-(id)_appsWithIdentifiers:(id)arg0 ;
-(id)actionsWithIdentifiers:(id)arg0 ;
-(id)appWithBundleIdentifier:(id)arg0 ;
-(id)appWithIdentifier:(id)arg0 ;
-(id)appWithURLScheme:(id)arg0 ;
-(id)appsWithIdentifiers:(id)arg0 ;
-(id)bundledURL;
-(id)cacheDirectoryURL;
-(id)cacheURL;
-(id)currentVersion;
-(id)description;
-(id)init;
-(void)addInstallStatusObserver:(id)arg0 forAppIdentifiers:(id)arg1 ;
-(void)dealloc;
-(void)deleteCache;
-(void)fillRegistry;
-(void)refreshInstalledApps;
-(void)removeInstallStatusObserver:(id)arg0 forAppIdentifiers:(id)arg1 ;
-(void)updateCache:(id)arg0 ;
-(void)updateRegistry;


@end


#endif