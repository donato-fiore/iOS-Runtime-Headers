// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUNONOVERLAPPINGRANGEARRAY_H
#define VMUNONOVERLAPPINGRANGEARRAY_H



#import "VMURangeArray.h"

@interface VMUNonOverlappingRangeArray : VMURangeArray



-(id)subtract:(id)arg0 mergeRanges:(BOOL)arg1 ;
-(void)_mergeAllBitsOfRange:(struct _VMURange )arg0 excludingRanges:(id)arg1 mergeRanges:(BOOL)arg2 ;
-(void)addOrExtendRange:(struct _VMURange )arg0 ;
-(void)mergeRange:(struct _VMURange )arg0 ;
-(void)mergeRange:(struct _VMURange )arg0 excludingRanges:(id)arg1 ;
-(void)mergeRanges:(id)arg0 ;
-(void)mergeRanges:(id)arg0 excludingRanges:(id)arg1 ;
-(void)sortAndMergeRanges;


@end


#endif