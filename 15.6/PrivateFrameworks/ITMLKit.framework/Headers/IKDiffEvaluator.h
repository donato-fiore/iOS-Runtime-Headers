// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKDIFFEVALUATOR_H
#define IKDIFFEVALUATOR_H

@class NSIndexSet, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface IKDiffEvaluator : NSObject

@property (readonly, copy, nonatomic) NSIndexSet *addedIndexes; // ivar: _addedIndexes
@property (readonly, copy, nonatomic) NSDictionary *movedIndexesByNewIndex; // ivar: _movedIndexesByNewIndex
@property (readonly, copy, nonatomic) NSArray *objects; // ivar: _objects
@property (readonly, copy, nonatomic) NSDictionary *oldIndexesByNewIndex; // ivar: _oldIndexesByNewIndex
@property (readonly, copy, nonatomic) NSArray *oldObjects; // ivar: _oldObjects
@property (readonly, copy, nonatomic) NSIndexSet *removedIndexes; // ivar: _removedIndexes


-(id)initWithObjects:(id)arg0 oldObjects:(id)arg1 hashing:(id)arg2 ;
-(void)_evaluateWithHashing:(id)arg0 ;
-(void)enumerateCommonObjectsUsingBlock:(id)arg0 ;


@end


#endif