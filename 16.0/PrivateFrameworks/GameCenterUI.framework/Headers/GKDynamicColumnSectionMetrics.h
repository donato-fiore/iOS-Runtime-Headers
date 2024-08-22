// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDYNAMICCOLUMNSECTIONMETRICS_H
#define GKDYNAMICCOLUMNSECTIONMETRICS_H



#import "GKSectionMetrics.h"

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics

@property (nonatomic) NSUInteger columnsInLandscape; // ivar: _columnsInLandscape
@property (nonatomic) NSUInteger columnsInPortrait; // ivar: _columnsInPortrait


+(id)dynamicColumnSectionMetricsWithColumnsInPortrait:(NSUInteger)arg0 columnsInLandscape:(NSUInteger)arg1 ;
+(id)dynamicColumnSectionMetricsWithColumnsInPortrait:(NSUInteger)arg0 columnsInLandscape:(NSUInteger)arg1 forIdiom:(NSInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdiom:(NSInteger)arg0 ;
-(struct CGSize )itemSizeForCollectionView:(id)arg0 ;
-(void)updateColumnsInPortrait:(NSUInteger)arg0 columnsInLandscape:(NSUInteger)arg1 ;


@end


#endif