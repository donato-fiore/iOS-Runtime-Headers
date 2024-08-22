// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNTRACKINGREQUEST_H
#define VNTRACKINGREQUEST_H



#import "VNImageBasedRequest.h"
#import "VNDetectedObjectObservation.h"

@interface VNTrackingRequest : VNImageBasedRequest

@property (retain, nonatomic) VNDetectedObjectObservation *inputObservation; // ivar: _inputObservation
@property (nonatomic, getter=isLastFrame) BOOL lastFrame; // ivar: _lastFrame
@property (nonatomic) NSUInteger trackingLevel; // ivar: _trackingLevel


+(id)trackerTypeForRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(unsigned int)frameCVPixelBufferFormatForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_resetTrackerIfNeeded:(id)arg0 session:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithDetectedObjectObservation:(id)arg0 ;
-(id)initWithDetectedObjectObservation:(id)arg0 completionHandler:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)newDefaultRequestInstance;
-(id)sequencedRequestPreviousObservationsKey;
-(void)applyConfigurationOfRequest:(id)arg0 ;
-(void)populateDetectorProcessingOptions:(id)arg0 session:(id)arg1 ;


@end


#endif