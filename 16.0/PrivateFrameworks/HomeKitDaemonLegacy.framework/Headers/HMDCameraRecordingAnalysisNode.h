// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGANALYSISNODE_H
#define HMDCAMERARECORDINGANALYSISNODE_H

@class HMFObject, NSDictionary;


#import "HMDResidentDevice.h"

@interface HMDCameraRecordingAnalysisNode : HMFObject

@property (readonly, copy, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (readonly, nonatomic) HMDResidentDevice *residentDevice; // ivar: _residentDevice


-(id)initWithResidentDevice:(id)arg0 metrics:(id)arg1 ;


@end


#endif