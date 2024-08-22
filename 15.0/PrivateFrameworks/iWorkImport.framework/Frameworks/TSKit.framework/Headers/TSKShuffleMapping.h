// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKSHUFFLEMAPPING_H
#define TSKSHUFFLEMAPPING_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSKShuffleMapping : NSObject <NSCopying>

 {
    vector<unsigned int, std::allocator<unsigned int>> _reverseMapping;
    BOOL _reverseMappingValid;
}


@property (nonatomic) unsigned int destinationIndexForMove; // ivar: _destinationIndexForMove
@property (readonly, nonatomic) unsigned int endIndex; // ivar: _endIndex
@property (nonatomic) unsigned int firstMovedIndex; // ivar: _firstMovedIndex
@property (readonly, nonatomic) BOOL isIdentityMapping;
@property (readonly, nonatomic) BOOL isMoveOperation; // ivar: _isMoveOperation
@property (readonly, nonatomic) *void mapping; // ivar: _mapping
@property (readonly, nonatomic) unsigned int mappingSize;
@property (nonatomic) unsigned int numberOfIndexesMoved; // ivar: _numberOfIndexesMoved
@property (readonly, nonatomic) unsigned int startIndex; // ivar: _startIndex


-(BOOL)isMove;
-(id)copyInverse;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForMovedIndexesStartingAtIndex:(unsigned int)arg0 destinationIndex:(unsigned int)arg1 numberOfIndexes:(unsigned int)arg2 ;
-(id)initWithStartIndex:(unsigned int)arg0 endIndex:(unsigned int)arg1 ;
-(id)initWithStartIndex:(unsigned int)arg0 endIndex:(unsigned int)arg1 mapping:(*void)arg2 ;
-(id)p_copyWithZone:(struct _NSZone *)arg0 mapping:(*void)arg1 ;
-(id)sourceIndexes;
-(unsigned int)mapIndex:(unsigned int)arg0 ;
-(unsigned int)reverseMapIndex:(unsigned int)arg0 ;
-(void)applyMappingToIndexSet:(id)arg0 ;
-(void)enumerateMappingFollowingSwapsUsingBlock:(id)arg0 ;
-(void)enumerateMappingRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)insert:(unsigned int)arg0 IndexesAtIndex:(unsigned int)arg1 insertingBefore:(BOOL)arg2 ;
-(void)p_buildReverseMapping;
-(void)p_invalidateReverseMapping;
-(void)remove:(unsigned int)arg0 IndexesAtIndex:(unsigned int)arg1 ;
-(void)swapIndex:(unsigned int)arg0 withIndex:(unsigned int)arg1 ;


@end


#endif