// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSAMPLINGCLUSTERING_H
#define PLSAMPLINGCLUSTERING_H



#import "PLDataDensityClustering.h"

@interface PLSamplingClustering : PLDataDensityClustering

@property (nonatomic) NSUInteger numberOfClusters; // ivar: _numberOfClusters


-(id)performWithDataset:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif