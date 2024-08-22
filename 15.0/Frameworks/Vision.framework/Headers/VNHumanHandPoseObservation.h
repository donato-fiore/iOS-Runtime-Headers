// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNHUMANHANDPOSEOBSERVATION_H
#define VNHUMANHANDPOSEOBSERVATION_H

@class NSArray;


#import "VNRecognizedPointsObservation.h"

@interface VNHumanHandPoseObservation : VNRecognizedPointsObservation

@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, copy) NSArray *availableJointsGroupNames;
@property (readonly) NSInteger chirality;


-(id)recognizedPointForJointName:(id)arg0 error:(*id)arg1 ;
-(id)recognizedPointsForJointsGroupName:(id)arg0 error:(*id)arg1 ;


@end


#endif