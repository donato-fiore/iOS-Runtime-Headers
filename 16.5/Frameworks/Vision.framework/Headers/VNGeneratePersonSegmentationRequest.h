// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNGENERATEPERSONSEGMENTATIONREQUEST_H
#define VNGENERATEPERSONSEGMENTATIONREQUEST_H

@class NSArray;


#import "VNStatefulRequest.h"

@interface VNGeneratePersonSegmentationRequest : VNStatefulRequest {
    NSArray *_previousObservations;
    NSUInteger _previousImageWidth;
    NSUInteger _previousImageHeight;
}


@property (nonatomic) float minimumConfidence;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) NSUInteger qualityLevel;
@property (readonly, copy) NSArray *results;
@property (nonatomic) BOOL useTiling;


+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)new;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCompletionHandler:(id)arg0 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif