// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEREMOTEEVENTACCESSCONTROLLER_H
#define HMDHOMEREMOTEEVENTACCESSCONTROLLER_H

@protocol HMDRemoteEventAccessControlProvider, HMDHomeRemoteEventAccessControllerDataSource;

#import <Foundation/Foundation.h>

#import "HMDAccessorySettingsEventHelper.h"

@interface HMDHomeRemoteEventAccessController : NSObject <HMDRemoteEventAccessControlProvider>



@property (readonly, weak, nonatomic) NSObject<HMDHomeRemoteEventAccessControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) HMDAccessorySettingsEventHelper *settingsHelper; // ivar: _settingsHelper


-(BOOL)isAppleMediaAccessoryUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)isMediaGroupUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)isMediaSystemUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)isSiriEndpointAccessoryUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)remoteEventAllowForMediaGroupSettingEventTopic:(id)arg0 deviceType:(NSUInteger)arg1 userType:(NSUInteger)arg2 ;
-(BOOL)remoteEventAllowForMediaSystemSettingEventTopic:(id)arg0 deviceType:(NSUInteger)arg1 userType:(NSUInteger)arg2 ;
-(BOOL)remoteEventAllowedForAccessoryEventTopic:(id)arg0 parsedEventTopic:(id)arg1 deviceType:(NSUInteger)arg2 userType:(NSUInteger)arg3 ;
-(BOOL)remoteEventAllowedForAccessoryInfoWithTopicSuffix:(id)arg0 deviceType:(NSUInteger)arg1 userType:(NSUInteger)arg2 ;
-(BOOL)remoteEventAllowedForHomeEventTopic:(id)arg0 parsedEventTopic:(id)arg1 deviceType:(NSUInteger)arg2 userType:(NSUInteger)arg3 ;
-(BOOL)remoteEventAllowedForTopic:(id)arg0 deviceType:(NSUInteger)arg1 userType:(NSUInteger)arg2 ;
-(id)initWithDataSource:(id)arg0 ;


@end


#endif