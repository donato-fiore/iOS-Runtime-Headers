// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPINTERRUPTIONSEVENTPROVIDER_H
#define ATXAPPINTERRUPTIONSEVENTPROVIDER_H

@protocol ATXModeEntityEventProviderProtocol;

#import <Foundation/Foundation.h>

#import "ATXInterruptedAppSessionAccumulator.h"
#import "ATXModeEvent.h"

@interface ATXAppInterruptionsEventProvider : NSObject {
    id<ATXModeEntityEventProviderProtocol> *_modeEventProvider;
    ATXInterruptedAppSessionAccumulator *_globalInterruptedAppSessionsAccumulator;
    ATXInterruptedAppSessionAccumulator *_modeInterruptedAppSessionsAccumulator;
}


@property (readonly, nonatomic) ATXModeEvent *mostRecentModeEvent; // ivar: _mostRecentModeEvent


-(BOOL)appLaunchEventOccurredWhileInMode:(id)arg0 modeTransitionEvent:(id)arg1 ;
-(BOOL)notificationEventOccurredWhileInMode:(id)arg0 modeTransitionEvent:(id)arg1 ;
-(BOOL)successfullyCalculatedAppSessionInterruptions;
-(CGFloat)globalPopularityOfInterruptingEntity:(id)arg0 ;
-(CGFloat)modeAppInterruptionsClassConditionalProbabilityByEntity:(id)arg0 ;
-(CGFloat)modePopularityOfInterruptingEntity:(id)arg0 ;
-(CGFloat)ratioOfModePopularityToGlobalPopularityOfInterruptingEntity:(id)arg0 ;
-(NSUInteger)globalAppInterruptionsCountByEntity:(id)arg0 ;
-(NSUInteger)modeAppInterruptionsCountByEntity:(id)arg0 ;
-(id)dateIntervalFromAppLaunchEvent:(id)arg0 ;
-(id)dateIntervalFromNotificationEvent:(id)arg0 ;
-(id)initWithModeEventProvider:(id)arg0 ;
-(void)trackAppSessionInterruption:(id)arg0 ;
-(void)trackNewModeEvent:(id)arg0 ;


@end


#endif