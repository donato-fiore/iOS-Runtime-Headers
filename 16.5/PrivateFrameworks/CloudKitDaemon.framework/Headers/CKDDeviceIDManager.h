// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDDEVICEIDMANAGER_H
#define CKDDEVICEIDMANAGER_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDDeviceIDManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceIDsByContainerIdentifierByContainerEnvironment; // ivar: _deviceIDsByContainerIdentifierByContainerEnvironment
@property (retain, nonatomic) NSString *globalDeviceID; // ivar: _globalDeviceID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL useLegacyKeychain; // ivar: _useLegacyKeychain


+(id)sharedManager;
-(id)_globalService;
-(id)_perServicelookupKeyForContainer:(id)arg0 ;
-(id)_savedDeviceIdentifierForService:(id)arg0 lookupKey:(id)arg1 success:(*BOOL)arg2 ;
-(id)_serviceForContainer:(id)arg0 ;
-(id)deviceIDsByContainerIdentifierInContainerEnvironment:(NSInteger)arg0 ;
-(id)deviceIdentifierForContainer:(id)arg0 ;
-(id)deviceIdentifierForContainer:(id)arg0 skipInMemoryCache:(BOOL)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)globalDeviceIdentifier;
-(id)globalDeviceIdentifierSkipInMemoryCache:(BOOL)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)init;
-(struct __CFDictionary *)createQueryForService:(id)arg0 lookupKey:(id)arg1 ;
-(void)_deleteDeviceIdentifierForContainer:(id)arg0 ;
-(void)_saveDeviceIdentifier:(id)arg0 forContainer:(id)arg1 ;
-(void)_saveDeviceIdentifier:(id)arg0 forService:(id)arg1 lookupKey:(id)arg2 success:(*BOOL)arg3 ;
-(void)_saveDeviceIdentifierToDefaults:(id)arg0 forService:(id)arg1 lookupKey:(id)arg2 ;


@end


#endif