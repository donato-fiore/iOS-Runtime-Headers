// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSINDEXSET_H
#define NSINDEXSET_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    ? _indexSetFlags;
    ? _internal;
}


@property (readonly) NSUInteger count;
@property (readonly) NSUInteger firstIndex;
@property (readonly) NSUInteger lastIndex;


+(BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+(BOOL)supportsSecureCoding;
+(id)_alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)indexSet;
+(id)indexSetWithIndex:(NSUInteger)arg0 ;
+(id)indexSetWithIndexes:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
+(id)indexSetWithIndexesInRange:(struct _NSRange )arg0 ;
-(BOOL)containsIndex:(NSUInteger)arg0 ;
-(BOOL)containsIndexes:(id)arg0 ;
-(BOOL)containsIndexesInRange:(struct _NSRange )arg0 ;
-(BOOL)intersectsIndexesInRange:(struct _NSRange )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIndexSet:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)__getContainmentVector:(*BOOL)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)_indexAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_indexClosestToIndex:(NSUInteger)arg0 equalAllowed:(BOOL)arg1 following:(BOOL)arg2 ;
-(NSUInteger)_indexOfRangeAfterOrContainingIndex:(NSUInteger)arg0 ;
-(NSUInteger)_indexOfRangeBeforeOrContainingIndex:(NSUInteger)arg0 ;
-(NSUInteger)_indexOfRangeContainingIndex:(NSUInteger)arg0 ;
-(NSUInteger)countOfIndexesInRange:(struct _NSRange )arg0 ;
-(NSUInteger)getIndexes:(*NSUInteger)arg0 maxCount:(NSUInteger)arg1 inIndexRange:(struct _NSRange *)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)indexGreaterThanIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexGreaterThanOrEqualToIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexLessThanIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexLessThanOrEqualToIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexPassingTest:(id)arg0 ;
-(NSUInteger)indexWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(NSUInteger)rangeCount;
-(id)_init;
-(id)_numberEnumerator;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)indexesInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(id)indexesPassingTest:(id)arg0 ;
-(id)indexesWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIndex:(NSUInteger)arg0 ;
-(id)initWithIndexSet:(id)arg0 ;
-(id)initWithIndexes:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(id)initWithIndexesInRange:(struct _NSRange )arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(struct _NSRange )rangeAtIndex:(NSUInteger)arg0 ;
-(void)__forwardEnumerateRanges:(id)arg0 ;
-(void)_setContentToContentFromIndexSet:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateIndexesInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateIndexesUsingBlock:(id)arg0 ;
-(void)enumerateIndexesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateRangesInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateRangesUsingBlock:(id)arg0 ;
-(void)enumerateRangesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif