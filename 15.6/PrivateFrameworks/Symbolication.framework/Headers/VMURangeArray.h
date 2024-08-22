// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMURANGEARRAY_H
#define VMURANGEARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VMURangeArray : NSObject <NSCopying>

 {
    unsigned int _count;
    *_VMURange _ranges;
    unsigned int _max;
    BOOL _sorted;
}




-(BOOL)intersectsLocation:(NSUInteger)arg0 ;
-(BOOL)intersectsRange:(struct _VMURange )arg0 ;
-(NSUInteger)indexForLocation:(NSUInteger)arg0 ;
-(NSUInteger)sumLengths;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRanges:(struct _VMURange *)arg0 count:(unsigned int)arg1 ;
-(struct _VMURange )largestRange;
-(struct _VMURange )range;
-(struct _VMURange )rangeAtIndex:(unsigned int)arg0 ;
-(struct _VMURange )rangeForLocation:(NSUInteger)arg0 ;
-(struct _VMURange )subrangeNotExcludedBySelfForRange:(struct _VMURange )arg0 ;
-(struct _VMURange *)ranges;
-(unsigned int)count;
-(void)addRange:(struct _VMURange )arg0 ;
-(void)addRanges:(id)arg0 ;
-(void)dealloc;
-(void)insertRange:(struct _VMURange )arg0 atIndex:(unsigned int)arg1 ;
-(void)removeAllRanges;
-(void)removeRangeAtIndex:(unsigned int)arg0 ;
-(void)setCapacity:(unsigned int)arg0 ;
-(void)sort;


@end


#endif