// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGPREFERREDAUDIOCONFIGURATION_H
#define HMDCAMERARECORDINGPREFERREDAUDIOCONFIGURATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HMDCameraRecordingPreferredAudioConfiguration : NSObject

@property (readonly) NSNumber *bitRate; // ivar: _bitRate
@property (readonly) NSInteger sampleRate; // ivar: _sampleRate


-(id)description;
-(id)initWithSampleRate:(NSInteger)arg0 bitRate:(id)arg1 ;


@end


#endif