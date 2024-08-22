// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSYNCMANAGEDCOLLECTIONTRANSITITEM_H
#define MAPSSYNCMANAGEDCOLLECTIONTRANSITITEM_H

@class NSData;


#import "MapsSyncManagedCollectionItem.h"

@interface MapsSyncManagedCollectionTransitItem : MapsSyncManagedCollectionItem

@property (nonatomic) NSInteger muid;
@property (nonatomic, copy) NSData *transitLineStorage;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif