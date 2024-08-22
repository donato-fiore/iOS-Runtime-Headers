// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCREATETORSOPRINTREQUEST_H
#define VNCREATETORSOPRINTREQUEST_H

@class NSString, NSArray;
@protocol VNFaceObservationAccepting, VNDetectedObjectObservationAccepting;


#import "VNImageBasedRequest.h"

@interface VNCreateTorsoprintRequest : VNImageBasedRequest <VNFaceObservationAccepting, VNDetectedObjectObservationAccepting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inputDetectedObjectObservations;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)dependentRequestCompatibility;
+(struct ? *)revisionAvailability;
-(BOOL)_processFaceBasedInputInContext:(id)arg0 revision:(NSUInteger)arg1 torsosThatNeedNoProcessing:(id)arg2 torsosThatNeedTorsoprints:(id)arg3 error:(*id)arg4 ;
-(BOOL)_processHumanBodyBasedInputInContext:(id)arg0 revision:(NSUInteger)arg1 torsosThatNeedNoProcessing:(id)arg2 torsosThatNeedTorsoprints:(id)arg3 error:(*id)arg4 ;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)_processHumanBodyObservations:(id)arg0 revision:(NSUInteger)arg1 regionOfInterest:(struct CGRect )arg2 context:(id)arg3 error:(*id)arg4 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)detectHumanBodiesInContext:(id)arg0 error:(*id)arg1 ;


@end


#endif