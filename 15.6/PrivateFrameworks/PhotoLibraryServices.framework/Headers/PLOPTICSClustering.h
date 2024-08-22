// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLOPTICSCLUSTERING_H
#define PLOPTICSCLUSTERING_H

@class NSProgress;


#import "PLDataDensityClustering.h"

@interface PLOPTICSClustering : PLDataDensityClustering {
    NSProgress *_progress;
}




-(NSInteger)updateReachibilityDistance:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(id)extractRootClusters:(id)arg0 inOriginalDataset:(id)arg1 inProgressBlock:(id)arg2 ;
-(id)extractSubClusters:(id)arg0 inDataset:(id)arg1 parentIndex:(NSInteger)arg2 inProgressBlock:(id)arg3 ;
-(id)orderedDatasetByReachabilityDistance:(id)arg0 ;
-(id)performWithDataset:(id)arg0 progressBlock:(id)arg1 ;
-(id)prepareOrderedDatasetIndexRange:(struct _NSRange )arg0 inDataset:(id)arg1 ;
-(id)preprocessData:(id)arg0 ;
-(void)updateNeighbors:(id)arg0 forIndex:(NSUInteger)arg1 ;


@end


#endif