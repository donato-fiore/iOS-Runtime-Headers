// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCRECENTSENUMERATORBATCH_H
#define BRCRECENTSENUMERATORBATCH_H

@class NSMutableOrderedSet;
@protocol OS_dispatch_queue, NSFileProviderEnumerationObserver;

#import <Foundation/Foundation.h>


@interface BRCRecentsEnumeratorBatch : NSObject {
    NSMutableOrderedSet *_toIndexItems;
    NSMutableOrderedSet *_deletedItemIDs;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSFileProviderEnumerationObserver> *_observer;
}


@property (nonatomic) NSUInteger rank; // ivar: _rank


-(NSUInteger)batchCount;
-(id)description;
-(id)init;
-(void)addDeletionOfFileObjectID:(id)arg0 rank:(NSUInteger)arg1 ;
-(void)addIndexOfItem:(id)arg0 ;
-(void)listItems:(id)arg0 ;


@end


#endif