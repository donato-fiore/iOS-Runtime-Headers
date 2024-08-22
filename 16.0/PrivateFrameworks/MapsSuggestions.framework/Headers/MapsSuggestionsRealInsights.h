// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSREALINSIGHTS_H
#define MAPSSUGGESTIONSREALINSIGHTS_H

@class NSXPCConnection, NSString;
@protocol MapsSuggestionsInsights, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsFwdGeocodingRelevanceScoreProvider.h"
#import "MapsSuggestionsRoutineRelevanceScoreProvider.h"
#import "MapsSuggestionsPortraitRelevanceScoreProvider.h"
#import "MapsSuggestionsRelevanceScorer.h"

@interface MapsSuggestionsRealInsights : NSObject <MapsSuggestionsInsights>

 {
    Queue _queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsFwdGeocodingRelevanceScoreProvider *_fwdGeoCodingRoutineScoreProvider;
    MapsSuggestionsRoutineRelevanceScoreProvider *_routineScoreProvider;
    MapsSuggestionsPortraitRelevanceScoreProvider *_portraitScoreProvider;
    MapsSuggestionsRelevanceScorer *_relevanceScorer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isTransitUser;
-(BOOL)isTransitUserHere;
-(BOOL)userHasAPaymentCard;
-(BOOL)userHasATransitCard;
-(BOOL)userHasAnExpressPaymentCard;
-(CGFloat)isTouristHere;
-(char)signalPackForDestinationEntry:(id)arg0 originCoordinate:(struct CLLocationCoordinate2D )arg1 handler:(id)arg2 ;
-(char)signalPackForDestinationMapItem:(id)arg0 originCoordinate:(struct CLLocationCoordinate2D )arg1 handler:(id)arg2 ;
-(char)signalPackForHereWithHandler:(id)arg0 ;
-(id)confidenceScoresForContacts:(id)arg0 addresses:(id)arg1 ;
-(id)confidenceScoresForMapItems:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)signalPackForDestinationEntry:(id)arg0 originCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(id)signalPackForDestinationMapItem:(id)arg0 originCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(id)signalPackForHere;
-(void)dealloc;
-(void)preload;


@end


#endif