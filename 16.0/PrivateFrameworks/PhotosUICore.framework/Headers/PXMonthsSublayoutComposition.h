// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMONTHSSUBLAYOUTCOMPOSITION_H
#define PXMONTHSSUBLAYOUTCOMPOSITION_H

@class NSIndexSet;


#import "PXGGeneratedSublayoutComposition.h"
#import "PXMonthsLayoutGenerator.h"
#import "PXMonthsLayoutMetrics.h"

@interface PXMonthsSublayoutComposition : PXGGeneratedSublayoutComposition {
    NSIndexSet *_indexesOfChapterHeaders;
    NSIndexSet *_indexesOfHeroes;
    PXMonthsLayoutGenerator *_layoutGenerator;
}


@property (copy, nonatomic) PXMonthsLayoutMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) BOOL presentedSingleColumn;


-(id)configuredLayoutGenerator;
-(struct UIEdgeInsets )sublayoutInsetsForStylableType:(NSInteger)arg0 ;
-(void)updateSublayoutAttributes;


@end


#endif