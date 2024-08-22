// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIMUTABLECLUSTER_H
#define HMIMUTABLECLUSTER_H

@class HMFObject, NSString, NSMutableArray, NSMutableSet;
@protocol HMFLogging;


#import "HMIDESMutableFloatArray.h"
#import "HMIFaceRecognition.h"

@interface HMIMutableCluster : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIDESMutableFloatArray *faceCentroid; // ivar: _faceCentroid
@property (readonly) NSUInteger faceCount;
@property (retain) HMIFaceRecognition *faceRecognition; // ivar: _faceRecognition
@property (retain, nonatomic) NSMutableArray *faceprintUUIDs; // ivar: _faceprintUUIDs
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *linkedEntityUUIDs; // ivar: _linkedEntityUUIDs
@property (readonly) Class superclass;
@property (readonly) HMIDESMutableFloatArray *torsoCentroid; // ivar: _torsoCentroid
@property (readonly) NSUInteger torsoCount;
@property (retain, nonatomic) NSMutableArray *torsoprintUUIDs; // ivar: _torsoprintUUIDs
@property (retain) NSMutableArray *torsoprints; // ivar: _torsoprints


+(id)logCategory;
-(id)initWithFaceprint:(id)arg0 ;
-(id)initWithTorsoprint:(id)arg0 ;
-(void)addFaceprints:(id)arg0 ;
-(void)addLinkedEntityUUIDs:(id)arg0 ;
-(void)addTorsoprints:(id)arg0 ;
-(void)flushTorsoprints;


@end


#endif