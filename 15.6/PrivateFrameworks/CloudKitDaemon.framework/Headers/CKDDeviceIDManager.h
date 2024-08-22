// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDDEVICEIDMANAGER_H
#define CKDDEVICEIDMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDDeviceIDManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceIDsByContainerIdentifierByContainerEnvironment; // ivar: _deviceIDsByContainerIdentifierByContainerEnvironment
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL useLegacyKeychain; // ivar: _useLegacyKeychain


+(id)sharedManager;
-(id)_perServicelookupKeyForContainer:(id)arg0 ;
-(id)_savedDeviceIdentifierForContainer:(id)arg0 ;
-(id)_serviceForContainer:(id)arg0 ;
-(id)deviceIDsByContainerIdentifierInContainerEnvironment:(NSInteger)arg0 ;
-(id)deviceIdentifierForContainer:(id)arg0 ;
-(id)deviceIdentifierForContainer:(id)arg0 skipInMemoryCache:(BOOL)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)init;
-(struct __CFDictionary *)createQueryForDeviceIdentifierInContainer:(id)arg0 ;
-(void)_deleteDeviceIdentifierForContainer:(id)arg0 ;
-(void)_saveDeviceIdentifier:(id)arg0 forContainer:(id)arg1 ;
-(void)_saveDeviceIdentifierToDefaults:(id)arg0 forContainer:(id)arg1 ;


@end


#endif