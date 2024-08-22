// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXYEARSSUBLAYOUTCOMPOSITION_H
#define PXYEARSSUBLAYOUTCOMPOSITION_H



#import "PXGGeneratedSublayoutComposition.h"
#import "PXYearsLayoutGenerator.h"
#import "PXYearsLayoutMetrics.h"

@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXYearsLayoutGenerator *_layoutGenerator;
}


@property (copy, nonatomic) PXYearsLayoutMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSInteger presentedNumberOfColumns;


-(id)configuredLayoutGenerator;
-(struct UIEdgeInsets )sublayoutInsetsForStylableType:(NSInteger)arg0 ;


@end


#endif