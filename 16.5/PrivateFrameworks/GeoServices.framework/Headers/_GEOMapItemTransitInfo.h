// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOMAPITEMTRANSITINFO_H
#define _GEOMAPITEMTRANSITINFO_H

@class NSArray, NSTimeZone, NSDate, NSString, NSMapTable;
@protocol GEOMapItemTransitInfo, GEOTransitNearbySchedule;

#import <Foundation/Foundation.h>

#import "GEOPDTransitInfo.h"
#import "GEOPDTransitSchedule.h"
#import "GEOComposedRoute.h"
#import "GEOPDTransitNearbySchedule.h"

@interface _GEOMapItemTransitInfo : NSObject <GEOMapItemTransitInfo>

 {
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitSchedule *_transitSchedule;
    NSArray *_systems;
    NSArray *_lines;
    NSArray *_departureSequences;
    NSTimeZone *_timeZone;
    NSArray *_incidents;
    NSDate *_incidentExpirationDate;
    NSArray *_connections;
    NSString *_displayName;
    NSMapTable *_cachedHeadSignsForLine;
    ? _coordinate;
    NSArray *_transitStops;
    GEOComposedRoute *_composedRoute;
    GEOPDTransitNearbySchedule *_unprocessedNearbySchedule;
    id<GEOTransitNearbySchedule> *_nearbySchedule;
}


@property (readonly, nonatomic) GEOComposedRoute *composedRoute;
@property (readonly, nonatomic) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *departureSequences;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasTransitIncidentComponent; // ivar: _hasTransitIncidentComponent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) BOOL isTransitIncidentsTTLExpired;
@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) NSDate *lastFullScheduleValidDate;
@property (readonly, nonatomic) NSArray *lines;
@property (readonly, nonatomic) NSUInteger linesCount;
@property (readonly, nonatomic) NSObject<GEOTransitNearbySchedule> *nearbySchedule;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *systems;
@property (readonly, nonatomic) NSUInteger systemsCount;
@property (readonly, nonatomic) CGFloat timeToLive;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *transitTripStops;


-(NSUInteger)numAdditionalDeparturesForSequence:(id)arg0 ;
-(id)_departureSequencesForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 container:(id)arg2 validForDateFromBlock:(id)arg3 ;
-(id)_departureSequencesForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 ignoreDirectionFilter:(BOOL)arg2 direction:(id)arg3 validForDateFromBlock:(id)arg4 ;
-(id)allSequencesForSystem:(id)arg0 container:(id)arg1 ;
-(id)allSequencesForSystem:(id)arg0 direction:(id)arg1 ;
-(id)departureSequenceContainersForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 validForDateFromBlock:(id)arg2 ;
-(id)departureSequencesForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 container:(id)arg2 validForDateFromBlock:(id)arg3 ;
-(id)departureSequencesForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 direction:(id)arg2 validForDateFromBlock:(id)arg3 ;
// -(id)directionsForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 validForDateFromBlock:(id)arg2 hasSequencesWithNoDirection:(unk)arg3  ;
-(id)headSignsForLine:(id)arg0 ;
// -(id)inactiveLinesForSystem:(id)arg0 relativeToDateFromBlock:(id)arg1 excludingIncidentEntities:(unk)arg2 usingContainers:(id)arg3  ;
-(id)initWithTransitInfo:(id)arg0 schedule:(id)arg1 timeZone:(id)arg2 incidents:(id)arg3 hasTransitIncidentComponent:(BOOL)arg4 incidentExpirationDate:(id)arg5 providerID:(int)arg6 coordinate:(struct ? )arg7 transitStops:(id)arg8 composedRoute:(id)arg9 nearbySchedule:(id)arg10 ;
-(id)linesForSystem:(id)arg0 ;
-(id)serviceResumesResultForLine:(id)arg0 excludingIncidentEntities:(id)arg1 afterDate:(id)arg2 usingContainers:(BOOL)arg3 ;


@end


#endif