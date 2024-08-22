// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSYNCEDDEFAULTS_H
#define HDSPSYNCEDDEFAULTS_H

@class NSMutableSet, HKSPAccumulator, NSString;
@protocol HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPSyncedUserDefaults, HKSPUserDefaults;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPSyncedDefaultsConfiguration.h"

@interface HDSPSyncedDefaults : NSObject <HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPSyncedUserDefaults>

 {
    HDSPEnvironment *_environment;
    HDSPSyncedDefaultsConfiguration *_configuration;
    id<HKSPUserDefaults> *_localDefaults;
    id<HDSPSyncedUserDefaults> *_nanoDefaults;
    id<HDSPSyncedUserDefaults> *_cloudDefaults;
    NSMutableSet *_keysNeedingSynchronize;
    HKSPAccumulator *_syncAccumulator;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSyncedUserDefaultsExternalChangeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsInitialSync; // ivar: _needsInitialSync
@property (nonatomic) BOOL needsSyncFromCloud; // ivar: _needsSyncFromCloud
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL syncDisabled;


-(BOOL)hksp_boolForKey:(id)arg0 ;
-(NSInteger)hksp_integerForKey:(id)arg0 ;
-(float)hksp_floatForKey:(id)arg0 ;
-(id)_cloudDefaultsProvider:(SEL)arg0 ;
-(id)_defaultsForKey:(id)arg0 ;
-(id)_nanoDefaultsProvider:(SEL)arg0 ;
-(id)cloudKitDefaultsDictionaryRepresentation;
-(id)hksp_dataForKey:(id)arg0 ;
-(id)hksp_dictionaryRepresentation;
-(id)hksp_dictionaryRepresentationForKeys:(id)arg0 ;
-(id)hksp_objectForKey:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 configuration:(id)arg1 ;
// -(id)initWithEnvironment:(id)arg0 configuration:(id)arg1 nanoDefaultsProvider:(id)arg2 cloudDefaultsProvider:(unk)arg3 throttleInterval:(id)arg4  ;
-(id)localDefaultsDictionaryRepresentation;
-(void)_cloudDefaultsDidReceiveExternalChange;
-(void)_cloudDefaultsDidReceiveExternalChangeForKeys:(id)arg0 ;
-(void)_differentialCloudKitSync;
-(void)_differentialCloudKitSyncForKeySet:(id)arg0 ;
-(void)_hksp_synchronizeKeys:(id)arg0 ;
-(void)_initialCloudKitSync;
-(void)_nanoDefaultsDidReceiveExternalChange;
-(void)_nanoDefaultsDidReceiveExternalChangeForKeys:(id)arg0 ;
-(void)_setDefaultForKey:(id)arg0 setBlock:(id)arg1 ;
// -(void)_setDefaultForKey:(id)arg0 setBlock:(id)arg1 syncToCloudKit:(unk)arg2  ;
-(void)_syncCloudKitToLocal;
-(void)_syncKeysFromCloudKit:(id)arg0 ;
-(void)_syncKeysToCloudKit:(id)arg0 ;
-(void)_syncLocalToCloudKit;
-(void)_throttled_synchronizeKeys:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)hdsp_forceSynchronizeWithCompletion:(id)arg0 ;
-(void)hdsp_setExternalChangeDelegate:(id)arg0 ;
-(void)hksp_removeObjectForKey:(id)arg0 ;
-(void)hksp_removeObjectsForKeys:(id)arg0 ;
-(void)hksp_removeObjectsForKeys:(id)arg0 syncToCloudKit:(BOOL)arg1 ;
-(void)hksp_reset;
-(void)hksp_saveDictionary:(id)arg0 ;
-(void)hksp_saveDictionary:(id)arg0 syncToCloudKit:(BOOL)arg1 ;
-(void)hksp_setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)hksp_setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)hksp_setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)hksp_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)hksp_synchronize;
-(void)hksp_synchronizeKeys:(id)arg0 ;
-(void)resetCloudData;
-(void)saveCloudDataVersion;
-(void)saveDataVersion;
-(void)syncedUserDefaults:(id)arg0 didChangeExternallyForKeys:(id)arg1 ;
-(void)syncedUserDefaultsDidChangeExternally:(id)arg0 ;


@end


#endif