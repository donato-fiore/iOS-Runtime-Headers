// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSMARTCAM5COMPOUNDREQUEST_H
#define VNSMARTCAM5COMPOUNDREQUEST_H



#import "VNCompoundRequest.h"
#import "VNSmartCam5CompoundRequestGroupingConfiguration.h"

@interface VNSmartCam5CompoundRequest : VNCompoundRequest {
    VNSmartCam5CompoundRequestGroupingConfiguration *_groupingConfiguration;
}




+(id)compoundRequestsForOriginalRequests:(id)arg0 withPerformingContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;


@end


#endif