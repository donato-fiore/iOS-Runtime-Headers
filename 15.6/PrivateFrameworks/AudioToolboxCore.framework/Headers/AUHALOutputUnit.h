// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUHALOUTPUTUNIT_H
#define AUHALOUTPUTUNIT_H



#import "AUAudioUnitV2Bridge.h"

@interface AUHALOutputUnit : AUAudioUnitV2Bridge {
    id *_outputProvider;
    id *_inputHandler;
    BOOL _inputWasEnabled;
    BOOL _outputWasEnabled;
    BOOL _inputBusEnabled;
    int _renderObserverToken;
    unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> _renderObservers;
}


@property (nonatomic, getter=isInputEnabled) BOOL inputEnabled;
@property (nonatomic, getter=isOutputEnabled) BOOL outputEnabled;


-(BOOL)canPerformInput;
-(BOOL)canPerformOutput;
-(BOOL)isRunning;
-(BOOL)startHardwareAndReturnError:(*id)arg0 ;
-(NSInteger)tokenByAddingRenderObserver:(id)arg0 ;
-(id)_inputHandler:(SEL)arg0 ;
-(id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg0 description:(struct AudioComponentDescription )arg1 ;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)outputProvider:(SEL)arg0 ;
-(int)enableBus:(unsigned int)arg0 scope:(unsigned int)arg1 enable:(BOOL)arg2 ;
-(void)addRenderObserver:(*unk)arg0 userData:(*void)arg1 ;
-(void)dealloc;
-(void)initAUHALOutputUnit;
-(void)removeRenderObserver:(*unk)arg0 userData:(*void)arg1 ;
-(void)removeRenderObserver:(NSInteger)arg0 ;
-(void)setInputHandler:(id)arg0 ;
-(void)setOutputProvider:(id)arg0 ;
-(void)stopHardware;


@end


#endif