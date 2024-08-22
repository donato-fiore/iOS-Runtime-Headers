// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNGENERATEIMAGESALIENCYREQUEST_H
#define VNGENERATEIMAGESALIENCYREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNGenerateImageSaliencyRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_smartCamCombinedModelImageSaliencyObservationsForRevision:(NSUInteger)arg0 performedInContext:(id)arg1 error:(*id)arg2 ;


@end


#endif