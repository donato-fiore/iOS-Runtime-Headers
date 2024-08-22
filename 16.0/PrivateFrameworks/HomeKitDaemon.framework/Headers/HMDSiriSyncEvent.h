// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSIRISYNCEVENT_H
#define HMDSIRISYNCEVENT_H

@class HMMLogEvent, NSString, NSArray;
@protocol HMDAWDLogEvent;



@interface HMDSiriSyncEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, nonatomic) NSUInteger configurationVersion; // ivar: _configurationVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger lastSyncedConfigurationVersion; // ivar: _lastSyncedConfigurationVersion
@property (readonly, nonatomic) NSArray *notificationReasons; // ivar: _notificationReasons
@property (readonly, nonatomic) NSUInteger serverConfigurationVersion; // ivar: _serverConfigurationVersion
@property (readonly) Class superclass;


+(id)syncRequestWithDuration:(NSUInteger)arg0 serverConfigurationVersion:(NSUInteger)arg1 configurationVersion:(NSUInteger)arg2 lastSyncedConfigurationVersion:(NSUInteger)arg3 notificationReasons:(id)arg4 ;
-(id)initWithDuration:(NSUInteger)arg0 serverConfigurationVersion:(NSUInteger)arg1 configurationVersion:(NSUInteger)arg2 lastSyncedConfigurationVersion:(NSUInteger)arg3 notificationReasons:(id)arg4 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif