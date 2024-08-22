// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPRANGEARRAY_H
#define TSWPRANGEARRAY_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSWPRangeArray : NSObject <NSCopying, NSMutableCopying>

 {
    vector<_NSRange, std::allocator<_NSRange>> _rangeVector;
}


@property (readonly, nonatomic) NSUInteger indexCount;
@property (readonly, nonatomic) NSUInteger rangeCount;
@property (readonly, nonatomic) _NSRange superRange;


+(id)rangeArray;
+(id)rangeArrayWithRange:(struct _NSRange )arg0 ;
-(BOOL)containsCharacterAtIndex:(NSUInteger)arg0 ;
-(BOOL)containsCharacterAtIndex:(NSUInteger)arg0 inclusive:(BOOL)arg1 ;
-(BOOL)containsRange:(struct _NSRange )arg0 ;
-(BOOL)intersectsRange:(struct _NSRange )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRangeArray:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)indexForRange:(struct _NSRange )arg0 ;
-(NSUInteger)p_finish;
-(NSUInteger)p_start;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)initWithRangeVector:(*void)arg0 ;
-(id)intersection:(struct _NSRange )arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)rangesIntersecting:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )rangeContainingPosition:(NSUInteger)arg0 ;
-(void)enumerateRanges:(id)arg0 ;
-(void)enumerateRangesInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)reverseEnumerateRanges:(id)arg0 ;


@end


#endif