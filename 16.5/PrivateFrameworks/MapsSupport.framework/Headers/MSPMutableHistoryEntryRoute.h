// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPMUTABLEHISTORYENTRYROUTE_H
#define MSPMUTABLEHISTORYENTRYROUTE_H

@class NSData, GEOAutomobileOptions, GEOCyclingOptions, NSString, GEOComposedWaypoint, GEOURLRouteHandle, GEOTransitOptions, NSDate, GEOWalkingOptions, NSArray;
@protocol MSPHistoryEntryRoute, MSPRouteInformationSource;


#import "MSPMutableHistoryEntry.h"

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute>



@property (readonly, nonatomic) NSData *archivedSharedTripData;
@property (readonly, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic, getter=navigationWasInterrupted) BOOL navigationInterrupted;
@property (readonly, nonatomic) BOOL navigationWasInterrupted;
@property (readonly, nonatomic) GEOURLRouteHandle *routeHandle;
@property (copy, nonatomic) NSObject<MSPRouteInformationSource> *routeInformationSource; // ivar: _routeInformationSource
@property (readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property (readonly, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) NSInteger transportType;
@property (readonly, copy, nonatomic) NSDate *usageDate;
@property (readonly, nonatomic) GEOWalkingOptions *walkingOptions;
@property (readonly, nonatomic) NSArray *waypoints;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableObjectProtocol;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg0 ;
-(id)_routeRequestStorage;
-(id)initWithStorage:(id)arg0 ;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;


@end


#endif