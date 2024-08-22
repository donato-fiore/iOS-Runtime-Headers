// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNGENERATEOPTICALFLOWREQUEST_H
#define VNGENERATEOPTICALFLOWREQUEST_H

@class NSArray;


#import "VNTargetedImageRequest.h"

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest

@property (nonatomic) NSUInteger computationAccuracy;
@property (nonatomic) BOOL keepNetworkOutput;
@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
+(struct ? *)revisionAvailability;
-(BOOL)_internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 previousObservation:(id)arg2 error:(*id)arg3 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_createGeneratorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 images:(id)arg2 previousTargetImageIsCurrentRefImage:(BOOL)arg3 previousObservation:(id)arg4 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif