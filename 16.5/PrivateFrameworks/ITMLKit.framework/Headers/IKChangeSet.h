// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCHANGESET_H
#define IKCHANGESET_H

@class NSIndexSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface IKChangeSet : NSObject

@property (readonly, copy, nonatomic) NSIndexSet *addedIndexes; // ivar: _addedIndexes
@property (readonly, copy, nonatomic) NSDictionary *movedIndexesByNewIndex; // ivar: _movedIndexesByNewIndex
@property (readonly, nonatomic, getter=isReducing) BOOL reducing; // ivar: _reducing
@property (readonly, copy, nonatomic) NSIndexSet *removedIndexes; // ivar: _removedIndexes
@property (readonly, copy, nonatomic) NSDictionary *updatedIndexesByNewIndex; // ivar: _updatedIndexesByNewIndex


-(NSInteger)newIndexByShiftingOldIndex:(NSInteger)arg0 grouped:(BOOL)arg1 ;
-(NSInteger)newIndexForOldIndex:(NSInteger)arg0 ;
-(NSInteger)oldIndexForNewIndex:(NSInteger)arg0 ;
-(id)changeSetByConcatenatingChangeSet:(id)arg0 ;
-(id)changeSetByConvertingOldIndexesUsingChangeSet:(id)arg0 andNewIndexesUsingChangeSet:(id)arg1 ;
-(id)changeSetBySubtractingChangeSet:(id)arg0 ;
-(id)initWithAddedIndexes:(id)arg0 removedIndexes:(id)arg1 movedIndexesByNewIndex:(id)arg2 updatedIndexesByNewIndex:(id)arg3 ;
-(id)inverseChangeSet;


@end


#endif