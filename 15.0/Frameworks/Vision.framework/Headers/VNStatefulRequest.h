// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNSTATEFULREQUEST_H
#define VNSTATEFULREQUEST_H

@class NSUUID;


#import "VNImageBasedRequest.h"

@interface VNStatefulRequest : VNImageBasedRequest

@property (readonly) ? frameAnalysisSpacing;
@property (readonly) NSInteger minimumLatencyFrameCount;
@property (readonly) ? requestFrameAnalysisSpacing;
@property (readonly) NSUUID *requestUUID;


+(Class)configurationClass;
-(id)description;
-(id)initWithFrameAnalysisSpacing:(struct ? )arg0 completionHandler:(id)arg1 ;
-(id)newDefaultRequestInstance;


@end


#endif