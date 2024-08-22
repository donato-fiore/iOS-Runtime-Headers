// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTTIPTIMESPENT_H
#define TPSANALYTICSEVENTTIPTIMESPENT_H

@class NSString, NSNumber;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventTipTimeSpent : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl
@property (nonatomic) CGFloat timeSpent; // ivar: _timeSpent
@property (retain, nonatomic) NSString *tipID; // ivar: _tipID
@property (retain, nonatomic) NSNumber *trialDeploymentID; // ivar: _trialDeploymentID
@property (retain, nonatomic) NSString *trialExperimentID; // ivar: _trialExperimentID
@property (retain, nonatomic) NSString *trialRampID; // ivar: _trialRampID
@property (retain, nonatomic) NSString *trialTreatmentID; // ivar: _trialTreatmentID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 ;
-(id)_initWithTipID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif