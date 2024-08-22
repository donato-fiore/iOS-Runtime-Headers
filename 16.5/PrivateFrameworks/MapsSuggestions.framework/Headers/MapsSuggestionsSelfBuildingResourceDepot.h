// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSSELFBUILDINGRESOURCEDEPOT_H
#define MAPSSUGGESTIONSSELFBUILDINGRESOURCEDEPOT_H

@class NSString;
@protocol MapsSuggestionsFullResourceDepot, NSCopying, MapsSuggestionsSourceDelegate, MapsSuggestionsNetworkRequester, MapsSuggestionsRoutineConnector, MapsSuggestionsPortraitConnector, MapsSuggestionsEventKitConnector, MapsSuggestionsVirtualGarageConnector, MapsSuggestionsMapsSyncConnector, MapsSuggestionsContactsConnector, MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor, MapsSuggestionsInsights, MapsSuggestionsFlightRequester;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsRoutine.h"
#import "MapsSuggestionsPortrait.h"
#import "MapsSuggestionsEventKit.h"
#import "MapsSuggestionsVirtualGarage.h"
#import "MapsSuggestionsMapsSync.h"
#import "MapsSuggestionsContacts.h"
#import "MapsSuggestionsShortcutManager.h"
#import "MapsSuggestionsUser.h"
#import "MapsSuggestionsFlightUpdater.h"

@interface MapsSuggestionsSelfBuildingResourceDepot : NSObject <MapsSuggestionsFullResourceDepot, NSCopying>

 {
    NSString *_name;
    id<MapsSuggestionsSourceDelegate> *_oneSourceDelegate;
    id<MapsSuggestionsNetworkRequester> *_oneNetworkRequester;
    id<MapsSuggestionsRoutineConnector> *_oneRoutineConnector;
    MapsSuggestionsRoutine *_oneRoutine;
    id<MapsSuggestionsPortraitConnector> *_onePortraitConnector;
    MapsSuggestionsPortrait *_onePortrait;
    id<MapsSuggestionsEventKitConnector> *_oneEventKitConnector;
    MapsSuggestionsEventKit *_oneEventKit;
    id<MapsSuggestionsVirtualGarageConnector> *_oneVirtualGarageConnector;
    MapsSuggestionsVirtualGarage *_oneVirtualGarage;
    id<MapsSuggestionsMapsSyncConnector> *_oneMapsSyncConnector;
    MapsSuggestionsMapsSync *_oneMapsSync;
    id<MapsSuggestionsContactsConnector> *_oneContactsConnector;
    MapsSuggestionsContacts *_oneContacts;
    id<MapsSuggestionsShortcutStorage> *_oneFavoritesStorage;
    id<MapsSuggestionsShortcutSuggestor> *_oneFavoritesSuggestor;
    MapsSuggestionsShortcutManager *_oneFavorites;
    MapsSuggestionsUser *_oneUser;
    id<MapsSuggestionsInsights> *_oneInsights;
    id<MapsSuggestionsFlightRequester> *_oneFlightRequester;
    MapsSuggestionsFlightUpdater *_oneFlightUpdater;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)oneContacts;
-(id)oneContactsConnector;
-(id)oneEventKit;
-(id)oneEventKitConnector;
-(id)oneFavorites;
-(id)oneFavoritesStorage;
-(id)oneFavoritesSuggestor;
-(id)oneFlightRequester;
-(id)oneFlightUpdater;
-(id)oneInsights;
-(id)oneMapsSync;
-(id)oneMapsSyncConnector;
-(id)oneNetworkRequester;
-(id)onePortrait;
-(id)onePortraitConnector;
-(id)oneRoutine;
-(id)oneRoutineConnector;
-(id)oneSourceDelegate;
-(id)oneUser;
-(id)oneVirtualGarage;
-(id)oneVirtualGarageConnector;
-(void)setOneContacts:(id)arg0 ;
-(void)setOneContactsConnector:(id)arg0 ;
-(void)setOneEventKit:(id)arg0 ;
-(void)setOneEventKitConnector:(id)arg0 ;
-(void)setOneFavorites:(id)arg0 ;
-(void)setOneFlightRequester:(id)arg0 ;
-(void)setOneFlightUpdater:(id)arg0 ;
-(void)setOneInsights:(id)arg0 ;
-(void)setOneMapsSync:(id)arg0 ;
-(void)setOneMapsSyncConnector:(id)arg0 ;
-(void)setOneNetworkRequester:(id)arg0 ;
-(void)setOnePortrait:(id)arg0 ;
-(void)setOnePortraitConnector:(id)arg0 ;
-(void)setOneRoutine:(id)arg0 ;
-(void)setOneRoutineConnector:(id)arg0 ;
-(void)setOneSourceDelegate:(id)arg0 ;
-(void)setOneUser:(id)arg0 ;
-(void)setOneVirtualGarage:(id)arg0 ;
-(void)setOneVirtualGarageConnector:(id)arg0 ;


@end


#endif