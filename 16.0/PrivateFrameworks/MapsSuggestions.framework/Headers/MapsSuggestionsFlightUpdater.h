// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSFLIGHTUPDATER_H
#define MAPSSUGGESTIONSFLIGHTUPDATER_H

@protocol MapsSuggestionsFlightRequester, MapsSuggestionsNetworkRequester;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsFlightUpdater : NSObject {
    id<MapsSuggestionsFlightRequester> *_flightRequester;
    id<MapsSuggestionsNetworkRequester> *_networkRequester;
    Queue _queue;
}




-(char)updateFlightsForEntry:(id)arg0 handler:(id)arg1 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initWithFlightRequester:(id)arg0 networkRequester:(id)arg1 ;


@end


#endif