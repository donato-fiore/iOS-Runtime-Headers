// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGPREFERREDVIDEOCONFIGURATION_H
#define HMDCAMERARECORDINGPREFERREDVIDEOCONFIGURATION_H

@class NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface HMDCameraRecordingPreferredVideoConfiguration : NSObject

@property (readonly) NSDictionary *bitRateByFrameRate; // ivar: _bitRateByFrameRate
@property (readonly) NSInteger h264Level; // ivar: _h264Level
@property (readonly) NSNumber *keyFrameInterval; // ivar: _keyFrameInterval
@property (readonly) NSInteger resolution; // ivar: _resolution


-(id)description;
-(id)initWithResolution:(NSInteger)arg0 bitRateByFrameRate:(id)arg1 keyFrameInterval:(id)arg2 h264Level:(NSInteger)arg3 ;


@end


#endif