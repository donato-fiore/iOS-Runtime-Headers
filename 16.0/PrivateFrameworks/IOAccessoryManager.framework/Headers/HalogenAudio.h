// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HALOGENAUDIO_H
#define HALOGENAUDIO_H

@protocol HalogenAudioDelegate;

#import <Foundation/Foundation.h>


@interface HalogenAudio : NSObject

@property *OpaqueAudioComponentInstance audioComponentInst; // ivar: _audioComponentInst
@property int bitDepth; // ivar: _bitDepth
@property (retain, nonatomic) NSObject<HalogenAudioDelegate> *halogenUnitDelegate; // ivar: _halogenUnitDelegate
@property int inputFrameSizeInBytes; // ivar: _inputFrameSizeInBytes
@property int nInputChannels; // ivar: _nInputChannels
@property int nOutputChannels; // ivar: _nOutputChannels
@property int outputFrameSizeInBytes; // ivar: _outputFrameSizeInBytes
@property int sampleRate; // ivar: _sampleRate


-(BOOL)startAudioUnit;
-(BOOL)stopAudioUnit;
-(id)initAudioWithParameters:(id)arg0 nInputChannels:(int)arg1 nOutputChannels:(int)arg2 sampleRate:(int)arg3 bitDepth:(int)arg4 inputFrameSizeInBytes:(int)arg5 outputFrameSizeInBytes:(int)arg6 ;
-(struct OpaqueAudioComponentInstance *)getAudioComponentInstance;
-(void)_deinitAudioInstance;
-(void)dealloc;
-(void)releaseAudioUnitInstance;


@end


#endif