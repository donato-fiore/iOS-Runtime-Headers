// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCLUSTERINGACCURACYMEASURES_H
#define VCPCLUSTERINGACCURACYMEASURES_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCPClusteringAccuracyMeasures : NSObject

@property float numSingletons; // ivar: _numSingletons
@property float numValidSingletons; // ivar: _numValidSingletons
@property (retain) NSMutableArray *precisionPerCluster; // ivar: _precisionPerCluster
@property (retain) NSMutableArray *recallPerPersonExcludeMissDetection; // ivar: _recallPerPersonExcludeMissDetection
@property (retain) NSMutableArray *recallPerPersonToGroundTruth; // ivar: _recallPerPersonToGroundTruth
@property float weightedAveragePrecision; // ivar: _weightedAveragePrecision
@property float weightedAverageRecall; // ivar: _weightedAverageRecall


-(id)init;
-(void)addClusterPrecision:(float)arg0 forPersonID:(id)arg1 personFaceCount:(NSUInteger)arg2 validFaceCount:(NSUInteger)arg3 identitySize:(NSUInteger)arg4 ;
-(void)addIdentityRecallExcludeMissDetection:(float)arg0 forPersonID:(id)arg1 personFaceCount:(NSUInteger)arg2 identitySize:(NSUInteger)arg3 ;
-(void)addIdentityRecallToGroundTruth:(float)arg0 forPersonID:(id)arg1 personFaceCount:(NSUInteger)arg2 identitySize:(NSUInteger)arg3 ;


@end


#endif