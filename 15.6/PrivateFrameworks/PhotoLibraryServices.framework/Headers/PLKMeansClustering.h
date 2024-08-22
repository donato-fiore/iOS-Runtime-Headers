// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLKMEANSCLUSTERING_H
#define PLKMEANSCLUSTERING_H



#import "PLDataClustering.h"

@interface PLKMeansClustering : PLDataClustering

@property (nonatomic) NSUInteger k; // ivar: _k


-(*CGFloat)_dataArray:(id)arg0 featureCount:(unsigned int)arg1 useKeypaths:(BOOL)arg2 ;
-(id)_performWithDataset:(id)arg0 numericData:(id)arg1 progressBlock:(id)arg2 ;
-(id)performWithDataset:(id)arg0 numericData:(id)arg1 progressBlock:(id)arg2 ;
-(id)performWithDataset:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif