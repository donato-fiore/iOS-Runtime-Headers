// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSYNCMANAGEDHISTORYDIRECTIONSITEM_H
#define MAPSSYNCMANAGEDHISTORYDIRECTIONSITEM_H

@class NSData;


#import "MapsSyncManagedHistoryItem.h"

@interface MapsSyncManagedHistoryDirectionsItem : MapsSyncManagedHistoryItem

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, copy) NSData *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif