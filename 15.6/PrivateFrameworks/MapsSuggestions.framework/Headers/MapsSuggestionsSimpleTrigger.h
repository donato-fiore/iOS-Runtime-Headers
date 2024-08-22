// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSSIMPLETRIGGER_H
#define MAPSSUGGESTIONSSIMPLETRIGGER_H



#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger



-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 queue:(id)arg1 ;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)fire;


@end


#endif