// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPMUTABLEHISTORYENTRYROUTE_H
#define MSPMUTABLEHISTORYENTRYROUTE_H

@class NSString, GEOComposedWaypoint, GEOURLRouteHandle, NSDate;
@protocol MSPHistoryEntryRoute, MSPRouteInformationSource;


#import "MSPMutableHistoryEntry.h"

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=navigationWasInterrupted) BOOL navigationInterrupted;
@property (readonly, nonatomic) BOOL navigationWasInterrupted;
@property (readonly, nonatomic) GEOURLRouteHandle *routeHandle;
@property (copy, nonatomic) NSObject<MSPRouteInformationSource> *routeInformationSource; // ivar: _routeInformationSource
@property (readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property (readonly, nonatomic) NSInteger transportType;
@property (readonly, copy, nonatomic) NSDate *usageDate;


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