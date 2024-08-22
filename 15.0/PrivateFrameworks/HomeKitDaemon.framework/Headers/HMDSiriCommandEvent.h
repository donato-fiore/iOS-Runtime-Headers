// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSIRICOMMANDEVENT_H
#define HMDSIRICOMMANDEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;



@interface HMDSiriCommandEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, copy, nonatomic) NSString *clientMetricIdentifier; // ivar: _clientMetricIdentifier
@property (readonly, nonatomic) NSUInteger configurationVersion; // ivar: _configurationVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger lastSyncedConfigurationVersion; // ivar: _lastSyncedConfigurationVersion
@property (readonly, nonatomic) NSUInteger numberOfEntities; // ivar: _numberOfEntities
@property (readonly, nonatomic) NSUInteger numberOfFailures; // ivar: _numberOfFailures
@property (readonly, nonatomic) NSUInteger numberOfIncompletions; // ivar: _numberOfIncompletions
@property (readonly, nonatomic) NSString *outcome; // ivar: _outcome
@property (readonly, nonatomic) NSUInteger serverConfigurationVersion; // ivar: _serverConfigurationVersion
@property (readonly) Class superclass;


+(id)commandEventWithDuration:(NSUInteger)arg0 actionType:(id)arg1 outcome:(id)arg2 numberOfEntities:(NSUInteger)arg3 numberOfFailures:(NSUInteger)arg4 numberOfIncompletions:(NSUInteger)arg5 serverConfigurationVersion:(NSUInteger)arg6 configurationVersion:(NSUInteger)arg7 lastSyncedConfigurationVersion:(NSUInteger)arg8 ;
-(id)initWithDuration:(NSUInteger)arg0 actionType:(id)arg1 outcome:(id)arg2 numberOfEntities:(NSUInteger)arg3 numberOfFailures:(NSUInteger)arg4 numberOfIncompletions:(NSUInteger)arg5 serverConfigurationVersion:(NSUInteger)arg6 configurationVersion:(NSUInteger)arg7 lastSyncedConfigurationVersion:(NSUInteger)arg8 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif