// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSYNCMANAGEDHISTORYMULTIPOINTROUTE_H
#define MAPSSYNCMANAGEDHISTORYMULTIPOINTROUTE_H

@class NSNumber, NSData, NSString;


#import "MapsSyncManagedHistoryItem.h"

@interface MapsSyncManagedHistoryMultiPointRoute : MapsSyncManagedHistoryItem

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, retain) NSNumber *requiredCharge;
@property (nonatomic) short routeProgressWaypointIndex;
@property (nonatomic, copy) NSData *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *vehicleIdentifier;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif