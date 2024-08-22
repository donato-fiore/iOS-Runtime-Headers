// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSOPUSENCODER_H
#define VSOPUSENCODER_H

@class AVAudioConverter, AVAudioFormat, AVAudioCompressedBuffer;

#import <Foundation/Foundation.h>


@interface VSOpusEncoder : NSObject

@property (retain, nonatomic) AVAudioConverter *converter; // ivar: _converter
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (retain, nonatomic) AVAudioFormat *fromFormat; // ivar: _fromFormat
@property (copy, nonatomic) id *opusDataHandler; // ivar: _opusDataHandler
@property (nonatomic) NSInteger opusDataOffset; // ivar: _opusDataOffset
@property (retain, nonatomic) AVAudioCompressedBuffer *outputBuffer; // ivar: _outputBuffer
@property (retain, nonatomic) AVAudioFormat *toFormat; // ivar: _toFormat


-(id)initWithSourceASBD:(struct AudioStreamBasicDescription )arg0 ;
-(void)beginEncoding;
-(void)encodeChunk:(id)arg0 ;
-(void)endEncoding;


@end


#endif