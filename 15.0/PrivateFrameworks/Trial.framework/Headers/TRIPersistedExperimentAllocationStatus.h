// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPERSISTEDEXPERIMENTALLOCATIONSTATUS_H
#define TRIPERSISTEDEXPERIMENTALLOCATIONSTATUS_H

@class TRIPBMessage, NSString, NSMutableArray;


#import "TRIPersistedAllocationCommon.h"

@interface TRIPersistedExperimentAllocationStatus : TRIPBMessage

@property (retain, nonatomic) TRIPersistedAllocationCommon *common;
@property (nonatomic) int deploymentId;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSMutableArray *namespaceArray;
@property (readonly, nonatomic) NSUInteger namespaceArray_Count;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif