// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNDEFAULTTRIGGEREDEVENTNOTIFICATIONTRIGGERHELPER_H
#define CALNDEFAULTTRIGGEREDEVENTNOTIFICATIONTRIGGERHELPER_H

@class NSString;
@protocol CALNTriggeredEventNotificationTriggerHelper, CalDateProvider, CALNTravelAdvisoryAuthority;

#import <Foundation/Foundation.h>


@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject <CALNTriggeredEventNotificationTriggerHelper>



@property (readonly, nonatomic) NSObject<CalDateProvider> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CALNTravelAdvisoryAuthority> *travelAdvisoryAuthority; // ivar: _travelAdvisoryAuthority


-(BOOL)_eventWillEndBeforeUserArrivesForHypothesis:(id)arg0 eventEndDate:(id)arg1 ;
-(BOOL)_exceededMaximumTravelTimeThresholdForHypothesis:(id)arg0 ;
-(BOOL)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(BOOL)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)arg0 oldNotificationData:(id)arg1 ;
-(BOOL)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(BOOL)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)arg0 hypothesis:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 hasExistingTravelAdvice:(BOOL)arg4 satisfiesMinimumTravelTimeThreshold:(BOOL)arg5 ;
-(BOOL)shouldTriggerForSourceClientIdentifier:(id)arg0 trigger:(NSUInteger)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(id)initWithTravelAdvisoryAuthority:(id)arg0 dateProvider:(id)arg1 ;


@end


#endif