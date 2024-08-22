// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMCOREANALYTICSCOLLECTOR_H
#define EMCOREANALYTICSCOLLECTOR_H

@class EFLocked;
@protocol EFScheduler;

#import <Foundation/Foundation.h>


@interface EMCoreAnalyticsCollector : NSObject

@property (readonly, nonatomic) NSObject<EFScheduler> *oneTimeScheduler; // ivar: _oneTimeScheduler
@property (readonly, nonatomic) EFLocked *periodicDataProviders; // ivar: _periodicDataProviders
@property (nonatomic) BOOL registered; // ivar: _registered
@property (readonly, nonatomic) NSObject<EFScheduler> *registrationScheduler; // ivar: _registrationScheduler


+(id)log;
-(id)init;
-(id)registerForLogEventsWithPeriodicDataProvider:(id)arg0 ;
-(void)_logPeriodicEvents;
-(void)_registerXPCActivity;
-(void)logOneTimeEvent:(id)arg0 ;


@end


#endif