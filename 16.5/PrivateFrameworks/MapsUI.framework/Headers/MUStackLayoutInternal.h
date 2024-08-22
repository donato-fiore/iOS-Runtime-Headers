// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSTACKLAYOUTINTERNAL_H
#define MUSTACKLAYOUTINTERNAL_H

@protocol MULayoutItem;


#import "MUConstraintLayoutInternal.h"

@interface MUStackLayoutInternal : MUConstraintLayoutInternal {
    ? builder;
}


@property (nonatomic) NSInteger alignment;
@property (nonatomic) BOOL alignmentBoundsContent;
@property (nonatomic) float alignmentFittingSizePriority;
@property (nonatomic) NSInteger axis;
@property (nonatomic, weak) NSObject<MULayoutItem> *container;
@property (nonatomic) NSInteger distribution;
@property (nonatomic) BOOL distributionBoundsContent;
@property (nonatomic) float distributionFittingSizePriority;
@property (nonatomic) NSDirectionalEdgeInsets insets;
@property (nonatomic) CGFloat spacing;


-(id)initWithContainer:(id)arg0 axis:(NSInteger)arg1 ;


@end


#endif