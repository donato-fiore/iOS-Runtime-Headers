// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSENGINERUNNER_H
#define MAPSSUGGESTIONSENGINERUNNER_H

@class NSString;
@protocol MapsSuggestionsTriggerObserver, MapsSuggestionsSink, MapsSuggestionsCircuit, MapsSuggestionsTimer;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsEngine.h"

@interface MapsSuggestionsEngineRunner : NSObject <MapsSuggestionsTriggerObserver, MapsSuggestionsSink, MapsSuggestionsCircuit>

 {
    Queue _queue;
    MapsSuggestionsEngine *_engine;
    _Config _config;
    _State _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) MapsSuggestionsEngine *engine;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, nonatomic) NSObject<MapsSuggestionsTimer> *wakeUpTimer; // ivar: _wakeUpTimer


-(id)initWithEngineBuilder:(id)arg0 name:(id)arg1 minRunTime:(CGFloat)arg2 maxRunTime:(CGFloat)arg3 minSleepTime:(CGFloat)arg4 maxSleepTime:(CGFloat)arg5 maxEntries:(NSUInteger)arg6 ;
-(id)initWithEngineBuilder:(id)arg0 name:(id)arg1 minRunTime:(CGFloat)arg2 maxRunTime:(CGFloat)arg3 minSleepTime:(CGFloat)arg4 maxSleepTime:(CGFloat)arg5 runTimeLeeway:(CGFloat)arg6 sleepTimeLeeway:(CGFloat)arg7 maxEntries:(NSUInteger)arg8 nilledWhenAsleep:(BOOL)arg9 ;
-(id)initWithEngineBuilder:(id)arg0 name:(id)arg1 minRunTime:(CGFloat)arg2 maxRunTime:(CGFloat)arg3 minSleepTime:(CGFloat)arg4 maxSleepTime:(CGFloat)arg5 runTimeLeeway:(CGFloat)arg6 sleepTimeLeeway:(CGFloat)arg7 maxEntries:(NSUInteger)arg8 nilledWhenAsleep:(BOOL)arg9 wakeUpTimerClass:(Class)arg10 ;
-(id)initWithEngineBuilder:(id)arg0 name:(id)arg1 minRunTime:(CGFloat)arg2 maxRunTime:(CGFloat)arg3 minSleepTime:(CGFloat)arg4 maxSleepTime:(CGFloat)arg5 runTimeLeeway:(CGFloat)arg6 sleepTimeLeeway:(CGFloat)arg7 maxEntries:(NSUInteger)arg8 nilledWhenAsleep:(BOOL)arg9 wakeUpTimerClass:(Class)arg10 stopRunTimerClass:(Class)arg11 ;
-(id)nameForJSON;
-(id)objectForJSON;
-(void)addCondition:(id)arg0 ;
-(void)addConditions:(id)arg0 ;
-(void)addPostFilter:(id)arg0 ;
-(void)addTrigger:(id)arg0 ;
-(void)addTriggers:(id)arg0 ;
-(void)invalidateForMapsSuggestionsManager:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)removeCondition:(id)arg0 ;
-(void)removeConditions:(id)arg0 ;
-(void)removeTrigger:(id)arg0 ;
-(void)removeTriggers:(id)arg0 ;
-(void)runASAP;
-(void)scheduleNextRun;
-(void)triggerFired:(id)arg0 ;


@end


#endif