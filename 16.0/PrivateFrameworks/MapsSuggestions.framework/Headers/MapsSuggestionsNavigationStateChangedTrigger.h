// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSNAVIGATIONSTATECHANGEDTRIGGER_H
#define MAPSSUGGESTIONSNAVIGATIONSTATECHANGEDTRIGGER_H

@class GEONavigationListener, NSString;
@protocol GEONavigationListenerDelegate, MapsSuggestionsCondition;


#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsNavigationStateChangedTrigger : MapsSuggestionsBaseTrigger <GEONavigationListenerDelegate, MapsSuggestionsCondition>

 {
    NSUInteger _navigationState;
    GEONavigationListener *_navigationListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isTrue;
-(id)init;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)navigationListener:(id)arg0 didChangeNavigationState:(NSUInteger)arg1 transportType:(int)arg2 ;


@end


#endif