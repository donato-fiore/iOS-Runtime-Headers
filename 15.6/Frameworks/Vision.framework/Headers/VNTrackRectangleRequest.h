// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNTRACKRECTANGLEREQUEST_H
#define VNTRACKRECTANGLEREQUEST_H



#import "VNTrackingRequest.h"

@interface VNTrackRectangleRequest : VNTrackingRequest



+(id)trackerTypeForRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(struct ? *)revisionAvailability;
-(id)initWithRectangleObservation:(id)arg0 ;
-(id)initWithRectangleObservation:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif