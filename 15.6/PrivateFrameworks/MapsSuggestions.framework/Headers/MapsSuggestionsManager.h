// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSMANAGER_H
#define MAPSSUGGESTIONSMANAGER_H

@class NSMutableDictionary, NSDate, NSArray, CLLocation, GEOAutomobileOptions, NSString;
@protocol MapsSuggestionsObject, MapsSuggestionsSourceDelegate, MapsSuggestionsLocationUpdaterDelegate, OS_dispatch_queue, MapsSuggestionsLocationUpdater, MapsSuggestionsStrategy;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsTracker.h"
#import "MapsSuggestionsObservers.h"
#import "MapsSuggestionsCompositeSource.h"
#import "MapsSuggestionsCanKicker.h"

@interface MapsSuggestionsManager : NSObject <MapsSuggestionsObject, MapsSuggestionsSourceDelegate, MapsSuggestionsLocationUpdaterDelegate>

 {
    NSObject<OS_dispatch_queue> *_gatheringQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSMutableDictionary *_additionalFiltersPerSink;
    MapsSuggestionsTracker *_tracker;
    NSDate *_etaValidUntil;
    MapsSuggestionsObservers *_sinks;
    MapsSuggestionsCompositeSource *_compositeSource;
    NSMutableDictionary *_storage;
    NSArray *_latestResults;
    int _defaultTansportType;
    MapsSuggestionsCanKicker *_expiredEntryInvalidator;
    MapsSuggestionsCanKicker *_wipeStaleETAWiper;
    MapsSuggestionsCanKicker *_deferredSourcesUpdater;
    CLLocation *_oldLocation;
    BOOL _sourcesRunning;
}


@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MapsSuggestionsLocationUpdater> *locationUpdater; // ivar: _locationUpdater
@property (nonatomic) int mapType; // ivar: _mapType
@property (retain, nonatomic) NSObject<MapsSuggestionsStrategy> *strategy; // ivar: _strategy
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)loadStorageFromFile:(id)arg0 ;
-(NSUInteger)addOrUpdateSuggestionEntries:(id)arg0 source:(id)arg1 ;
// -(char)loadStorageFromFile:(id)arg0 callback:(id)arg1 callbackQueue:(unk)arg2  ;
-(char)oneShotTopSuggestionsForSink:(id)arg0 count:(NSUInteger)arg1 queue:(id)arg2 handler:(id)arg3 ;
// -(char)oneShotTopSuggestionsForSink:(id)arg0 count:(NSUInteger)arg1 transportType:(int)arg2 callback:(id)arg3 onQueue:(unk)arg4  ;
-(char)oneShotTopSuggestionsForSink:(id)arg0 transportType:(int)arg1 count:(NSUInteger)arg2 queue:(id)arg3 handler:(id)arg4 ;
-(char)removeEntry:(id)arg0 behavior:(NSInteger)arg1 handler:(id)arg2 ;
-(char)saveStorageToFile:(id)arg0 callback:(id)arg1 ;
-(char)topSuggestionsForSink:(id)arg0 count:(NSUInteger)arg1 queue:(id)arg2 handler:(id)arg3 ;
// -(char)topSuggestionsForSink:(id)arg0 count:(NSUInteger)arg1 transportType:(int)arg2 callback:(id)arg3 onQueue:(unk)arg4  ;
-(char)topSuggestionsForSink:(id)arg0 transportType:(int)arg1 count:(NSUInteger)arg2 queue:(id)arg3 handler:(id)arg4 ;
-(id)additionalFiltersPerSink;
-(id)initWithStrategy:(id)arg0 locationUpdater:(id)arg1 network:(id)arg2 flightUpdater:(id)arg3 ETARequirements:(id)arg4 virtualGarage:(id)arg5 ;
-(id)sinks;
-(id)sources;
-(id)storage;
-(id)storageForSource:(id)arg0 ;
-(id)storageQueue;
-(id)tracker;
-(void)addAdditionalFilter:(id)arg0 forSink:(id)arg1 ;
-(void)attachSink:(id)arg0 ;
-(void)attachSource:(id)arg0 ;
-(void)awaitGatheringQueue;
-(void)awaitStorageQueue;
-(void)dealloc;
-(void)detachSink:(id)arg0 ;
-(void)detachSource:(id)arg0 ;
-(void)didLoseLocationPermission;
-(void)didUpdateLocation:(id)arg0 ;
-(void)feedbackForContact:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForEntry:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForMapItem:(id)arg0 action:(NSInteger)arg1 ;
-(void)hintRefreshOfType:(NSInteger)arg0 ;
-(void)removeAdditionalFilter:(id)arg0 forSink:(id)arg1 ;
-(void)removeEntry:(id)arg0 ;
-(void)trackerRefreshedETAsUntil:(id)arg0 ;


@end


#endif