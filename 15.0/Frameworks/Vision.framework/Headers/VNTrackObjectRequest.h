// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNTRACKOBJECTREQUEST_H
#define VNTRACKOBJECTREQUEST_H



#import "VNTrackingRequest.h"

@interface VNTrackObjectRequest : VNTrackingRequest

@property (nonatomic) CGSize trackingFrameSizeInPixels; // ivar: _trackingFrameSizeInPixels


+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(id)trackerTypeForRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
+(struct ? *)revisionAvailability;
+(unsigned int)frameCVPixelBufferFormatForRequestRevision:(NSUInteger)arg0 ;
-(id)_trackingLevelOptionFromTrackingLevelEnum;
-(id)initWithDetectedObjectObservation:(id)arg0 ;
-(id)initWithDetectedObjectObservation:(id)arg0 completionHandler:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)setTrackingLevel:(NSUInteger)arg0 ;


@end


#endif