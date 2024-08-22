// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUPASSCODEDECODER_H
#define AUPASSCODEDECODER_H

@class AUAudioUnit, AUAudioUnitBus, AUAudioUnitBusArray, NSMutableData;
@protocol OS_dispatch_queue;


#import "AUPasscodeCodecConfiguration.h"
#import "APCListenerResultData.h"

@interface AUPasscodeDecoder : AUAudioUnit {
    unique_ptr<caulk::concurrent::messenger, std::default_delete<caulk::concurrent::messenger>> _rtMessenger;
    unique_ptr<APCDecoderBase, std::default_delete<APCDecoderBase>> _kernel;
    BufferedInputBus _inputBus;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBusArray *_outputBusArray;
    vector<unsigned char, std::allocator<unsigned char>> _rxDataBuffer;
    array<std::unique_ptr<DecodedDataMessage>, 10UL> _messagePool;
    map<unsigned int, std::any, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::any>>> _apcDecoderConfig;
    unsigned int _desiredChannelCount;
    unsigned int _actualChannelCount;
    NSMutableData *_incomingPayload;
    BOOL _deliverDataSerially;
    unique_ptr<AudioCapturerIfc, std::default_delete<AudioCapturerIfc>> _inputCapturer;
    mutex _ctMutex;
}


@property (retain, nonatomic) AUPasscodeCodecConfiguration *codecConfig; // ivar: _codecConfig
@property (copy, nonatomic) id *dataHandler; // ivar: _dataHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) APCListenerResultData *resultData; // ivar: _resultData


+(id)supportedDecoders;
+(struct AudioComponentDescription )getAUDesc;
+(void)registerAU;
-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)inputBusses;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(void)deallocateRenderResources;
-(void)handleDecodedData:(*void)arg0 ofLength:(int)arg1 ;
-(void)setRenderingOffline:(BOOL)arg0 ;
-(void)startAudioLogCapture;
-(void)stopAudioLogCapture;


@end


#endif