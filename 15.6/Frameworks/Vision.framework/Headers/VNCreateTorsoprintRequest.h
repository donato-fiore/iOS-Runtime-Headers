// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(BOOL)_processFaceBasedInputInContext:(id)arg0 torsosThatNeedNoProcessing:(id)arg1 torsosThatNeedTorsoprints:(id)arg2 error:(*id)arg3 ;
-(BOOL)_processHumanBodyBasedInputInContext:(id)arg0 torsosThatNeedNoProcessing:(id)arg1 torsosThatNeedTorsoprints:(id)arg2 error:(*id)arg3 ;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(void)_determineFacesToProcessFrom:(id)arg0 outputFacesThatNeedNoProcessing:(id)arg1 outputFacesThatNeedAlignment:(id)arg2 outputFacesThatNeedTorsoprints:(id)arg3 ;
-(void)_determineHumanBodiesToProcessFrom:(id)arg0 outputHumanBodiesThatNeedNoProcessing:(id)arg1 tputHumanBodiesThatNeedTorsoprints:(id)arg2 ;


@end


#endif