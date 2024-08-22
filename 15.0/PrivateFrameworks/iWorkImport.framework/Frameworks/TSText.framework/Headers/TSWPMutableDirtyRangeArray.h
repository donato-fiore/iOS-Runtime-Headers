// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPMUTABLEDIRTYRANGEARRAY_H
#define TSWPMUTABLEDIRTYRANGEARRAY_H



#import "TSWPDirtyRangeArray.h"

@interface TSWPMutableDirtyRangeArray : TSWPDirtyRangeArray



-(void)addChangedRange:(struct _NSRange )arg0 delta:(NSInteger)arg1 ;
-(void)addChangedRange:(struct _NSRange )arg0 delta:(NSInteger)arg1 allowEmpty:(BOOL)arg2 ;
-(void)addRange:(struct ? )arg0 ;
-(void)addRange:(struct ? )arg0 allowEmpty:(BOOL)arg1 ;
-(void)clear;
-(void)removeRange:(struct _NSRange )arg0 ;
-(void)subtract:(id)arg0 ;


@end


#endif