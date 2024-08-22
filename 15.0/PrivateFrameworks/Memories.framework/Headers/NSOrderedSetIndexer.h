// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSORDEREDSETINDEXER_H
#define NSORDEREDSETINDEXER_H

@class NSIndexSet, NSOrderedSet;

#import <Foundation/Foundation.h>


@interface NSOrderedSetIndexer : NSObject

@property (retain, nonatomic) NSIndexSet *deletedIndexesBeforeInsertions; // ivar: _deletedIndexesBeforeInsertions
@property (retain, nonatomic) NSOrderedSet *finalOrderedSet; // ivar: _finalOrderedSet
@property (retain, nonatomic) NSOrderedSet *initialOrderedSet; // ivar: _initialOrderedSet
@property (retain, nonatomic) NSIndexSet *insertedIndexesAfterDeletions; // ivar: _insertedIndexesAfterDeletions


+(id)indexerWithInitialSet:(id)arg0 finalSet:(id)arg1 ;
-(id)initWithInitialSet:(id)arg0 finalSet:(id)arg1 ;
-(void)analyze;


@end


#endif