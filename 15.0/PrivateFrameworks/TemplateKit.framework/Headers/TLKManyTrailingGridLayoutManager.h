// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKMANYTRAILINGGRIDLAYOUTMANAGER_H
#define TLKMANYTRAILINGGRIDLAYOUTMANAGER_H



#import "TLKGridLayoutManager.h"

@interface TLKManyTrailingGridLayoutManager : TLKGridLayoutManager

@property (nonatomic) _NSRange ignoreRange; // ivar: _ignoreRange


+(id)computeTruncationForAlignments:(id)arg0 indexForFirstTrailingColumn:(NSUInteger)arg1 totalEqualColumns:(NSUInteger)arg2 ;
-(CGFloat)gridArrangement:(id)arg0 widthOfColumnAtIndex:(NSInteger)arg1 spacingAfter:(*CGFloat)arg2 ;
-(struct CGSize )sizeForFittingSize:(struct CGSize )arg0 forRow:(id)arg1 ;


@end


#endif