// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUUUIDSETSTORE_H
#define TSUUUIDSETSTORE_H

@class NSLock, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSUSparseArray.h"

@interface TSUUUIDSetStore : NSObject <NSCopying>

 {
    NSLock *_lock;
    TSUSparseArray *_uuidSetForIndex;
    NSMutableDictionary *_indexesUsingUuid;
    unsigned int _highestIndex;
}


@property (readonly) NSUInteger count;


-(BOOL)containsUuidSet:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)indexesUsingAnyOfUuids:(*void)arg0 ;
-(id)indexesUsingUuid:(*void)arg0 ;
-(id)init;
-(id)setForIndex:(unsigned int)arg0 ;
-(id)subsetStoreForIndexes:(id)arg0 ;
-(unsigned int)addSet:(id)arg0 ;
-(unsigned int)addSetForSingleUuid:(*void)arg0 ;
-(unsigned int)addSetForUuids:(*void)arg0 ;
-(unsigned int)indexOfSet:(id)arg0 ;
-(void)_foreachUuidSet:(id)arg0 ;
-(void)foreachUuidSet:(id)arg0 ;
-(void)p_addSet:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)removeSetAtIndex:(unsigned int)arg0 ;


@end


#endif