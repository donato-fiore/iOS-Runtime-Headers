// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNIMAGEEXPOSURESCOREREQUEST_H
#define VNIMAGEEXPOSURESCOREREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNImageExposureScoreRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;


@end


#endif