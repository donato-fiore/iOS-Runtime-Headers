// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTFACELANDMARKSREQUEST_H
#define VNDETECTFACELANDMARKSREQUEST_H

@class NSNumber, NSString, NSArray;
@protocol VNFaceObservationAccepting;


#import "VNImageBasedRequest.h"

@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest <VNFaceObservationAccepting>



@property (retain, nonatomic) NSNumber *cascadeStepCount;
@property NSUInteger constellation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (nonatomic) BOOL performBlinkDetection;
@property (nonatomic) BOOL refineLeftEyeRegion;
@property (nonatomic) BOOL refineMouthRegion;
@property (nonatomic) BOOL refineRightEyeRegion;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;


+(BOOL)revision:(NSUInteger)arg0 supportsConstellation:(NSUInteger)arg1 ;
+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)dependentRequestCompatibility;
+(struct ? *)dependentRequestMappingTable;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCompletionHandler:(id)arg0 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;
-(void)resolvedRevisionDidChangeFromRevision:(NSUInteger)arg0 ;
-(void)setProcessedResults:(id)arg0 ;


@end


#endif