// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSFIRSTUNLOCKTRIGGER_H
#define MAPSSUGGESTIONSFIRSTUNLOCKTRIGGER_H

@class NSString;
@protocol MapsSuggestionsTriggerObserver, MapsSuggestionsCondition, MapsSuggestionsFirstUnlockProtocol;


#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsFirstUnlockTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsTriggerObserver, MapsSuggestionsCondition>

 {
    id<MapsSuggestionsFirstUnlockProtocol> *_firstUnlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isTrue;
-(id)init;
-(id)initWithFirstLock:(id)arg0 ;
-(id)objectForJSON;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)triggerFired:(id)arg0 ;


@end


#endif