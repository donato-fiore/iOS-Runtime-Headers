// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXYEARSLAYOUTGENERATOR_H
#define PXYEARSLAYOUTGENERATOR_H



#import "PXCachingLayoutGenerator.h"

@interface PXYearsLayoutGenerator : PXCachingLayoutGenerator

@property (readonly, nonatomic) NSInteger presentedNumberOfColumns; // ivar: _presentedNumberOfColumns


-(void)updateContentSize:(struct CGSize *)arg0 itemRects:(struct CGRect *)arg1 ;


@end


#endif