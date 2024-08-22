// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSYNCMANAGEDHISTORYTRANSITITEM_H
#define MAPSSYNCMANAGEDHISTORYTRANSITITEM_H

@class NSData;


#import "MapsSyncManagedHistoryItem.h"

@interface MapsSyncManagedHistoryTransitItem : MapsSyncManagedHistoryItem

@property (nonatomic) NSInteger muid;
@property (nonatomic, copy) NSData *transitLineStorage;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif