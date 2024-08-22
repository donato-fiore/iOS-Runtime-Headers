// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUAUDIOUNITV2BRIDGE_H
#define AUAUDIOUNITV2BRIDGE_H

@protocol OS_dispatch_queue;


#import "AUAudioUnit.h"
#import "AUV2BridgeBusArray.h"
#import "AUParameterTree.h"

@interface AUAudioUnitV2Bridge : AUAudioUnit {
    NSObject<OS_dispatch_queue> *_eventListenerQueue;
    *AUListenerBase _eventListener;
    *AUListenerBase _parameterListener;
    BOOL _removingObserverWithContext;
    atomic<bool> _willSetFullState;
    atomic<unsigned int> _eventsTriggeringParameterTreeInvalidation;
    NSObject<OS_dispatch_queue> *_parameterTreeRebuildQueue;
    *OpaqueAudioComponentInstance _audioUnit;
    BOOL _audioUnitIsOwned;
    AUV2BridgeBusArray *_inputBusses;
    AUV2BridgeBusArray *_outputBusses;
    AUParameterTree *_cachedParameterTree;
    unique_ptr<AUAudioUnitV2Bridge_Renderer, std::default_delete<AUAudioUnitV2Bridge_Renderer>> _renderer;
    id *_MIDIOutputEventBlock;
    id *_MIDIOutputEventListBlock;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)_elementCountWritable:(unsigned int)arg0 ;
-(BOOL)_setElementCount:(unsigned int)arg0 count:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(BOOL)providesUserInterface;
-(id)MIDIOutputEventBlock:(SEL)arg0 ;
-(id)MIDIOutputEventListBlock:(SEL)arg0 ;
-(id)_buildNewParameterTree;
-(id)_createParameterTree;
-(id)_valueForProperty:(id)arg0 error:(*id)arg1 ;
-(id)channelCapabilities;
-(id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg0 description:(struct AudioComponentDescription )arg1 ;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)inputBusses;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)osWorkgroup;
-(id)outputBusses;
-(id)parameterTree;
-(int)enableBus:(unsigned int)arg0 scope:(unsigned int)arg1 enable:(BOOL)arg2 ;
-(struct OpaqueAudioComponentInstance *)audioUnit;
-(unsigned int)_elementCount:(unsigned int)arg0 ;
-(void)_createEventListenerQueue;
-(void)_invalidateParameterTree:(unsigned int)arg0 ;
-(void)_notifyParameterChange:(NSUInteger)arg0 ;
-(void)_rebuildBusses:(unsigned int)arg0 ;
-(void)_setValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)dealloc;
-(void)deliverV2Parameters:(*uint8_t)arg0 ;
-(void)init2;
-(void)internalDeallocateRenderResources;
-(void)invalidateAudioUnit;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 context:(*void)arg2 ;
-(void)requestViewControllerWithCompletionHandler:(id)arg0 ;
-(void)reset;
-(void)setCurrentPreset:(id)arg0 ;
-(void)setFullState:(id)arg0 ;
-(void)setFullStateForDocument:(id)arg0 ;
-(void)setMIDIOutputEventBlock:(id)arg0 ;
-(void)setMIDIOutputEventListBlock:(id)arg0 ;
-(void)setMusicalContextBlock:(id)arg0 ;
-(void)setTransportStateBlock:(id)arg0 ;


@end


#endif