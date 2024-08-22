// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSMAPSSYNC_H
#define MAPSSUGGESTIONSMAPSSYNC_H

@class NSString;
@protocol MapsSuggestionsMapsSyncConnectorDelegate, MapsSuggestionsObject, MapsSuggestionsMapsSyncConnector;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsObservers.h"

@interface MapsSuggestionsMapsSync : NSObject <MapsSuggestionsMapsSyncConnectorDelegate, MapsSuggestionsObject>

 {
    Queue _queue;
    id<MapsSuggestionsMapsSyncConnector> *_connector;
    MapsSuggestionsObservers *_historyObservers;
    MapsSuggestionsObservers *_transitItemObservers;
    MapsSuggestionsObservers *_favoriteItemObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(char)canProduceRatingRequestForMapItem:(id)arg0 maxAge:(CGFloat)arg1 handler:(id)arg2 ;
-(char)deleteEntry:(id)arg0 handler:(id)arg1 ;
-(char)didProduceRatingRequestForMapItem:(id)arg0 handler:(id)arg1 ;
-(char)durationSinceLastTransitHistoryRoute:(id)arg0 ;
-(char)entriesFromHistoryWithHandler:(id)arg0 ;
-(char)mapItemsForHistoricPlaces:(BOOL)arg0 routes:(BOOL)arg1 maxAge:(CGFloat)arg2 handler:(id)arg3 ;
-(char)userHasFavoriteTransitLinesWithHandler:(id)arg0 ;
-(char)userHasFavoriteTransitPOIsWithHandler:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initWithMapsSyncConnector:(id)arg0 ;
-(void)addMapsSyncObserver:(id)arg0 forContentType:(NSInteger)arg1 ;
-(void)mapsSyncDidChangeForType:(NSInteger)arg0 ;
-(void)removeMapsSyncObserver:(id)arg0 forContentType:(NSInteger)arg1 ;
-(void)removeMapsSyncObserverForAllContentTypes:(id)arg0 ;


@end


#endif