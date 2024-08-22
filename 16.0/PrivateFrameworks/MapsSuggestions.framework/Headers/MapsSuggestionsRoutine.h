// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSROUTINE_H
#define MAPSSUGGESTIONSROUTINE_H

@class NSMutableDictionary, GEOLocationShifter, NSString;
@protocol MapsSuggestionsObject, MapsSuggestionsRoutineConnector, MapsSuggestionsNetworkRequester;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsObservers.h"
#import "MapsSuggestionsLimitedDictionary.h"

@interface MapsSuggestionsRoutine : NSObject <MapsSuggestionsObject>

 {
    id<MapsSuggestionsRoutineConnector> *_connector;
    id<MapsSuggestionsNetworkRequester> *_networkRequester;
    Queue _queue;
    MapsSuggestionsObservers *_parkedCarObservers;
    NSMutableDictionary *_loiLocationsForHome;
    NSMutableDictionary *_loiLocationsForWork;
    NSMutableDictionary *_loiLocationsForSchool;
    NSMutableDictionary *_loiVisits;
    MapsSuggestionsLimitedDictionary *_mapItemCache;
    MapsSuggestionsLimitedDictionary *_mapItemCacheOrigin;
    GEOLocationShifter *_locationShifter;
    BOOL _areFrequentLocationsAvailable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)canProduceEntriesOfType:(NSInteger)arg0 ;
-(NSUInteger)countHomeLOIs;
-(NSUInteger)countSchoolLOIs;
-(NSUInteger)countWorkLOIs;
-(char)fetchEntriesForLocation:(id)arg0 period:(id)arg1 handler:(id)arg2 ;
-(char)fetchLastVisitAtLocation:(id)arg0 handler:(id)arg1 ;
-(char)fetchLastVisitAtMapItem:(id)arg0 withinDistance:(CGFloat)arg1 handler:(id)arg2 ;
-(char)fetchLocationsSinceDate:(id)arg0 handler:(id)arg1 ;
-(char)fetchMostRecentVisitWithinDistance:(CGFloat)arg0 ofMapItem:(id)arg1 handler:(id)arg2 ;
-(char)fetchSuggestedShortcutsForType:(NSInteger)arg0 minVisits:(NSUInteger)arg1 maxAge:(CGFloat)arg2 handler:(id)arg3 ;
-(char)predictedExitTimeFromLocation:(id)arg0 date:(id)arg1 handler:(id)arg2 ;
-(char)readMeCardWithMinVisits:(NSUInteger)arg0 maxAge:(CGFloat)arg1 handler:(id)arg2 ;
-(char)touristBitForLocation:(id)arg0 handler:(id)arg1 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initWithRoutineConnector:(id)arg0 networkRequester:(id)arg1 ;
-(void)addParkedCarObserver:(id)arg0 ;
-(void)forgetLocationOfInterest:(id)arg0 handler:(id)arg1 ;
-(void)removeParkedCarObserver:(id)arg0 ;
-(void)removeParkedCarsAllowingFeature:(BOOL)arg0 handler:(id)arg1 ;
-(void)updateFixedLOIs;


@end


#endif