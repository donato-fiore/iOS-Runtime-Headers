// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSYNCMANAGEDHISTORYCURATEDCOLLECTION_H
#define MAPSSYNCMANAGEDHISTORYCURATEDCOLLECTION_H



#import "MapsSyncManagedHistoryItem.h"

@interface MapsSyncManagedHistoryCuratedCollection : MapsSyncManagedHistoryItem

@property (nonatomic) NSInteger curatedCollectionIdentifier;
@property (nonatomic) int resultProviderIdentifier;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif