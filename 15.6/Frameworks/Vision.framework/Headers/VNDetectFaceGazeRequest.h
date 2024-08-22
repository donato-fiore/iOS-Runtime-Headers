// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNDETECTFACEGAZEREQUEST_H
#define VNDETECTFACEGAZEREQUEST_H

@class NSString, NSArray;
@protocol VNFaceObservationAccepting, VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"

@interface VNDetectFaceGazeRequest : VNImageBasedRequest <VNFaceObservationAccepting, VNImageIdealImageSizeProviding>



@property (nonatomic) float commonGazeLocationRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float gazeHeatMapThreshold;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (nonatomic) float minimumFaceDimension;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;


+(Class)configurationClass;
+(NSUInteger)compatibleRevisionForDependentRequestOfClass:(Class)arg0 beingPerformedByRevision:(NSUInteger)arg1 ;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif