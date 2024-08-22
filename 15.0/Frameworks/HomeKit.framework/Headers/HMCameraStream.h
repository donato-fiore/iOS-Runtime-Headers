// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERASTREAM_H
#define HMCAMERASTREAM_H

@class NSNumber;


#import "HMCameraSource.h"
#import "_HMCameraStream.h"

@interface HMCameraStream : HMCameraSource

@property (readonly, nonatomic) NSUInteger audioStreamSetting;
@property (readonly, nonatomic) NSNumber *audioVolume;
@property (retain, nonatomic) _HMCameraStream *stream; // ivar: _stream


-(id)initWithStream:(id)arg0 ;
-(void)updateAudioStreamSetting:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateAudioVolume:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif