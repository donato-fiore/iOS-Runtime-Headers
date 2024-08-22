// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSEVENTDESIREDOUTCOMEPERFORMED_H
#define TPSANALYTICSEVENTDESIREDOUTCOMEPERFORMED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventDesiredOutcomePerformed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (nonatomic) NSInteger displayCount; // ivar: _displayCount
@property (retain, nonatomic) NSString *displayType; // ivar: _displayType
@property (retain, nonatomic) NSString *experimentCampID; // ivar: _experimentCampID
@property (retain, nonatomic) NSString *experimentID; // ivar: _experimentID
@property (readonly, nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl
@property (nonatomic) CGFloat timeToDesiredOutcome; // ivar: _timeToDesiredOutcome
@property (retain, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 correlationID:(id)arg1 displayType:(id)arg2 overrideHoldout:(BOOL)arg3 lastDisplayedContext:(id)arg4 lastHintDisplayedDate:(id)arg5 desiredOutcomePerformedDate:(id)arg6 ;
-(id)_initWithTipID:(id)arg0 correlationID:(id)arg1 displayType:(id)arg2 overrideHoldout:(BOOL)arg3 context:(id)arg4 lastHintDisplayedDate:(id)arg5 desiredOutcomePerformedDate:(id)arg6 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif