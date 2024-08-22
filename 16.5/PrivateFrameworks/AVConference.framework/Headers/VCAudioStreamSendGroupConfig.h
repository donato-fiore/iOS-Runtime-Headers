// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOSTREAMSENDGROUPCONFIG_H
#define VCAUDIOSTREAMSENDGROUPCONFIG_H

@class NSString;
@protocol VCAudioStreamGroupConfig;


#import "VCMediaStreamSendGroupConfig.h"
#import "VCAudioStreamGroupCommonConfig.h"
#import "VCSystemAudioCaptureSession.h"

@interface VCAudioStreamSendGroupConfig : VCMediaStreamSendGroupConfig <VCAudioStreamGroupConfig>



@property (retain) VCAudioStreamGroupCommonConfig *audioStreamGroupConfig; // ivar: _audioStreamGroupConfig
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldScheduleMediaQueue; // ivar: _shouldScheduleMediaQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) VCSystemAudioCaptureSession *systemAudioCaptureSession; // ivar: _systemAudioCaptureSession


-(id)init;
-(void)dealloc;


@end


#endif