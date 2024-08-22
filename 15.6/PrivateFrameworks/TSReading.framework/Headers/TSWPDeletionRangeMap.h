// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPDELETIONRANGEMAP_H
#define TSWPDELETIONRANGEMAP_H


#import <Foundation/Foundation.h>

#import "TSWPRangeArray.h"

@interface TSWPDeletionRangeMap : NSObject {
    NSUInteger _subRangeStart;
    TSWPRangeArray *_removedRanges;
}




-(BOOL)containsCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)mappedCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)unmappedCharIndex:(NSUInteger)arg0 ;
-(id)initWithSubRange:(struct _NSRange )arg0 removeRanges:(id)arg1 ;
-(id)inverseRangesInStorageRange:(struct _NSRange )arg0 ;
-(struct _NSRange )mappedCharRange:(struct _NSRange )arg0 ;
-(struct _NSRange )unmappedCharRange:(struct _NSRange )arg0 ;
-(void)adjustByDelta:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif