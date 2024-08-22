// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPANIONAPPLIBRARY_H
#define NTKCOMPANIONAPPLIBRARY_H

@class NSArray, NSHashTable, NSString, CLKDevice, NSIndexSet, NSSet, NSRecursiveLock, NSMutableArray;
@protocol NTKCompanionAppDelegate, LSApplicationWorkspaceObserverProtocol, ACXDeviceConnectionDelegate, NTKSystemAppStateCache, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKCompanionAppLibrary : NSObject <NTKCompanionAppDelegate, LSApplicationWorkspaceObserverProtocol, ACXDeviceConnectionDelegate, NTKSystemAppStateCache>



@property (retain, nonatomic) NSArray *allApps; // ivar: _allApps
@property (nonatomic) BOOL appConduitLoaded; // ivar: _appConduitLoaded
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appProcessingQueue; // ivar: _appProcessingQueue
@property (retain, nonatomic) NSHashTable *changeObservers; // ivar: _changeObservers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (copy, nonatomic) NSIndexSet *disabledComplicationTypesCache; // ivar: _disabledComplicationTypesCache
@property (retain, nonatomic) NSArray *firstPartyApps; // ivar: _firstPartyApps
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *installedSystemApplicationIdentifiers; // ivar: _installedSystemApplicationIdentifiers
@property (retain, nonatomic) NSRecursiveLock *internalLock; // ivar: _internalLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerCallbackQueue; // ivar: _observerCallbackQueue
@property (retain, nonatomic) NSMutableArray *prewarmCallbacks; // ivar: _prewarmCallbacks
@property (readonly, nonatomic) *os_unfair_lock_s prewarmLock; // ivar: _prewarmLock
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *thirdPartyApps; // ivar: _thirdPartyApps
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateProcessingQueue; // ivar: _updateProcessingQueue
@property (retain, nonatomic) NSArray *watchSystemApps; // ivar: _watchSystemApps


+(id)sharedAppLibrary;
-(BOOL)isRemovedSystemApp:(id)arg0 ;
-(BOOL)isRestrictedSystemApp:(id)arg0 ;
-(id)disabledComplicationTypes;
-(id)init;
-(void)_activeDeviceChanged;
-(void)_load;
-(void)_loadApps;
-(void)_loadWatchApps;
-(void)_notifyAppAdded:(id)arg0 ;
-(void)_notifyAppIconUpdated:(id)arg0 ;
-(void)_notifyAppRemoved:(id)arg0 ;
-(void)_notifyAppUpdated:(id)arg0 ;
-(void)_queue_loadApps;
-(void)addObserver:(id)arg0 ;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsInstalled:(id)arg0 onDeviceWithPairingID:(id)arg1 ;
-(void)applicationsUninstalled:(id)arg0 onDeviceWithPairingID:(id)arg1 ;
-(void)applicationsUpdated:(id)arg0 onDeviceWithPairingID:(id)arg1 ;
-(void)companionAppUpdatedIcon:(id)arg0 ;
-(void)companionAppWasUpdated:(id)arg0 ;
-(void)dealloc;
-(void)prewarmCompanionDaemonWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif