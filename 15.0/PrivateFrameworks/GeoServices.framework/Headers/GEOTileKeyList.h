// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTILEKEYLIST_H
#define GEOTILEKEYLIST_H

@protocol OSLogCoding, NSFastEnumeration, NSCopying;

#import <Foundation/Foundation.h>

#import "GEOTileKeyMap.h"

@interface GEOTileKeyList : NSObject <OSLogCoding, NSFastEnumeration, NSCopying>

 {
    *void _head;
    *void _tail;
    GEOTileKeyMap *_map;
    NSUInteger _count;
    NSUInteger _maxCount;
    NSUInteger _mutationsCount;
}




+(id)formatOSLogData:(id)arg0 ;
+(id)listFromXPCData:(id)arg0 ;
-(BOOL)addKey:(struct _GEOTileKey *)arg0 lostKey:(struct _GEOTileKey *)arg1 ;
-(BOOL)containsKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)intersectsList:(id)arg0 ;
-(BOOL)removeKey:(struct _GEOTileKey *)arg0 ;
-(NSUInteger)capacity;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithMaxCapacity:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 maxCapacity:(NSUInteger)arg1 ;
-(id)initWithMaxCapacity:(NSUInteger)arg0 ;
-(id)listWithout:(id)arg0 ;
-(id)newXPCData;
-(id)sublistWithRange:(struct _NSRange )arg0 ;
-(struct _GEOTileKey *)firstKey;
-(struct _GEOTileKey *)keyAtIndex:(NSUInteger)arg0 ;
-(void)_addKeyToBack:(struct _GEOTileKey *)arg0 ;
-(void)addKey:(struct _GEOTileKey *)arg0 ;
-(void)dealloc;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;
-(void)removeKeysMatchingPredicate:(id)arg0 ;
-(void)sort:(id)arg0 ;


@end


#endif