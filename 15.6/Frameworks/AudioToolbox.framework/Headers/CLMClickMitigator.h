// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLMCLICKMITIGATOR_H
#define CLMCLICKMITIGATOR_H

@class AVAudioFormat, AVAudioConverter, NSString;

#import <Foundation/Foundation.h>


@interface CLMClickMitigator : NSObject

@property (retain, nonatomic) AVAudioFormat *externalFormat; // ivar: _externalFormat
@property (retain, nonatomic) AVAudioConverter *inputConverter; // ivar: _inputConverter
@property (retain, nonatomic) AVAudioConverter *outputConverter; // ivar: _outputConverter
@property (retain, nonatomic) AVAudioFormat *processingFormat; // ivar: _processingFormat
@property (retain, nonatomic) NSString *tuningPath; // ivar: _tuningPath
@property (nonatomic) unsigned int upstreamLatency; // ivar: _upstreamLatency


-(id)initWithFormat:(id)arg0 upstreamLatency:(unsigned int)arg1 ;
-(struct shared_ptr<ClickRemovalCore> )getCore;
// -(void)mitigateClicks:(id)arg0 machAbsoluteTimeOfFirstSample:(NSUInteger)arg1 numSamples:(unsigned int)arg2 audioReader:(id)arg3 audioRewriter:(unk)arg4  ;


@end


#endif