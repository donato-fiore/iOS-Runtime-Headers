// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NAUNIQUEARRAYDIFF_H
#define NAUNIQUEARRAYDIFF_H

@class NSIndexSet, NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface NAUniqueArrayDiff : NSObject

@property (retain, nonatomic) NSIndexSet *changedIndexes; // ivar: _changedIndexes
@property (retain, nonatomic) NSIndexSet *deletedIndexes; // ivar: _deletedIndexes
@property (retain, nonatomic) NSArray *fromArray; // ivar: _fromArray
@property (retain, nonatomic) NSIndexSet *insertedIndexes; // ivar: _insertedIndexes
@property (retain, nonatomic) NSSet *movedIndexes; // ivar: _movedIndexes
@property (readonly, nonatomic) NSUInteger numberOfOperations;
@property (retain, nonatomic) NSArray *toArray; // ivar: _toArray


+(id)_createContainerSetFromArray:(id)arg0 options:(id)arg1 ;
+(id)diffFromArray:(id)arg0 toArray:(id)arg1 options:(id)arg2 ;
-(void)enumerateChangesUsingBlock:(id)arg0 ;
-(void)enumerateDeletesUsingBlock:(id)arg0 ;
-(void)enumerateInsertsUsingBlock:(id)arg0 ;
-(void)enumerateMovesUsingBlock:(id)arg0 ;


@end


#endif