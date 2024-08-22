// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMICLUSTERINGTASKSUMMARY_H
#define HMICLUSTERINGTASKSUMMARY_H

@class HMFObject, NSError;



@interface HMIClusteringTaskSummary : HMFObject

@property CGFloat clusteringDuration; // ivar: _clusteringDuration
@property (retain) NSError *error; // ivar: _error
@property CGFloat faceprintingDuration; // ivar: _faceprintingDuration
@property NSInteger numberOfClusters; // ivar: _numberOfClusters
@property NSInteger numberOfFaceprintsClustered; // ivar: _numberOfFaceprintsClustered
@property NSInteger numberOfPersonsCreated; // ivar: _numberOfPersonsCreated
@property NSInteger numberOfUnknownFaceprintsAssociated; // ivar: _numberOfUnknownFaceprintsAssociated
@property CGFloat totalDuration; // ivar: _totalDuration


-(id)attributeDescriptions;
-(id)init;


@end


#endif