// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMONTHSLAYOUTGENERATOR_H
#define PXMONTHSLAYOUTGENERATOR_H



#import "PXCachingLayoutGenerator.h"

@interface PXMonthsLayoutGenerator : PXCachingLayoutGenerator

@property (readonly, nonatomic) BOOL presentedSingleColumn; // ivar: _presentedSingleColumn


-(void)updateContentSize:(struct CGSize *)arg0 itemRects:(struct CGRect *)arg1 itemKinds:(*NSInteger)arg2 ;


@end


#endif