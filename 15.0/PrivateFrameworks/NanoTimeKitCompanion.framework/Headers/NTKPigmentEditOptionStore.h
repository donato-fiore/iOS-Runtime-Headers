// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPIGMENTEDITOPTIONSTORE_H
#define NTKPIGMENTEDITOPTIONSTORE_H

@class NSCache, NSString, CLKDevice, NSMutableDictionary, NSDictionary;
@protocol NTKPigmentPreferenceManagerDelegate, CLKSensitiveUIStateObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKFaceColorPalette.h"
#import "NTKPlistPigmentEditOptionLoader.h"
#import "NTKPigmentPreferenceManager.h"
#import "NTKPigmentPersistentStorageController.h"

@interface NTKPigmentEditOptionStore : NSObject <NTKPigmentPreferenceManagerDelegate, CLKSensitiveUIStateObserver>



@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *listenersByDomain; // ivar: _listenersByDomain
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NTKFaceColorPalette *palette; // ivar: _palette
@property (nonatomic) BOOL persistenceCacheEnabled; // ivar: _persistenceCacheEnabled
@property (retain, nonatomic) NTKPlistPigmentEditOptionLoader *plistLoader; // ivar: _plistLoader
@property (retain, nonatomic) NTKPigmentPreferenceManager *preferenceManager; // ivar: _preferenceManager
@property (nonatomic) BOOL prewarmed; // ivar: _prewarmed
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // ivar: _privateQueue
@property (copy, nonatomic) NSDictionary *sharedCollections; // ivar: _sharedCollections
@property (retain, nonatomic) NTKPigmentPersistentStorageController *storageController; // ivar: _storageController
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)hasAddableCollectionsForDomain:(id)arg0 bundle:(id)arg1 slot:(id)arg2 ;
-(BOOL)isOptionVisible:(id)arg0 ;
-(BOOL)shouldClearPersistanceStoreCache;
-(BOOL)shouldForceResetingPersistentCache;
-(NSUInteger)indexOfOption:(id)arg0 domain:(id)arg1 bundle:(id)arg2 slot:(id)arg3 ;
-(NSUInteger)numberOfOptionsForDomain:(id)arg0 bundle:(id)arg1 slot:(id)arg2 ;
-(id)_companion_loadPigmentSetForDomain:(id)arg0 bundle:(id)arg1 ;
-(id)_loadPigmentSetForDomain:(id)arg0 bundle:(id)arg1 ;
-(id)_migratedOptionForInvalidOption:(id)arg0 collection:(id)arg1 ;
-(id)_normalizeOptionForOption:(id)arg0 domain:(id)arg1 bundle:(id)arg2 slot:(id)arg3 ;
-(id)_watch_loadPigmentSetForDomain:(id)arg0 bundle:(id)arg1 ;
-(id)colorOptionsForDomain:(id)arg0 bundle:(id)arg1 slot:(id)arg2 ;
-(id)defaultColorOptionForDomain:(id)arg0 bundle:(id)arg1 slot:(id)arg2 ;
-(id)defaultGalleryColorsForDomain:(id)arg0 bundle:(id)arg1 ;
-(id)fulfilledOptionForOption:(id)arg0 domain:(id)arg1 bundle:(id)arg2 slot:(id)arg3 ;
-(id)init;
-(id)migratedOptionForInvalidOption:(id)arg0 domain:(id)arg1 bundle:(id)arg2 slot:(id)arg3 ;
-(id)optionAtIndex:(NSUInteger)arg0 domain:(id)arg1 bundle:(id)arg2 slot:(id)arg3 ;
-(id)pigmentSetForDomain:(id)arg0 bundle:(id)arg1 ;
-(void)_autoSelectPigmentsForSharedCollections:(id)arg0 ;
-(void)_autoSelectPigmentsFromFacePigmentSet:(id)arg0 ;
-(void)_companion_setupPersistentStorage;
-(void)_setupPlistLoader;
-(void)addListener:(id)arg0 forDomain:(id)arg1 ;
-(void)colorBundleContentChanged;
-(void)deletePersistenceLayerCache;
-(void)faceBundlesUpdated;
-(void)handleActiveDeviceChangedNotification;
-(void)loadPigmentsForAllFaces;
-(void)notifyListenersStoreContentChanged;
-(void)pigmentPreferenceManagerDidUpdateSelectedColors:(id)arg0 ;
-(void)prewarmCacheForAllFaces;
-(void)removeListener:(id)arg0 forDomain:(id)arg1 ;
-(void)savePersistentCacheVersion;
-(void)sensitiveUIStateChanged;
-(void)setIgnoreSensitiveUIItems:(BOOL)arg0 ;
-(void)setIncludesAllDeviceSpecificColors:(BOOL)arg0 ;
-(void)setOption:(id)arg0 visible:(BOOL)arg1 ;


@end


#endif