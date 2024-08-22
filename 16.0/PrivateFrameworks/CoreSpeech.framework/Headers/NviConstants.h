// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NVICONSTANTS_H
#define NVICONSTANTS_H


#import <Foundation/Foundation.h>


@interface NviConstants : NSObject



+(float)inputRecordingSampleRate;
+(id)nviLogsRootDir;
+(struct AudioStreamBasicDescription )allChannelsLpcmInterleavedASBD;
+(struct AudioStreamBasicDescription )allChannelsLpcmNonInterleavedASBD;
+(struct AudioStreamBasicDescription )monoChannelLpcmASBD;
+(struct AudioStreamBasicDescription )nviDirectionalityLpcmInterleavedASBD;
+(struct AudioStreamBasicDescription )nviDirectionalityLpcmNonInterleavedASBD;
+(unsigned int)inputRecordingBytesPerFrame;
+(unsigned int)inputRecordingBytesPerPacket;
+(unsigned int)inputRecordingFramesPerPacket;
+(unsigned int)inputRecordingNumberOfChannels;
+(unsigned int)inputRecordingSampleBitDepth;
+(unsigned int)inputRecordingSampleByteDepth;
+(unsigned int)numChannelsForNviDirectionality;
+(unsigned int)nviDirectionalityEndingChannelId;
+(unsigned int)nviDirectionalityStartingChannelId;


@end


#endif