// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLAGGREGATEALBUMLISTCHANGENOTIFICATION_H
#define PLAGGREGATEALBUMLISTCHANGENOTIFICATION_H



#import "PLAssetContainerListChangeNotification.h"
#import "PLAggregateAlbumList.h"

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    NSUInteger _indexOffet;
}




+(id)notificationForAggregateAlbumList:(id)arg0 fromAlbumListChangeNotification:(id)arg1 indexOffset:(NSUInteger)arg2 ;
-(BOOL)_getOldSet:(*id)arg0 newSet:(*id)arg1 ;
-(BOOL)shouldReload;
-(NSUInteger)snapshotIndexForContainedObject:(id)arg0 ;
-(id)albumList;
-(id)changedIndexes;
-(id)changedIndexesRelativeToSnapshot;
-(id)changedObjects;
-(id)deletedIndexes;
-(id)deletedObjects;
-(id)initWithAggregateAlbumList:(id)arg0 fromAlbumListChangeNotification:(id)arg1 indexOffset:(NSUInteger)arg2 ;
-(id)insertedIndexes;
-(id)insertedObjects;
-(id)object;
-(void)dealloc;
-(void)enumerateMovesWithBlock:(id)arg0 ;


@end


#endif