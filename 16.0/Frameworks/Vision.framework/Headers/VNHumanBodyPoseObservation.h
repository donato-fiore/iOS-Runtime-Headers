// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNHUMANBODYPOSEOBSERVATION_H
#define VNHUMANBODYPOSEOBSERVATION_H

@class NSArray;


#import "VNRecognizedPointsObservation.h"

@interface VNHumanBodyPoseObservation : VNRecognizedPointsObservation

@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, copy) NSArray *availableJointsGroupNames;


-(id)recognizedPointForJointName:(id)arg0 error:(*id)arg1 ;
-(id)recognizedPointsForJointsGroupName:(id)arg0 error:(*id)arg1 ;


@end


#endif