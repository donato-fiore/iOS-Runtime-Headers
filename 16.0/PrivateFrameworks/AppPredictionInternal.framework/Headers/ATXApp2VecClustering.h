// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPP2VECCLUSTERING_H
#define ATXAPP2VECCLUSTERING_H


#import <Foundation/Foundation.h>

#import "ATXApp2VecMapping.h"

@interface ATXApp2VecClustering : NSObject {
    ATXApp2VecMapping *_clusterCentroids;
    ATXApp2VecMapping *_appEmbeddings;
    NSInteger _vectorLength;
    BOOL _loaded;
}




+(id)sharedInstance;
+(void)resetSharedInstance;
-(float)_getL2DistanceFrom:(*float)arg0 to:(*float)arg1 ;
-(id)_getClosestClusterCentroidForVector:(*float)arg0 ;
-(id)_mergeClusterCentroids:(id)arg0 forBundleIds:(id)arg1 ;
-(id)getClosestClusterCentroidForBundleId:(id)arg0 ;
-(id)getClusterCentroidsForBundleIds:(id)arg0 ;
-(id)init;


@end


#endif