// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RENOTIFIERAUDIOUNIT_H
#define RENOTIFIERAUDIOUNIT_H

@class AUAudioUnit, AUAudioUnitBus, AUAudioUnitBusArray;



@interface RENotifierAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    atomic<bool> _hasNotified;
}


@property (copy, nonatomic) id *didAllocate; // ivar: _didAllocate
@property (copy, nonatomic) id *didDeallocate; // ivar: _didDeallocate
@property (copy, nonatomic) id *firstRender; // ivar: _firstRender
@property (readonly) BOOL hasNotified;


+(void)registerToAudioUnit;
-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)inputBusses;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(void)deallocateRenderResources;
-(void)resetNotifications;


@end


#endif