// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUAUDIOUNIT_XPC_H
#define AUAUDIOUNIT_XPC_H

@class NSXPCConnection, NSArray;


#import "AUAudioUnit.h"
#import "AUCrashHandler.h"
#import "AUAudioUnitBusArray_XPC.h"
#import "AUParameterTree.h"

@interface AUAudioUnit_XPC : AUAudioUnit {
    recursive_mutex _propListenerMutex;
    *OpaqueAudioComponentInstance _componentInstance;
    NSXPCConnection *_xpcConnection;
    int _remotePID;
    mach_timebase_info _remoteMachTimebaseInfo;
    AUCrashHandler *_crashHandler;
    BOOL _canRender;
    BOOL _canProcess;
    BOOL _removingObserverWithContext;
    mutex _parameterTreeMutex;
    AUAudioUnitBusArray_XPC *_inputBusses;
    AUAudioUnitBusArray_XPC *_outputBusses;
    unique_ptr<AUProcAndUserData, std::default_delete<AUProcAndUserData>> _elementCountListenerToken;
    vector<AUAudioUnit_XPC_PropListener, std::allocator<AUAudioUnit_XPC_PropListener>> _propListeners;
    shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::recursive_mutex>> _renderPipePool;
    optional<auoop::RenderPipeUser> _renderPipeUser;
    AUParameterTree *_cachedParameterTree;
    NSArray *_userPresets;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)_setBusCount:(NSUInteger)arg0 scope:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(BOOL)deleteUserPreset:(id)arg0 error:(*id)arg1 ;
-(BOOL)disableProfile:(id)arg0 cable:(unsigned char)arg1 onChannel:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)enableProfile:(id)arg0 cable:(unsigned char)arg1 onChannel:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)isLoadedInProcess;
-(BOOL)providesUserInterface;
-(BOOL)saveUserPreset:(id)arg0 error:(*id)arg1 ;
-(float)getV2Parameter:(NSUInteger)arg0 sequenceNumber:(unsigned int)arg1 ;
-(id)_getBus:(unsigned int)arg0 scope:(unsigned int)arg1 error:(*id)arg2 ;
-(id)_getInvalidationNotificationInfo;
-(id)_getValueForKey:(id)arg0 ;
-(id)_getValueForProperty:(id)arg0 error:(*id)arg1 ;
-(id)inputBusses;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)messageChannelFor:(id)arg0 ;
-(id)outputBusses;
-(id)parameterTree;
-(id)parametersForOverviewWithCount:(NSInteger)arg0 ;
-(id)presetStateFor:(id)arg0 error:(*id)arg1 ;
-(id)profileStateForCable:(unsigned char)arg0 channel:(unsigned char)arg1 ;
-(id)speechVoices;
-(id)supportedViewConfigurations:(id)arg0 ;
-(id)userPresets;
-(id)valueForUndefinedKey:(id)arg0 ;
-(int)remoteProcessIdentifier;
-(struct ? )remoteProcessAuditToken;
-(void)_doOpen:(id)arg0 completion:(id)arg1 ;
-(void)_invalidatePipePoolAndUser;
-(void)_parameterTreeChanged;
-(void)_refreshBusses:(unsigned int)arg0 ;
-(void)_setComponentInstance:(struct OpaqueAudioComponentInstance *)arg0 ;
-(void)_setState:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 error:(*id)arg2 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)cancelSpeechRequest;
-(void)dealloc;
-(void)didCrash:(id)arg0 ;
-(void)didInvalidate;
-(void)internalDeallocateRenderResources;
-(void)invalidateAllParameters;
-(void)propertiesChanged:(id)arg0 ;
-(void)remoteReset;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 context:(*void)arg2 ;
-(void)reset;
-(void)selectViewConfiguration:(id)arg0 ;
-(void)setCurrentPreset:(id)arg0 ;
-(void)setFullState:(id)arg0 ;
-(void)setFullStateForDocument:(id)arg0 ;
-(void)setMusicalContextBlock:(id)arg0 ;
-(void)setTransportStateBlock:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)synthesizeSpeechRequest:(id)arg0 ;


@end


#endif