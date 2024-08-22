// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNGENERATEPERSONSEGMENTATIONREQUEST_H
#define VNGENERATEPERSONSEGMENTATIONREQUEST_H

@class NSArray;


#import "VNStatefulRequest.h"
#import "VNPixelBufferObservation.h"

@interface VNGeneratePersonSegmentationRequest : VNStatefulRequest {
    VNPixelBufferObservation *_previousObservation;
    NSUInteger _previousImageWidth;
    NSUInteger _previousImageHeight;
}


@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) NSUInteger qualityLevel;
@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
+(id)new;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)init;
-(id)initWithCompletionHandler:(id)arg0 ;
-(id)newDefaultDetectorOptionsForSession:(id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif