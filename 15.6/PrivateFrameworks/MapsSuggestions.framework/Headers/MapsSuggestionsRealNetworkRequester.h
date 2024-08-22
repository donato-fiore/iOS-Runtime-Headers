// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSREALNETWORKREQUESTER_H
#define MAPSSUGGESTIONSREALNETWORKREQUESTER_H

@class NSString;
@protocol MapsSuggestionsNetworkRequester;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsRealNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)ETAFromWaypoint:(id)arg0 toWaypoint:(id)arg1 transportType:(int)arg2 automobileOptions:(id)arg3 completion:(id)arg4 ;
-(BOOL)canonicalLocalSearchPostalAddress:(id)arg0 completion:(id)arg1 ;
-(BOOL)composedWaypointForAddressString:(id)arg0 completion:(id)arg1 ;
-(BOOL)composedWaypointForCurrentLocation:(id)arg0 completion:(id)arg1 ;
-(BOOL)composedWaypointForLocation:(id)arg0 completion:(id)arg1 ;
-(BOOL)composedWaypointForMapItem:(id)arg0 completion:(id)arg1 ;
-(BOOL)forwardGeocodeAddressString:(id)arg0 completion:(id)arg1 ;
-(BOOL)forwardGeocodePostalAddress:(id)arg0 completion:(id)arg1 ;
-(BOOL)resolveMapItemHandleData:(id)arg0 completion:(id)arg1 ;
-(BOOL)reverseGeocodeCoordinate:(struct ? )arg0 completion:(id)arg1 ;
-(BOOL)routeFromWaypoint:(id)arg0 destination:(id)arg1 currentLocation:(id)arg2 routeAttributes:(id)arg3 feedback:(id)arg4 completion:(id)arg5 ;
-(BOOL)searchPOIWithName:(id)arg0 ofPOICategory:(id)arg1 withinVenue:(id)arg2 maxResults:(NSUInteger)arg3 completion:(id)arg4 ;
-(BOOL)searchString:(id)arg0 maxResults:(unsigned int)arg1 completion:(id)arg2 ;
-(BOOL)searchWithAirportCode:(id)arg0 terminal:(id)arg1 gate:(id)arg2 completion:(id)arg3 ;
-(id)initFromResourceDepot:(id)arg0 ;


@end


#endif