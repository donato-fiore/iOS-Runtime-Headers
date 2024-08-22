// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAAUDIOFORMAT_H
#define ASAAUDIOFORMAT_H


#import <Foundation/Foundation.h>


@interface ASAAudioFormat : NSObject

@property (nonatomic) unsigned int bitsPerChannel; // ivar: _bitsPerChannel
@property (nonatomic) unsigned int bytesPerFrame; // ivar: _bytesPerFrame
@property (nonatomic) unsigned int bytesPerPacket; // ivar: _bytesPerPacket
@property (nonatomic) unsigned int channelsPerFrame; // ivar: _channelsPerFrame
@property (nonatomic) unsigned int formatFlags; // ivar: _formatFlags
@property (nonatomic) unsigned int formatID; // ivar: _formatID
@property (nonatomic) unsigned int framesPerPacket; // ivar: _framesPerPacket
@property (nonatomic) CGFloat maximumSampleRate; // ivar: _maximumSampleRate
@property (nonatomic) CGFloat minimumSampleRate; // ivar: _minimumSampleRate
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg0 ;
-(id)initWithAudioStreamRangedDescription:(struct AudioStreamRangedDescription *)arg0 ;
-(struct AudioStreamBasicDescription )audioStreamBasicDescription;
-(struct AudioStreamRangedDescription )audioStreamRangedDescription;


@end


#endif