// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSTRACKER_H
#define MAPSSUGGESTIONSTRACKER_H

@class NSMutableDictionary, GEOAutomobileOptions, CLLocation, NSString;
@protocol MapsSuggestionsObject, OS_dispatch_queue, MapsSuggestionsTimer, MapsSuggestionsNetworkRequester;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsETARequirements.h"
#import "MapsSuggestionsManager.h"
#import "MapsSuggestionsETARequester.h"
#import "MapsSuggestionsDonater.h"
#import "MapsSuggestionsCanKicker.h"
#import "MapsSuggestionsVirtualGarage.h"
#import "MapsSuggestionsFlightUpdater.h"
#import "MapsSuggestionsPredictor.h"
#import "MapsSuggestionsMutableWeakEntries.h"

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject>

 {
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsETARequirements *_requirements;
    id<MapsSuggestionsTimer> *_refreshTimer;
    CGFloat _refreshInterval;
    CGFloat _refreshLeeway;
    CGFloat _refreshDeferTime;
    int _transportType;
    MapsSuggestionsManager *_manager;
    NSMutableDictionary *_etaTitleFormatters;
    NSMutableDictionary *_distanceTitleFormatters;
    NSMutableDictionary *_etaChargeTitleFormatters;
    BOOL _shouldBeRunning;
    MapsSuggestionsETARequester *_etaRequester;
    MapsSuggestionsDonater *_donater;
    MapsSuggestionsCanKicker *_currentLocationWiper;
    NSMutableDictionary *_previousETAs;
    id *_transportTypeChangedListener;
    MapsSuggestionsVirtualGarage *_virtualGarage;
    MapsSuggestionsFlightUpdater *_flightUpdater;
}


@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (retain) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int mapType; // ivar: _mapType
@property (retain, nonatomic) NSObject<MapsSuggestionsNetworkRequester> *networkRequester; // ivar: _networkRequester
@property (retain, nonatomic) MapsSuggestionsPredictor *predictor; // ivar: _predictor
@property (readonly) Class superclass;
@property (retain, nonatomic) MapsSuggestionsMutableWeakEntries *trackedEntries; // ivar: _trackedEntries
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithManager:(id)arg0 requirements:(id)arg1 network:(id)arg2 flightUpdater:(id)arg3 virtualGarage:(id)arg4 ;
-(void)clearLocationAndETAs;
-(void)dealloc;
-(void)rescheduleRefreshOnlyIfAlreadyRunning;
-(void)resetAllTitleFormatting;
-(void)scheduleRefresh;
-(void)setLocation:(id)arg0 ;
-(void)setTitleFormatter:(id)arg0 forType:(NSInteger)arg1 ;
-(void)trackSuggestionEntries:(id)arg0 transportType:(int)arg1 ;
-(void)unschedule;


@end


#endif