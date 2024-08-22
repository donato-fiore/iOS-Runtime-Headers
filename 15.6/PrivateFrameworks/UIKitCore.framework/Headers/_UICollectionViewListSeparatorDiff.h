// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWLISTSEPARATORDIFF_H
#define _UICOLLECTIONVIEWLISTSEPARATORDIFF_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "_UICollectionViewListSnapshotter.h"
#import "_UIDataSourceUpdateMap.h"

@interface _UICollectionViewListSeparatorDiff : NSObject {
    _UICollectionViewListSnapshotter *_oldSnapshot;
    _UICollectionViewListSnapshotter *_newSnapshot;
    _UIDataSourceUpdateMap *_map;
    NSMutableDictionary *_insertedIndexPaths;
    NSMutableDictionary *_deletedIndexPaths;
    NSArray *_insertedSeparators;
    NSArray *_deletedSeparators;
}




-(id)indexPathsToDeleteForSeparators;
-(id)indexPathsToInsertForSeparators;
-(id)initWithOldSnapshot:(id)arg0 newSnapshot:(id)arg1 updateItems:(id)arg2 ;
-(void)_mapUpdateItems:(id)arg0 ;
-(void)_prepareInsertsAndDeletes;


@end


#endif