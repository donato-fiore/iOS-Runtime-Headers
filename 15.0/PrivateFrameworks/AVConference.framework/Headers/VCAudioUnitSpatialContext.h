// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCAUDIOUNITSPATIALCONTEXT_H
#define VCAUDIOUNITSPATIALCONTEXT_H


#import <Foundation/Foundation.h>


@interface VCAudioUnitSpatialContext : NSObject {
    *OpaqueCMBlockBuffer _spatialMetadata;
}


@property (nonatomic) unsigned int audioSessionId; // ivar: _audioSessionId
@property (nonatomic) unsigned int maxChannelCountMic; // ivar: _maxChannelCountMic
@property (nonatomic) unsigned int maxChannelCountSpeaker; // ivar: _maxChannelCountSpeaker
@property (nonatomic) *OpaqueCMBlockBuffer spatialMetadata;


-(id)initWithAudioSessionId:(unsigned int)arg0 maxChannelCountMic:(unsigned int)arg1 maxChannelCountSpeaker:(unsigned int)arg2 spatialMetadata:(struct OpaqueCMBlockBuffer *)arg3 ;
-(void)dealloc;


@end


#endif