// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPRANGEMAP_H
#define TSWPRANGEMAP_H


#import <Foundation/Foundation.h>


@interface TSWPRangeMap : NSObject {
    ? _unmappedIndexes;
    ? _mappedIndexes;
}


@property ? mappedIndexes;
@property (nonatomic) _NSRange subRange; // ivar: _subRange
@property ? unmappedIndexes;


-(NSUInteger)mappedCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)p_extendLeftMappedIndex:(NSUInteger)arg0 ;
-(NSUInteger)p_extendRightMappedIndex:(NSUInteger)arg0 ;
-(NSUInteger)unmappedCharIndex:(NSUInteger)arg0 ;
-(id)initWithSubRange:(struct _NSRange )arg0 unmappedIndexes:(*void)arg1 affinity:(int)arg2 ;
-(id)initWithSubRange:(struct _NSRange )arg0 unmappedIndexes:(*void)arg1 isBackwardAffinities:(*void)arg2 ;
-(id)initWithSubRange:(struct _NSRange )arg0 unmappedPairIndexes:(*void)arg1 ;
-(struct _NSRange )mappedCharRange:(struct _NSRange )arg0 ;
-(struct _NSRange )unmappedCharRange:(struct _NSRange )arg0 ;
-(void)adjustByDelta:(NSInteger)arg0 startingAt:(NSUInteger)arg1 ;


@end


#endif