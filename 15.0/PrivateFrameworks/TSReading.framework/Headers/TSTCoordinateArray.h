// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCOORDINATEARRAY_H
#define TSTCOORDINATEARRAY_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface TSTCoordinateArray : NSObject {
    unsigned int mOffset;
    unsigned int mCount;
    *CGFloat mCoordinates;
    CGFloat mAverage;
    NSMutableIndexSet *mVisibleIndices;
    BOOL mLayoutDirectionIsLeftToRight;
    CGFloat mTableWidth;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCount:(unsigned int)arg0 atOffset:(unsigned int)arg1 ;
-(void)dealloc;
-(void)hasRightToLeftOrderingWithWidth:(CGFloat)arg0 ;


@end


#endif