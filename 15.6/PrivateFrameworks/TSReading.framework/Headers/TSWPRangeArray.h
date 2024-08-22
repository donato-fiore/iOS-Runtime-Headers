// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPRANGEARRAY_H
#define TSWPRANGEARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPRangeArray : NSObject <NSCopying>

 {
    *void _rangeVectorOpaque;
}


@property (readonly, nonatomic) NSUInteger finish;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSUInteger rangeCount;
@property (readonly, nonatomic) NSUInteger start;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)initWithRangeVector:(*void)arg0 ;
-(struct _NSRange )rangeAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange *)rangeReferenceAtIndex:(NSUInteger)arg0 ;
-(void)addRange:(struct _NSRange )arg0 ;
-(void)dealloc;
-(void)enumerateRangesInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)enumerateRangesUsingBlock:(id)arg0 ;
-(void)removeRange:(struct _NSRange )arg0 ;


@end


#endif