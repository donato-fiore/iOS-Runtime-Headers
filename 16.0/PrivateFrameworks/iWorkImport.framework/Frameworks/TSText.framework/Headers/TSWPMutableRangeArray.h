// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPMUTABLERANGEARRAY_H
#define TSWPMUTABLERANGEARRAY_H



#import "TSWPRangeArray.h"

@interface TSWPMutableRangeArray : TSWPRangeArray



-(struct _NSRange )replacedTextAtRange:(struct _NSRange )arg0 delta:(NSInteger)arg1 ;
-(void)addRange:(struct _NSRange )arg0 ;
-(void)clear;
-(void)concatenateRange:(struct _NSRange )arg0 ;
-(void)insertRange:(struct _NSRange )arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeRange:(struct _NSRange )arg0 ;
-(void)removeRangesInRange:(struct _NSRange )arg0 ;
-(void)replaceRangeAtIndex:(NSUInteger)arg0 withRange:(struct _NSRange )arg1 ;
-(void)subtract:(id)arg0 ;
-(void)unionWith:(id)arg0 ;


@end


#endif