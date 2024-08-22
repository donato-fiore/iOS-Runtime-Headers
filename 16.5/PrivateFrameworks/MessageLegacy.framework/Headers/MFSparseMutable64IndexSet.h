// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSPARSEMUTABLE64INDEXSET_H
#define MFSPARSEMUTABLE64INDEXSET_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface MFSparseMutable64IndexSet : NSObject <NSCopying, NSMutableCopying>

 {
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    *NSUInteger _storage;
}




+(id)indexSet;
-(BOOL)containsIndex:(NSUInteger)arg0 ;
-(NSUInteger)_insertionPositionOfIndex:(NSUInteger)arg0 ;
-(NSUInteger)_positionOfIndex:(NSUInteger)arg0 ;
-(NSUInteger)count;
-(NSUInteger)firstIndex;
-(NSUInteger)indexGreaterThanIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_garbageCollectStorageIfNecessary;
-(void)_incrementStorageIfNecessaryForCount:(NSUInteger)arg0 ;
-(void)addIndex:(NSUInteger)arg0 ;
-(void)addIndexes:(id)arg0 ;
-(void)dealloc;
-(void)enumerateIndexesWithBlock:(id)arg0 ;
-(void)removeIndex:(NSUInteger)arg0 ;


@end


#endif