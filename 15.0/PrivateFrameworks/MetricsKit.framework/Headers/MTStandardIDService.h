// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSTANDARDIDSERVICE_H
#define MTSTANDARDIDSERVICE_H

@class NSString, NSMutableDictionary, NSNumber;
@protocol MTIDService, MTIDSecretStore;

#import <Foundation/Foundation.h>

#import "MTInterprocessChangeNotifier.h"
#import "MTIDCache.h"
#import "MTPromise.h"

@interface MTStandardIDService : NSObject <MTIDService>



@property (retain, nonatomic) MTInterprocessChangeNotifier *accountChanged; // ivar: _accountChanged
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (retain, nonatomic) NSMutableDictionary *associatedObjects; // ivar: _associatedObjects
@property (retain, nonatomic) MTIDCache *cache; // ivar: _cache
@property (retain, nonatomic) MTPromise *configPromise; // ivar: _configPromise
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *defaultDSID; // ivar: _defaultDSID
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *dsId; // ivar: _dsId
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTIDSecretStore> *secretStore; // ivar: _secretStore
@property (readonly) Class superclass;


+(BOOL)isTinkerPaired;
+(id)localCachePath;
+(id)writeDebugData:(id)arg0 toFileWithNameFormat:(id)arg1 ;
+(void)registerInterprocessChangeNotifier:(id)arg0 ;
+(void)setLocalCachePath:(id)arg0 ;
+(void)triggerInterprocessChangeNotifier:(id)arg0 ;
-(id)IDFieldsForTopic:(id)arg0 options:(id)arg1 ;
-(id)IDForTopic:(id)arg0 type:(NSInteger)arg1 options:(id)arg2 ;
-(id)IDInfoForNamespace:(id)arg0 options:(id)arg1 fromConfig:(id)arg2 ;
-(id)IDsForNamespaces:(id)arg0 options:(id)arg1 fromConfig:(id)arg2 ;
-(id)filledOptions:(id)arg0 ;
-(id)generateIDInfo:(id)arg0 secret:(id)arg1 dsId:(id)arg2 correlationIDs:(id)arg3 ;
-(id)init;
-(id)initWithAMSBag:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConfigPromise:(id)arg0 ;
-(id)resetIDForTopics:(id)arg0 options:(id)arg1 ;
-(void)IDFieldsForTopic:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_clearLocalData;
-(void)_getConfig;
-(void)_getIDs;
-(void)_getSecrets;
-(void)_resetIDs;
-(void)dealloc;
-(void)handleAccountNotification;
-(void)handleApplicationStateChange:(id)arg0 ;
-(void)handleRecordNotification;
-(void)handleResetNotification:(id)arg0 ;
-(void)maybeSubscribeToDarwinNotifications;
-(void)performMaintenanceWithCompletion:(id)arg0 ;
-(void)queryIDForTopic:(id)arg0 type:(NSInteger)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)resetIDForTopics:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)setConfig:(id)arg0 ;


@end


#endif