// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOMAPITEMTRANSITINFOSNIPPET_H
#define _GEOMAPITEMTRANSITINFOSNIPPET_H

@class NSArray, NSString, NSDate;
@protocol GEOMapItemTransitInfo, GEOTransitNearbySchedule;

#import <Foundation/Foundation.h>

#import "GEOPDTransitInfoSnippet.h"
#import "GEOComposedRoute.h"

@interface _GEOMapItemTransitInfoSnippet : NSObject <GEOMapItemTransitInfo>

 {
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
    NSArray *_labelItems;
    NSString *_displayName;
}


@property (readonly, nonatomic) GEOComposedRoute *composedRoute;
@property (readonly, nonatomic) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *departureSequences;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasTransitIncidentComponent;
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
-(id)allSequencesForSystem:(id)arg0 container:(id)arg1 ;
-(id)allSequencesForSystem:(id)arg0 direction:(id)arg1 ;
-(id)departureSequenceContainersForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 validForDateFromBlock:(id)arg2 ;
-(id)departureSequencesForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 container:(id)arg2 validForDateFromBlock:(id)arg3 ;
-(id)departureSequencesForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 direction:(id)arg2 validForDateFromBlock:(id)arg3 ;
-(id)directionsForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 validForDateFromBlock:(id)arg2 ;
// -(id)directionsForSystem:(id)arg0 excludingIncidentEntities:(id)arg1 validForDateFromBlock:(id)arg2 hasSequencesWithNoDirection:(unk)arg3  ;
-(id)headSignsForLine:(id)arg0 ;
// -(id)inactiveLinesForSystem:(id)arg0 relativeToDateFromBlock:(id)arg1 excludingIncidentEntities:(unk)arg2 usingContainers:(id)arg3  ;
-(id)initWithTransitInfoSnippet:(id)arg0 ;
-(id)linesForSystem:(id)arg0 ;
-(id)serviceResumesResultForLine:(id)arg0 excludingIncidentEntities:(id)arg1 afterDate:(id)arg2 usingContainers:(BOOL)arg3 ;


@end


#endif