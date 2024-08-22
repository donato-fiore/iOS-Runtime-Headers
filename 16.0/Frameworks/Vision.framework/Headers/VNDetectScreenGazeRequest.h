// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTSCREENGAZEREQUEST_H
#define VNDETECTSCREENGAZEREQUEST_H

@class NSString, NSArray;
@protocol VNFaceObservationAccepting;


#import "VNStatefulRequest.h"
#import "VNScreenGazeState.h"

@interface VNDetectScreenGazeRequest : VNStatefulRequest <VNFaceObservationAccepting>

 {
    VNScreenGazeState *_state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger temporalSmoothingFrameCount;


+(Class)configurationClass;
+(NSUInteger)applicableRevisionForDependentRequestOfClass:(Class)arg0 beingPerformedByRevision:(NSUInteger)arg1 ;
+(struct ? *)dependentRequestCompatibility;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCompletionHandler:(id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif