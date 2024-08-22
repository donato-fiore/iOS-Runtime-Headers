// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNTRACKHOMOGRAPHYREQUEST_H
#define VNTRACKHOMOGRAPHYREQUEST_H

@class NSArray;


#import "VNStatefulRequest.h"
#import "VNHomographyTrackerState.h"

@interface VNTrackHomographyRequest : VNStatefulRequest {
    VNHomographyTrackerState *_state;
}


@property (readonly, copy) NSArray *results;


+(Class)configurationClass;
+(struct ? *)revisionAvailability;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithFrameAnalysisSpacing:(struct ? )arg0 completionHandler:(id)arg1 ;


@end


#endif