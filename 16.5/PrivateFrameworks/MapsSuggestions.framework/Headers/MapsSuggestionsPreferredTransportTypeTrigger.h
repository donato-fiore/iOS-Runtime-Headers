// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSPREFERREDTRANSPORTTYPETRIGGER_H
#define MAPSSUGGESTIONSPREFERREDTRANSPORTTYPETRIGGER_H



#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsPreferredTransportTypeTrigger : MapsSuggestionsBaseTrigger {
    id *_transportTypeChangedListener;
}




-(id)init;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;


@end


#endif