// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUPASSCODEENCODER_H
#define AUPASSCODEENCODER_H

@class AUAudioUnit, AUAudioUnitBus, AUAudioUnitBusArray, NSMutableDictionary, NSData;
@protocol OS_dispatch_queue;


#import "AUPasscodeCodecConfiguration.h"

@interface AUPasscodeEncoder : AUAudioUnit {
    unique_ptr<APCEncoderBase, std::default_delete<APCEncoderBase>> _kernel;
    BufferedInputBus _inputBus;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBusArray *_outputBusArray;
    map<unsigned int, std::any, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::any>>> _apcEncoderConfig;
    NSInteger _assetSampleCount;
    BOOL _outputIsSilenced;
    unique_ptr<EOFReachedMessage, std::default_delete<EOFReachedMessage>> _eofMessage;
    unique_ptr<caulk::concurrent::messenger, std::default_delete<caulk::concurrent::messenger>> _rtMessenger;
    unsigned int _fadeOutNumSamples;
    unsigned int _fadeOutSampleIndex;
    NSUInteger _loopNumber;
    NSUInteger _beginningTime;
}


@property (copy, nonatomic) id *assetEndedAndSilencedHandler; // ivar: _assetEndedAndSilencedHandler
@property (nonatomic) NSInteger assetLength; // ivar: _assetLength
@property (retain, nonatomic) AUPasscodeCodecConfiguration *codecConfig; // ivar: _codecConfig
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL embedPasscode; // ivar: _embedPasscode
@property (nonatomic) float fadeOutTimeSeconds; // ivar: _fadeOutTimeSeconds
@property (nonatomic) NSUInteger numLoopsToStopAfter; // ivar: _numLoopsToStopAfter
@property (retain, nonatomic) NSMutableDictionary *passcodeEmbedInfo; // ivar: _passcodeEmbedInfo
@property (copy, nonatomic) NSData *payload; // ivar: _payload
@property (nonatomic) BOOL silenceOutputOnNextAssetEnding; // ivar: _silenceOutputOnNextAssetEnding
@property (nonatomic) BOOL triggerFadeOut; // ivar: _triggerFadeOut


+(id)supportedEncoders;
+(struct AudioComponentDescription )getAUDesc;
+(void)registerAU;
-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(BOOL)canProcessInPlace;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)inputBusses;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(void)dealloc;
-(void)deallocateRenderResources;
-(void)handleEOFReachedForAsset;
-(void)reset;


@end


#endif