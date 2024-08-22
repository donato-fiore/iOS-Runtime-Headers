// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTAPPLAUNCHED_H
#define TPSANALYTICSEVENTAPPLAUNCHED_H

@class NSString, NSNumber;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent {
    BOOL _needsSessionReset;
}


@property (retain, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (retain, nonatomic) NSString *contentID; // ivar: _contentID
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (readonly, nonatomic) NSNumber *launchNumber; // ivar: _launchNumber
@property (retain, nonatomic) NSString *launchType; // ivar: _launchType
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl
@property (retain, nonatomic) NSNumber *trialDeploymentID; // ivar: _trialDeploymentID
@property (retain, nonatomic) NSString *trialExperimentID; // ivar: _trialExperimentID
@property (retain, nonatomic) NSString *trialRampID; // ivar: _trialRampID
@property (retain, nonatomic) NSString *trialTreatmentID; // ivar: _trialTreatmentID
@property (readonly, nonatomic) NSString *userType; // ivar: _userType


+(BOOL)supportsSecureCoding;
+(id)_currentSessionEvents;
+(id)_initialSessionEvent;
+(id)_latestSessionEvent;
+(id)eventWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 launchType:(id)arg3 ;
+(id)firstLaunchEvent;
+(id)lastRecordedLaunchType;
+(void)appSessionEndedWithType:(id)arg0 ;
-(id)_initFirstLaunchEvent;
-(id)_initWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 launchType:(id)arg3 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)_aggregateLog;
-(void)_updateLaunchCount;
-(void)encodeWithCoder:(id)arg0 ;
-(void)log;
-(void)persistKeys;
-(void)setDataProvider:(id)arg0 ;


@end


#endif