// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPDIRTYRANGEARRAY_H
#define TSWPDIRTYRANGEARRAY_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSWPDirtyRangeArray : NSObject <NSCopying, NSMutableCopying>

 {
    vector<TSWPDirtyRange, std::allocator<TSWPDirtyRange>> _rangeVector;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;


-(BOOL)isEqualToDirtyRangeArray:(id)arg0 ;
-(NSInteger)delta;
-(NSUInteger)indexForRange:(struct _NSRange )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dirtyRangesIntersecting:(struct _NSRange )arg0 ;
-(id)init;
-(id)initWithDirtyRange:(struct ? )arg0 ;
-(id)initWithRangeVector:(*void)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )dirtyRangeAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )superRange;
-(void)enumerateWithBlock:(id)arg0 ;


@end


#endif