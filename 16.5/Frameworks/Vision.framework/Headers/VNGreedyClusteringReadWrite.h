// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNGREEDYCLUSTERINGREADWRITE_H
#define VNGREEDYCLUSTERINGREADWRITE_H

@protocol VNClusteringWritable;


#import "VNGreedyClusteringReadOnly.h"

@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable>

 {
    shared_ptr<vision::mod::FaceClustering> m_ClusteringImpl;
}




-(NSInteger)_cancellableUpdate:(*void)arg0 facesToMove:(*void)arg1 requestRevision:(NSUInteger)arg2 ;
-(id)getClustersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif