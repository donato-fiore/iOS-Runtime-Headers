// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMCUNCONFIRMEDDEVIATIONNOTIFICATIONSTATEMACHINESTATE_H
#define HDMCUNCONFIRMEDDEVIATIONNOTIFICATIONSTATEMACHINESTATE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HDMCUnconfirmedDeviationNotificationStateMachineState : NSObject

@property (readonly, copy, nonatomic) NSNumber *fireDayIndex; // ivar: _fireDayIndex


+(id)stateFromDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)stateType;
-(id)computeFiredStateWithCurrentDayIndex:(NSInteger)arg0 ;
-(id)computeNewStateFromAnalysis:(id)arg0 dismissalDayIndex:(id)arg1 currentDate:(id)arg2 unconfirmedDeviationNotificationTimeOfDay:(id)arg3 ;
-(id)computeNewStateFromMaxEnd:(NSInteger)arg0 dismissalDayIndex:(id)arg1 scheduledFireDayIndex:(NSInteger)arg2 ;
-(id)computeNewStateFromUnconfirmedDeviations:(id)arg0 dismissalDayIndex:(id)arg1 scheduledFireDayIndex:(NSInteger)arg2 ;
-(id)computeStateFromNoUnconfirmedDeviations;
-(id)dictionaryRepresentation;
-(id)hk_redactedDescription;
-(id)initWithFireDayIndex:(id)arg0 ;
-(id)scheduledNotificationFireDayIndex;


@end


#endif