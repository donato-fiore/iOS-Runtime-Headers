// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDUETSERVICE_H
#define PLDUETSERVICE_H

@class PLService;


#import "PLDuetServiceDAS.h"
#import "PLDuetServiceImpl.h"
#import "PLDuetServiceLpmSource.h"

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceDAS *dasEvent; // ivar: _dasEvent
@property (readonly) PLDuetServiceImpl *impl; // ivar: _impl
@property (readonly) PLDuetServiceLpmSource *lpmSource; // ivar: _lpmSource


+(id)aggregateNameDuetEnergyAccumulator;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionBatterySaverMode;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)eventIntervalDefinitionComplicationEvents;
+(id)eventIntervalDefinitionDuetEvents;
+(void)load;
-(id)init;
-(id)trimConditionsForEntryKey:(id)arg0 forTrimDate:(id)arg1 ;
-(void)dealloc;
-(void)handleBatterySaverModeToken:(int)arg0 withNotification:(id)arg1 ;
-(void)initOperatorDependancies;
-(void)logEventForwardBatterySaverModeWithState:(BOOL)arg0 fromNotification:(id)arg1 ;
-(void)setupBatterySaverModeForNotification:(id)arg0 ;


@end


#endif