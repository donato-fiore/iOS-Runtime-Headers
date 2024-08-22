// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSTRIGGERINGTOGGLE_H
#define MAPSSUGGESTIONSTRIGGERINGTOGGLE_H

@class NSString;
@protocol MapsSuggestionsTrigger, MapsSuggestionsCondition;


#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsTriggeringToggle : MapsSuggestionsBaseTrigger <MapsSuggestionsTrigger, MapsSuggestionsCondition>

 {
    NSUInteger _behavior;
    BOOL _state;
    NSUInteger _timesUpdated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger timesUpdated;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isTrue;
-(id)initWithName:(id)arg0 startState:(BOOL)arg1 ;
-(id)initWithName:(id)arg0 startState:(BOOL)arg1 behavior:(NSUInteger)arg2 ;
-(id)objectForJSON;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;


@end


#endif