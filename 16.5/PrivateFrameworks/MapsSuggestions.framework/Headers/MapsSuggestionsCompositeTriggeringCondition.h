// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSCOMPOSITETRIGGERINGCONDITION_H
#define MAPSSUGGESTIONSCOMPOSITETRIGGERINGCONDITION_H

@class NSArray, NSString;
@protocol MapsSuggestionsTriggerObserver;


#import "MapsSuggestionsTriggeringToggle.h"

@interface MapsSuggestionsCompositeTriggeringCondition : MapsSuggestionsTriggeringToggle <MapsSuggestionsTriggerObserver>

 {
    Queue _queue;
    NSArray *_triggers;
    NSArray *_conditions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isTrue;
-(id)initWithName:(id)arg0 startState:(BOOL)arg1 ;
-(id)initWithName:(id)arg0 startState:(BOOL)arg1 behavior:(NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 startState:(BOOL)arg1 behavior:(NSUInteger)arg2 triggers:(id)arg3 conditions:(id)arg4 ;
-(id)initWithName:(id)arg0 startState:(BOOL)arg1 triggers:(id)arg2 conditions:(id)arg3 ;
-(id)objectForJSON;
-(void)addCondition:(id)arg0 ;
-(void)addConditions:(id)arg0 ;
-(void)addTrigger:(id)arg0 ;
-(void)addTriggers:(id)arg0 ;
-(void)dealloc;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)triggerFired:(id)arg0 ;


@end


#endif