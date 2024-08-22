// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTDOCUMENTSEGMENTATIONREQUEST_H
#define VNDETECTDOCUMENTSEGMENTATIONREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectDocumentSegmentationRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)supportedImageSizeSet;


@end


#endif