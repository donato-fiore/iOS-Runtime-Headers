// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNDEFAULTTRIGGEREDEVENTNOTIFICATIONTRANSITIONPROVIDER_H
#define CALNDEFAULTTRIGGEREDEVENTNOTIFICATIONTRANSITIONPROVIDER_H

@class NSString;
@protocol CALNTriggeredEventNotificationTransitionProvider, CalDateProvider, CALNTravelAdvisoryAuthority;

#import <Foundation/Foundation.h>


@interface CALNDefaultTriggeredEventNotificationTransitionProvider : NSObject <CALNTriggeredEventNotificationTransitionProvider>



@property (readonly, nonatomic) NSObject<CalDateProvider> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CALNTravelAdvisoryAuthority> *travelAdvisoryAuthority; // ivar: _travelAdvisoryAuthority


-(BOOL)_shouldAddNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(BOOL)_shouldModifyForAlarmFiredForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(BOOL)_shouldRemoveNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(BOOL)_timeToLeaveStateAlreadyDisplayedBasedOnSourceNotificationInfo:(id)arg0 oldNotificationData:(id)arg1 ;
-(NSUInteger)_transitionForAlarmFiredForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(NSUInteger)_transitionForTimeToLeaveRefreshTimerFiredForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(NSUInteger)_transitionForTravelAdviceReceivedForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(NSUInteger)transitionForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 trigger:(NSUInteger)arg3 ;
-(id)initWithTravelAdvisoryAuthority:(id)arg0 dateProvider:(id)arg1 ;


@end


#endif