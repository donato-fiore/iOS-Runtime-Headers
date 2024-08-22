// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTUSAGEOBSERVATIONS_H
#define TPSANALYTICSEVENTUSAGEOBSERVATIONS_H

@class NSNumber, NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventUsageObservations : TPSAnalyticsEvent

@property (retain, nonatomic) NSNumber *eventCount; // ivar: _eventCount
@property (retain, nonatomic) NSString *eventID; // ivar: _eventID
@property (readonly, nonatomic) NSString *experimentCampID; // ivar: _experimentCampID
@property (readonly, nonatomic) NSString *experimentID; // ivar: _experimentID
@property (readonly, nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl
@property (retain, nonatomic) NSNumber *trialDeploymentID; // ivar: _trialDeploymentID
@property (retain, nonatomic) NSString *trialExperimentID; // ivar: _trialExperimentID
@property (retain, nonatomic) NSString *trialRampID; // ivar: _trialRampID
@property (retain, nonatomic) NSString *trialTreatmentID; // ivar: _trialTreatmentID


+(BOOL)supportsSecureCoding;
+(id)eventWithEventID:(id)arg0 eventCount:(id)arg1 ;
-(id)_initWithEventID:(id)arg0 eventCount:(id)arg1 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif