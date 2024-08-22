// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGANALYSISNODE_H
#define HMDCAMERARECORDINGANALYSISNODE_H

@class HMFObject, NSDictionary;


#import "HMDDevice.h"

@interface HMDCameraRecordingAnalysisNode : HMFObject

@property (readonly, nonatomic) HMDDevice *device; // ivar: _device
@property (readonly, copy, nonatomic) NSDictionary *metrics; // ivar: _metrics


-(id)initWithDevice:(id)arg0 metrics:(id)arg1 ;


@end


#endif