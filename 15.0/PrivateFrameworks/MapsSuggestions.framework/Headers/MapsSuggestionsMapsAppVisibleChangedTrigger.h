// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSMAPSAPPVISIBLECHANGEDTRIGGER_H
#define MAPSSUGGESTIONSMAPSAPPVISIBLECHANGEDTRIGGER_H

@class RBSProcessMonitor, NSString;
@protocol MapsSuggestionsCondition;


#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsMapsAppVisibleChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsCondition>

 {
    RBSProcessMonitor *_processMonitor;
    BOOL _isVisible;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isTrue;
-(id)init;
-(id)objectForJSON;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;


@end


#endif