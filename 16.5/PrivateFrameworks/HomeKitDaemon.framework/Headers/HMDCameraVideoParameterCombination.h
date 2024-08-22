// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAVIDEOPARAMETERCOMBINATION_H
#define HMDCAMERAVIDEOPARAMETERCOMBINATION_H

@class HMFObject;


#import "HMDH264Level.h"
#import "HMDH264Profile.h"
#import "HMDCameraVideoTier.h"

@interface HMDCameraVideoParameterCombination : HMFObject

@property (readonly, nonatomic) HMDH264Level *level; // ivar: _level
@property (readonly, nonatomic) HMDH264Profile *profile; // ivar: _profile
@property (readonly, nonatomic) HMDCameraVideoTier *videoTier; // ivar: _videoTier


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithProfile:(id)arg0 level:(id)arg1 videoTier:(id)arg2 ;


@end


#endif