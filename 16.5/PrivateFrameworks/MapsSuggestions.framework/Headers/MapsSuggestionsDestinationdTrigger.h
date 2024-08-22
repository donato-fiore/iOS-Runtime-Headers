// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSDESTINATIONDTRIGGER_H
#define MAPSSUGGESTIONSDESTINATIONDTRIGGER_H

@class NSSet;


#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {
    unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> _notificationReceiver;
    NSSet *_ignoredPeerIdentifiers;
}




-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)addIgnoredClientProcess:(id)arg0 ;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;


@end


#endif