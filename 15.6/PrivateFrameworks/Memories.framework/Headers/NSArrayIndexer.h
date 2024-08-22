// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSARRAYINDEXER_H
#define NSARRAYINDEXER_H

@class NSIndexSet, NSArray;

#import <Foundation/Foundation.h>


@interface NSArrayIndexer : NSObject

@property (retain, nonatomic) NSIndexSet *deletedIndexesBeforeInsertions; // ivar: _deletedIndexesBeforeInsertions
@property (retain, nonatomic) NSArray *finalArray; // ivar: _finalArray
@property (retain, nonatomic) NSArray *initialArray; // ivar: _initialArray
@property (retain, nonatomic) NSIndexSet *insertedIndexesAfterDeletions; // ivar: _insertedIndexesAfterDeletions


+(id)indexerWithInitialArray:(id)arg0 finalArray:(id)arg1 ;
-(id)initWithInitialArray:(id)arg0 finalArray:(id)arg1 ;
-(void)analyze;


@end


#endif