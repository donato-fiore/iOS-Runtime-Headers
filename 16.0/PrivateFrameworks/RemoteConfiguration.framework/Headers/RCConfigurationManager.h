// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCCONFIGURATIONMANAGER_H
#define RCCONFIGURATIONMANAGER_H

@class NSMutableDictionary, NSURL, NSMutableArray;

#import <Foundation/Foundation.h>

#import "RCAsyncSerialQueue.h"
#import "RCConfigurationSettings.h"
#import "RCDeviceInfo.h"
#import "RCKeyValueStore.h"

@interface RCConfigurationManager : NSObject

@property (retain, nonatomic) RCAsyncSerialQueue *configRequestSerialQueue; // ivar: _configRequestSerialQueue
@property (retain, nonatomic) NSMutableDictionary *configResourceByRequestKey; // ivar: _configResourceByRequestKey
@property (retain, nonatomic) RCConfigurationSettings *configurationSettings; // ivar: _configurationSettings
@property (retain, nonatomic) NSURL *contentDirectoryURL; // ivar: _contentDirectoryURL
@property (retain, nonatomic) RCDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (retain, nonatomic) RCKeyValueStore *localStore; // ivar: _localStore
@property (copy, nonatomic) id *networkEventHandler; // ivar: _networkEventHandler
@property (retain, nonatomic) NSMutableArray *runningOperations; // ivar: _runningOperations


-(BOOL)_areAllConfigurationResourcesAvailable:(id)arg0 requestKeys:(id)arg1 ;
-(BOOL)_areAllConfigurationResourcesInvalid:(id)arg0 allowedToReachEndpoint:(BOOL)arg1 useBackgroundRefreshRate:(BOOL)arg2 requestKeys:(id)arg3 ;
-(BOOL)_isAllowedToReachEndpointWithSettings:(id)arg0 configurationResource:(id)arg1 endpointURL:(id)arg2 ;
-(BOOL)_isValidConfigurationResource:(id)arg0 allowedToReachEndpoint:(BOOL)arg1 useBackgroundRefreshRate:(BOOL)arg2 ;
-(id)_decodeConfigurationResource:(id)arg0 ;
-(id)_encodeConfigurationResource:(id)arg0 ;
-(id)_endpointURLForEnvironment:(NSUInteger)arg0 requestKey:(id)arg1 ;
-(id)initWithContentDirectoryURL:(id)arg0 ;
-(void)_fetchConfigurationFromFallbackURLWithSettings:(id)arg0 completion:(id)arg1 ;
-(void)_fetchMultiConfigurationFromEndpointURL:(id)arg0 settings:(id)arg1 changeTagsByRequestKey:(id)arg2 completion:(id)arg3 ;
-(void)_loadConfigurationResourcesFromStore;
-(void)_removeConfigurationResourceForRequestKey:(id)arg0 ;
-(void)_saveConfigurationResource:(id)arg0 ;
-(void)fetchConfigurationWithSettings:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)fetchMultiConfigurationWithSettings:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)fetchSingleConfigurationWithSettings:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif