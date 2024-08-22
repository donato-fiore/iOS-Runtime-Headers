// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSPEECHSYNTHESISCALLBACKRESULT_H
#define VSSPEECHSYNTHESISCALLBACKRESULT_H

@class NSError, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface VSSpeechSynthesisCallbackResult : NSObject {
    vector<unsigned char, std::allocator<unsigned char>> _samples;
    vector<TTSSynthesizer::Marker, std::allocator<TTSSynthesizer::Marker>> _markers;
    vector<std::string, std::allocator<std::string>> _phonemeBuffer;
}


@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL hasAlignmentStall; // ivar: _hasAlignmentStall
@property (nonatomic) BOOL hasAudioClick; // ivar: _hasAudioClick
@property (nonatomic) NSUInteger lastUTF16Offset; // ivar: _lastUTF16Offset
@property (nonatomic) NSUInteger lastUTF8Offset; // ivar: _lastUTF8Offset
@property (nonatomic) BOOL neuralDidFallback; // ivar: _neuralDidFallback
@property (nonatomic) NSUInteger numOfPromptsTriggered; // ivar: _numOfPromptsTriggered
@property (nonatomic) NSUInteger samplesProcessed; // ivar: _samplesProcessed
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger stopMark; // ivar: _stopMark
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSMutableArray *wordTimings; // ivar: _wordTimings


-(*void)markerBuffer;
-(*void)phonemeBuffer;
-(*void)sampleBuffer;
-(NSUInteger)utf16OffsetFromUTF8:(NSUInteger)arg0 ;
-(NSUInteger)utf8BytesForChar:(unsigned short)arg0 ;
-(id)initWithCallback:(id)arg0 ;
-(id)mutablePCMData;
-(id)pcmData;
-(id)phonemes;
-(id)wordTimingInfos;
-(int)synthesisCallback:(int)arg0 ;
-(void)processMarkerBuffer;


@end


#endif