// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSACTIONCIRCUIT_H
#define MAPSSUGGESTIONSACTIONCIRCUIT_H

@class NSString;
@protocol MapsSuggestionsTriggerObserver, MapsSuggestionsCircuit;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsActionCircuit : NSObject <MapsSuggestionsTriggerObserver, MapsSuggestionsCircuit>

 {
    Queue _queue;
    _Config _config;
    _State _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) Queue dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithAction:(id)arg0 ;
-(id)initWithTriggers:(id)arg0 action:(id)arg1 ;
-(id)initWithTriggers:(id)arg0 conditions:(id)arg1 action:(id)arg2 ;
-(id)initWithTriggers:(id)arg0 conditions:(id)arg1 type:(NSUInteger)arg2 action:(id)arg3 ;
-(id)nameForJSON;
-(id)objectForJSON;
-(void)addCondition:(id)arg0 ;
-(void)addTrigger:(id)arg0 ;
-(void)awaitQueue;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)removeCondition:(id)arg0 ;
-(void)removeTrigger:(id)arg0 ;
-(void)triggerFired:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif