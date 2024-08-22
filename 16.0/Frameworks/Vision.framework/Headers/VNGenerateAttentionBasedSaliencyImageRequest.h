// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNGENERATEATTENTIONBASEDSALIENCYIMAGEREQUEST_H
#define VNGENERATEATTENTIONBASEDSALIENCYIMAGEREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNGenerateAttentionBasedSaliencyImageRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_smartCamCombinedModelImageSaliencyObservationsForRevision:(NSUInteger)arg0 performedInContext:(id)arg1 error:(*id)arg2 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;


@end


#endif