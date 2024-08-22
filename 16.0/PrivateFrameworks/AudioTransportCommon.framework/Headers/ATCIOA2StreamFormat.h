// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATCIOA2STREAMFORMAT_H
#define ATCIOA2STREAMFORMAT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ATCIOA2StreamFormat : NSObject <NSCopying>



@property (nonatomic) unsigned int bitsPerChannel; // ivar: _bitsPerChannel
@property (nonatomic) unsigned int bytesPerFrame; // ivar: _bytesPerFrame
@property (nonatomic) unsigned int bytesPerPacket; // ivar: _bytesPerPacket
@property (nonatomic) unsigned int channelsPerFrame; // ivar: _channelsPerFrame
@property (nonatomic) unsigned int formatFlags; // ivar: _formatFlags
@property (nonatomic) unsigned int formatID; // ivar: _formatID
@property (nonatomic) unsigned int framesPerPacket; // ivar: _framesPerPacket
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate


+(id)aeaStreamFormatWithDictionary:(id)arg0 ;
+(id)aeaStreamFormatsWithRangedDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg0 ;
-(id)initWithIOAudio2Dictionary:(id)arg0 ;
-(id)initWithSampleRate:(CGFloat)arg0 numChannels:(unsigned int)arg1 commonPCMFormat:(unsigned int)arg2 isInterleaved:(BOOL)arg3 ;
-(struct AudioStreamBasicDescription )audioStreamBasicDescription;
-(unsigned int)framesToBytes:(unsigned int)arg0 ;


@end


#endif