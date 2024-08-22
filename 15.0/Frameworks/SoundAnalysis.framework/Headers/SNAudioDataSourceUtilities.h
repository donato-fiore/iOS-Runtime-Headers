// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNAUDIODATASOURCEUTILITIES_H
#define SNAUDIODATASOURCEUTILITIES_H


#import <Foundation/Foundation.h>


@interface SNAudioDataSourceUtilities : NSObject



+(id)audioQueueConfiguration;
+(id)builtInMicrophoneDeviceUID;
+(id)createDefaultAudioQueueConfigurationUsingChannelNumber:(unsigned int)arg0 ;
+(id)createSiriAudioQueueConfigurationUsingChannelNumber:(unsigned int)arg0 ;
+(void)enableAlwaysOnAudioRouting:(struct OpaqueAudioQueue *)arg0 ;
+(void)setChannelAssignment:(unsigned int)arg0 onQueue:(struct OpaqueAudioQueue *)arg1 ;


@end


#endif