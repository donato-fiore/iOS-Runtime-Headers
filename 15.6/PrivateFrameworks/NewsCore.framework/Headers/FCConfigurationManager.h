// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCONFIGURATIONMANAGER_H
#define FCCONFIGURATIONMANAGER_H

@class RCConfigurationManager, NSString, NSDictionary, NSData, NSHashTable, NSArray;
@protocol FCFeldsparIDProviderObserving, FCNewsAppConfigurationManager, FCCoreConfigurationManager, FCMagazinesConfigurationManager, FCTodayFeedConfigurationManager, FCAudioFeedConfigManager, FCFeldsparIDProvider, OS_dispatch_queue, FCNewsAppConfiguration, FCCoreConfiguration, FCNewsAppConfiguration><FCJSONEncodableObjectProviding;

#import <Foundation/Foundation.h>

#import "FCContextConfiguration.h"
#import "FCAsyncSerialQueue.h"
#import "FCKeyValueStore.h"
#import "FCNewsAppConfig.h"

@interface FCConfigurationManager : NSObject <FCFeldsparIDProviderObserving, FCNewsAppConfigurationManager, FCCoreConfigurationManager, FCMagazinesConfigurationManager, FCTodayFeedConfigurationManager, FCAudioFeedConfigManager>

 {
    BOOL _shouldIgnoreCache;
    BOOL _attemptedAppConfigFetch;
    BOOL _runningUnitTests;
    RCConfigurationManager *_remoteConfigurationManager;
    FCContextConfiguration *_contextConfiguration;
    id<FCFeldsparIDProvider> *_feldsparIDProvider;
    NSString *_appShortVersionString;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_appConfigFetchQueue;
    FCAsyncSerialQueue *_remoteConfigManagerSerialQueue;
    FCKeyValueStore *_localStore;
    FCNewsAppConfig *_currentAppConfiguration;
    NSDictionary *_cachedWidgetConfigurationDict;
    NSData *_currentMagazinesConfiguration;
    NSData *_currentTodayFeedConfiguration;
    NSData *_currentAudioFeedConfiguration;
    NSHashTable *_appConfigObservers;
    NSHashTable *_coreConfigObservers;
}


@property (readonly, nonatomic) NSObject<FCNewsAppConfiguration> *appConfiguration;
@property (readonly, nonatomic) NSData *audioFeedConfigData;
@property (readonly, nonatomic) NSObject<FCCoreConfiguration> *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *feldsparID;
@property (readonly, nonatomic) NSObject<FCNewsAppConfiguration> *fetchedAppConfiguration;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCNewsAppConfiguration><FCJSONEncodableObjectProviding> *jsonEncodableAppConfiguration;
@property (readonly, nonatomic) NSData *magazinesConfigurationData;
@property (readonly, nonatomic) NSObject<FCNewsAppConfiguration> *possiblyUnfetchedAppConfiguration;
@property (copy, nonatomic) NSArray *segmentSetIDs; // ivar: _segmentSetIDs
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *todayFeedConfigurationData;
@property (copy, nonatomic) NSArray *treatmentIDs; // ivar: _treatmentIDs


-(id)init;
-(id)initForTesting;
-(id)initWithContextConfiguration:(id)arg0 contentHostDirectoryFileURL:(id)arg1 feldsparIDProvider:(id)arg2 ;
-(id)initWithContextConfiguration:(id)arg0 contentHostDirectoryFileURL:(id)arg1 feldsparIDProvider:(id)arg2 appShortVersionString:(id)arg3 ;
-(void)addAppConfigObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)feldsparIDProviderDidChangeFeldsparID:(id)arg0 ;
-(void)fetchAppConfigurationIfNeededWithCompletion:(id)arg0 ;
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)fetchAppWidgetConfigurationWithAdditionalFields:(id)arg0 completion:(id)arg1 ;
-(void)fetchAudioFeedConfigIfNeededWithCompletionQueue:(id)arg0 formatVersion:(id)arg1 completion:(id)arg2 ;
-(void)fetchConfigurationIfNeededWithCompletion:(id)arg0 ;
-(void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg0 formatVersion:(id)arg1 completion:(id)arg2 ;
-(void)fetchTodayFeedConfigurationIfNeededWithCompletionQueue:(id)arg0 feedType:(NSUInteger)arg1 formatVersion:(id)arg2 completion:(id)arg3 ;
-(void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg0 refreshCompletion:(id)arg1 ;
-(void)removeAppConfigObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif