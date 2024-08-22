// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERACLIPUPLOADVIDEOSEGMENTOPERATION_H
#define HMDCAMERACLIPUPLOADVIDEOSEGMENTOPERATION_H



#import "HMDCameraClipAppendStreamingAssetOperation.h"

@interface HMDCameraClipUploadVideoSegmentOperation : HMDCameraClipAppendStreamingAssetOperation



+(BOOL)shouldRetry;
+(NSUInteger)cameraClipOperationType;
+(id)logCategory;
+(id)metadataPropertyName;
+(id)streamingAssetPropertyName;


@end


#endif