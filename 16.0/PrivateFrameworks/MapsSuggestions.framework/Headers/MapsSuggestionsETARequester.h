// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSETAREQUESTER_H
#define MAPSSUGGESTIONSETAREQUESTER_H

@class CLLocation, GEOComposedWaypoint, NSMutableDictionary, NSLock, GEOAutomobileOptions, NSString;
@protocol MapsSuggestionsObject, OS_dispatch_queue, MapsSuggestionsNetworkRequester, MapsSuggestionsPredictor;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsETARequirements.h"

@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<MapsSuggestionsNetworkRequester> *_networkRequester;
    id<MapsSuggestionsPredictor> *_transportModePredictor;
    MapsSuggestionsETARequirements *_etaRequirements;
    CLLocation *_currentLocationUsed;
    GEOComposedWaypoint *_currentLocationWaypoint;
    NSMutableDictionary *_waypoints;
    NSLock *_waypointsLock;
    int _forcedTransportMode;
}


@property (retain) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property int mapType; // ivar: _mapType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)ETAsFromLocation:(id)arg0 toEntries:(id)arg1 completion:(id)arg2 ;
-(BOOL)transportTypeFromLocation:(id)arg0 toEntry:(id)arg1 completion:(id)arg2 ;
-(id)initWithNetworkRequester:(id)arg0 transportModePredictor:(id)arg1 requirements:(id)arg2 ;
-(id)networkRequester;
-(void)forceTransportType:(int)arg0 ;


@end


#endif