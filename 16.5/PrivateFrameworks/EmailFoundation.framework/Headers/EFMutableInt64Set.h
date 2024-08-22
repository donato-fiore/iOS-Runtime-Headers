// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFMUTABLEINT64SET_H
#define EFMUTABLEINT64SET_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface EFMutableInt64Set : NSObject <NSCopying, NSMutableCopying>

 {
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    *NSInteger _storage;
}




+(id)indexSet;
+(id)indexSetWithIndexesInRange:(struct _EFInt64Range )arg0 ;
-(BOOL)containsIndex:(NSInteger)arg0 ;
-(NSInteger)_insertionPositionOfIndex:(NSInteger)arg0 ;
-(NSInteger)_positionOfIndex:(NSInteger)arg0 ;
-(NSInteger)firstIndex;
-(NSInteger)indexGreaterThanIndex:(NSInteger)arg0 ;
-(NSInteger)lastIndex;
-(NSUInteger)_enumerateIndexesInRange:(struct _EFInt64Range *)arg0 maxCount:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(NSUInteger)count;
-(NSUInteger)getIndexes:(*NSInteger)arg0 maxCount:(NSUInteger)arg1 inIndexRange:(struct _EFInt64Range *)arg2 ;
-(id)commaSeparatedString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getIndexesInRange:(struct _EFInt64Range )arg0 maxCount:(NSUInteger)arg1 ;
-(id)getMaxCountOfIndexes:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_garbageCollectStorageIfNecessary;
-(void)_incrementStorageIfNecessaryForCount:(NSUInteger)arg0 ;
-(void)addIndex:(NSInteger)arg0 ;
-(void)addIndexes:(id)arg0 ;
-(void)dealloc;
-(void)enumerateIndexesUsingBlock:(id)arg0 ;
-(void)intersectIndexes:(id)arg0 ;
-(void)removeAllIndexes;
-(void)removeIndex:(NSInteger)arg0 ;
-(void)removeIndexes:(id)arg0 ;


@end


#endif