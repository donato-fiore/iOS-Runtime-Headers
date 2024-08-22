// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHRESOURCECHOOSERLIST_H
#define PHRESOURCECHOOSERLIST_H

@class NSSortDescriptor, NSManagedObjectContext, NSArray, NSMutableArray;
@protocol PHResourceChooserAsset;

#import <Foundation/Foundation.h>


@interface PHResourceChooserList : NSObject {
    id<PHResourceChooserAsset> *_asset;
    id *_itemHandler;
    id *_endOfListHandler;
    NSInteger _hintDataCurrentOffset;
    NSInteger _hintDataNextItemOffset;
    BOOL _finishedPresentingFromHints;
    BOOL _didObserveThumbnailStoreKey;
    NSSortDescriptor *_sortDescriptor;
    NSManagedObjectContext *_context;
    NSArray *_nonHintResources;
    NSArray *_unvisitedNonHintResources;
    NSUInteger _lastPresentedFullResourceIndex;
    BOOL _finishedPresentingFromFetchedResources;
    NSMutableArray *_visitedKeys;
    NSUInteger _enumerationDirection;
}




-(BOOL)reversed;
-(id)init;
-(void)continueEnumeratingWithSourceOptions:(NSUInteger)arg0 ;
-(void)moveFirst;


@end


#endif