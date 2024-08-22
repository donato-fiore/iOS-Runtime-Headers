// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSHISTORYMULTIPOINTROUTE_H
#define MSHISTORYMULTIPOINTROUTE_H

@class NSNumber, GEOStorageRouteRequestStorage, NSData, NSString;


#import "MSHistoryItem.h"

@interface MSHistoryMultiPointRoute : MSHistoryItem {
    ? _navigationInterrupted;
    ? _requiredCharge;
    ? _routeProgressWaypointIndex;
    ? _routeRequestStorage;
    ? _sharedETAData;
    ? _type;
    ? _vehicleIdentifier;
}


@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, retain) NSNumber *requiredCharge;
@property (nonatomic) short routeProgressWaypointIndex;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *vehicleIdentifier;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 navigationInterrupted:(BOOL)arg1 requiredCharge:(id)arg2 routeProgressWaypointIndex:(short)arg3 routeRequestStorage:(id)arg4 sharedETAData:(id)arg5 type:(short)arg6 vehicleIdentifier:(id)arg7 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif