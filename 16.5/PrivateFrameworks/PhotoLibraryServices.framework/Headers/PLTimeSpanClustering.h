// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTIMESPANCLUSTERING_H
#define PLTIMESPANCLUSTERING_H



#import "PLDataClustering.h"

@interface PLTimeSpanClustering : PLDataClustering

@property (nonatomic) NSUInteger averageNumberOfObjects; // ivar: _averageNumberOfObjects
@property (nonatomic) CGFloat minimumSpan; // ivar: _minimumSpan


-(NSUInteger)_findNearestIndexMatchingTimeSpan:(NSUInteger)arg0 inDataset:(id)arg1 ;
-(id)init;
-(id)performWithDataset:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif