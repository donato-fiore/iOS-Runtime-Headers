// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDETECTTRAJECTORIESREQUEST_H
#define VNDETECTTRAJECTORIESREQUEST_H

@class NSArray;


#import "VNStatefulRequest.h"
#import "VNTrajectoryProcessor.h"
#import "VNTrajectoryRequestState.h"

@interface VNDetectTrajectoriesRequest : VNStatefulRequest {
    VNTrajectoryProcessor *_trajectoryProcessor;
    VNTrajectoryRequestState *_state;
}


@property (nonatomic) float maximumObjectSize;
@property (nonatomic) float minimumObjectSize;
@property (nonatomic) float objectMaximumNormalizedRadius; // ivar: _objectMaximumNormalizedRadius
@property (nonatomic) float objectMinimumNormalizedRadius;
@property (readonly, copy) NSArray *results;
@property (nonatomic) ? targetFrameTime;
@property (readonly) NSInteger trajectoryLength;


+(BOOL)setsTimeRangeOnResults;
+(Class)configurationClass;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)initWithFrameAnalysisSpacing:(struct ? )arg0 trajectoryLength:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)newDefaultRequestInstance;
-(void)applyConfigurationOfRequest:(id)arg0 ;
-(void)setobjectMaximumNormalizedRadius:(float)arg0 ;


@end


#endif