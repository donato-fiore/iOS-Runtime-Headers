// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPNANODEFAULTS_H
#define HDSPNANODEFAULTS_H

@class NPSManager, HKSPThrottler, NSString, NPSDomainAccessor;
@protocol HDSPNotificationObserver, HDSPSyncedUserDefaults, OS_dispatch_queue, HDSPSyncedUserDefaultsExternalChangeDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPSyncedDefaultsConfiguration.h"

@interface HDSPNanoDefaults : NSObject <HDSPNotificationObserver, HDSPSyncedUserDefaults>

 {
    HDSPEnvironment *_environment;
    HDSPSyncedDefaultsConfiguration *_configuration;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_npsDomainAccessorQueue;
    HKSPThrottler *_notifyThrottler;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSyncedUserDefaultsExternalChangeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NPSDomainAccessor *npsDomainAccessor; // ivar: _npsDomainAccessor
@property (readonly) Class superclass;


-(BOOL)hksp_boolForKey:(id)arg0 ;
-(NSInteger)hksp_integerForKey:(id)arg0 ;
-(float)hksp_floatForKey:(id)arg0 ;
-(id)hksp_dataForKey:(id)arg0 ;
-(id)hksp_dictionaryRepresentation;
-(id)hksp_dictionaryRepresentationForKeys:(id)arg0 ;
-(id)hksp_objectForKey:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 configuration:(id)arg1 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(void)_handleActivePairedDeviceDidChange:(id)arg0 ;
-(void)_handleNanoPreferencesSync;
-(void)_registerForNotifications;
-(void)_resetNPSDomainAccessor;
-(void)hdsp_forceSynchronizeWithCompletion:(id)arg0 ;
-(void)hdsp_setExternalChangeDelegate:(id)arg0 ;
-(void)hksp_removeObjectForKey:(id)arg0 ;
-(void)hksp_removeObjectsForKeys:(id)arg0 ;
-(void)hksp_saveDictionary:(id)arg0 ;
-(void)hksp_setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)hksp_setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)hksp_setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)hksp_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)hksp_synchronize;
-(void)hksp_synchronizeKeys:(id)arg0 ;


@end


#endif