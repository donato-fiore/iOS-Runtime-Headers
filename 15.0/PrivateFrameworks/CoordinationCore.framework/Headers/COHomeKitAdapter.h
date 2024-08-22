// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COHOMEKITADAPTER_H
#define COHOMEKITADAPTER_H

@class NSCondition, NSString, HMHomeManager;
@protocol HMHomeManagerDelegate, HMHomeDelegatePrivate;

#import <Foundation/Foundation.h>


@interface COHomeKitAdapter : NSObject <HMHomeManagerDelegate, HMHomeDelegatePrivate>

 {
    os_unfair_lock_s _lock;
    BOOL _ready;
}


@property (readonly, nonatomic) NSCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHomeManager *homekit; // ivar: _homekit
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isAlarmsCollectionSetting:(id)arg0 forAccessory:(id)arg1 ;
-(BOOL)isReady;
-(id)accessoriesForSiriContextTargetReference:(id)arg0 ;
-(id)accessoriesInMediaSystem:(id)arg0 ;
-(id)accessoriesInRoom:(id)arg0 ;
-(id)accessoriesInZone:(id)arg0 ;
-(id)accessorySettingForDistantAccessorySetting:(id)arg0 ;
-(id)accessoryWithUniqueIdentifier:(id)arg0 ;
-(id)addAlarm:(id)arg0 toAccessory:(id)arg1 ;
-(id)alarmsCollectionForAccessory:(id)arg0 isMediaSystem:(*BOOL)arg1 ;
-(id)alarmsForAccessory:(id)arg0 ;
-(id)allAccessoriesForSiriContextTargetReference:(id)arg0 ;
-(id)currentAccessory;
-(id)distantAccessorySettingForAccessorySetting:(id)arg0 onAccessory:(id)arg1 ;
-(id)distantSettingsForKeyPath:(id)arg0 onAccessory:(id)arg1 ;
-(id)init;
-(id)initWithHomeManager:(id)arg0 ;
-(id)mediaSystemForAccessory:(id)arg0 ;
-(id)removeAlarm:(id)arg0 fromAccessory:(id)arg1 ;
-(id)roomForAccessory:(id)arg0 ;
-(id)settingsForKeyPath:(id)arg0 fromSettings:(id)arg1 ;
-(id)settingsForKeyPath:(id)arg0 onAccessory:(id)arg1 ;
-(id)settingsForKeyPath:(id)arg0 onMediaObject:(id)arg1 ;
-(id)updateAlarm:(id)arg0 onAccessory:(id)arg1 ;
-(id)zoneForAccessory:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didAddRoom:(id)arg1 ;
-(void)home:(id)arg0 didAddRoom:(id)arg1 toZone:(id)arg2 ;
-(void)home:(id)arg0 didAddZone:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 ;
-(void)home:(id)arg0 didRemoveZone:(id)arg1 ;
-(void)home:(id)arg0 didUpdateRoom:(id)arg1 forAccessory:(id)arg2 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didUpdateAuthorizationStatus:(NSUInteger)arg1 ;
-(void)homeManager:(id)arg0 didUpdateStatus:(NSUInteger)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;


@end


#endif