// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPCLOUDDEFAULTS_H
#define HDSPCLOUDDEFAULTS_H

@class NSUbiquitousKeyValueStore, HKSPAccumulator, NSString;
@protocol HDSPNotificationObserver, HDSPSyncedUserDefaults, HDSPSyncedUserDefaultsExternalChangeDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPSyncedDefaultsConfiguration.h"

@interface HDSPCloudDefaults : NSObject <HDSPNotificationObserver, HDSPSyncedUserDefaults>

 {
    HDSPEnvironment *_environment;
    HDSPSyncedDefaultsConfiguration *_configuration;
    NSUbiquitousKeyValueStore *_store;
    HKSPAccumulator *_accumulator;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSyncedUserDefaultsExternalChangeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hksp_boolForKey:(id)arg0 ;
-(NSInteger)hksp_integerForKey:(id)arg0 ;
-(float)hksp_floatForKey:(id)arg0 ;
-(id)_createKVS;
-(id)hksp_dataForKey:(id)arg0 ;
-(id)hksp_dictionaryRepresentation;
-(id)hksp_dictionaryRepresentationForKeys:(id)arg0 ;
-(id)hksp_objectForKey:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 configuration:(id)arg1 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(void)hdsp_forceSynchronizeWithCompletion:(id)arg0 ;
-(void)hdsp_setExternalChangeDelegate:(id)arg0 ;
-(void)hksp_removeObjectForKey:(id)arg0 ;
-(void)hksp_removeObjectsForKeys:(id)arg0 ;
-(void)hksp_reset;
-(void)hksp_saveDictionary:(id)arg0 ;
-(void)hksp_setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)hksp_setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)hksp_setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)hksp_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)hksp_synchronize;
-(void)hksp_synchronizeKeys:(id)arg0 ;
-(void)keyValueStoreDidChange:(id)arg0 ;


@end


#endif