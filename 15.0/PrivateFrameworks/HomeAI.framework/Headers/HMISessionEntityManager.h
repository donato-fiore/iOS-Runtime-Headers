// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMISESSIONENTITYMANAGER_H
#define HMISESSIONENTITYMANAGER_H

@class HMFObject, NSMutableDictionary, NSString;
@protocol HMFLogging;


#import "HMIPersonTracker.h"

@interface HMISessionEntityManager : HMFObject <HMFLogging>

 {
    NSMutableDictionary *_sessionUUIDToPreviousFaceprints;
    NSMutableDictionary *_sessionUUIDToPreviousTorsoprints;
    HMIPersonTracker *_personTracker;
    NSMutableDictionary *_sessionUUIDToPreviousPersonIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat faceVIPThresholdForTorsoAnnotation; // ivar: _faceVIPThresholdForTorsoAnnotation
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableDictionary *sessionEntities; // ivar: _sessionEntities
@property (readonly) Class superclass;


+(id)logCategory;
+(id)updatePersonEventWithPersonEvent:(id)arg0 torsoAnnotation:(id)arg1 sessionEntityUUID:(id)arg2 predictedLinkedEntityUUIDs:(id)arg3 sessionEntityAssignment:(NSInteger)arg4 ;
-(id)assignSessionEntitiesToPersonEvents:(id)arg0 videoFrame:(id)arg1 homeUUID:(id)arg2 ;
-(id)assignSessionEntityToFaceRecognition:(id)arg0 torsoRecognition:(id)arg1 predictedLinkedEntityUUIDs:(id)arg2 availableSessionEntityUUIDs:(id)arg3 sessionEntityAssignment:(*NSInteger)arg4 ;
-(id)assignSessionEntityToFaceRecognition:(id)arg0 torsoRecognition:(id)arg1 transitionMatrix:(id)arg2 detectionIdx:(NSUInteger)arg3 predictedLinkedEntityUUIDs:(id)arg4 availableSessionEntityUUIDs:(id)arg5 sessionEntityAssignment:(*NSInteger)arg6 ;
-(id)createSessionEntityFromFaceRecognition:(id)arg0 torsoRecognition:(id)arg1 predictedLinkedEntityUUIDs:(id)arg2 sessionEntityAssignment:(*NSInteger)arg3 ;
-(id)initWithFrameDimensions:(struct CGSize )arg0 ;
-(id)updateTorsoModelAndGetTorsoAnnotationsForHome:(id)arg0 ;
-(void)handleMotionDetection:(id)arg0 sessionPTS:(struct ? )arg1 ;
-(void)submitTorsoprintsToModelManagerForHome:(id)arg0 withTorsoAnnotations:(id)arg1 ;
-(void)updatePreviousPrintsForSessionEntityUUID:(id)arg0 faceRecognition:(id)arg1 torsoRecognition:(id)arg2 ;


@end


#endif