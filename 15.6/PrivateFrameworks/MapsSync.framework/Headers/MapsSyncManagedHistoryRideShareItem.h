// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSYNCMANAGEDHISTORYRIDESHAREITEM_H
#define MAPSSYNCMANAGEDHISTORYRIDESHAREITEM_H

@class NSData;


#import "MapsSyncManagedHistoryItem.h"

@interface MapsSyncManagedHistoryRideShareItem : MapsSyncManagedHistoryItem

@property (nonatomic, copy) NSData *endWaypoint;
@property (nonatomic, copy) NSData *startWaypoint;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif