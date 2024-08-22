// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSEVENTKIT_H
#define MAPSSUGGESTIONSEVENTKIT_H

@class NSSet, NSMutableDictionary, NSString;
@protocol MapsSuggestionsEventKitConnectorDelegate, MapsSuggestionsObject, OS_dispatch_queue, MapsSuggestionsEventKitConnector, MapsSuggestionsNetworkRequester;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsObservers.h"
#import "MapsSuggestionsCanKicker.h"

@interface MapsSuggestionsEventKit : NSObject <MapsSuggestionsEventKitConnectorDelegate, MapsSuggestionsObject>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<MapsSuggestionsEventKitConnector> *_connector;
    id<MapsSuggestionsNetworkRequester> *_network;
    MapsSuggestionsObservers *_observers;
    MapsSuggestionsCanKicker *_changedNotificationCanKicker;
    NSSet *_setOfEventReservationSubtypes;
    NSMutableDictionary *_handleToMapItemMapping;
    NSMutableDictionary *_handleToMapItemOriginMapping;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)canProduceEntriesOfType:(NSInteger)arg0 ;
-(BOOL)deleteOrDeclineEntry:(id)arg0 handler:(id)arg1 ;
-(BOOL)entriesForEventsAtLocation:(id)arg0 period:(id)arg1 handler:(id)arg2 ;
-(BOOL)hasVisibleCalendars;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initWithConnector:(id)arg0 network:(id)arg1 ;
-(void)eventKitDidChange:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif