// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUAUDIOUNIT_H
#define AUAUDIOUNIT_H

@class NSString, UIViewController, NSMutableArray, NSArray, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AUParameterTree.h"
#import "AUAudioUnitPreset.h"
#import "AUAudioUnitBusArray.h"

@interface AUAudioUnit : NSObject {
    *OpaqueAudioComponent _component;
    NSString *_componentName;
    unsigned int _componentVersion;
    UIViewController *_cachedViewController;
    unsigned int _maximumFramesToRender;
    NSInteger _MIDIOutputBufferSizeHint;
    RealtimeState _realtimeState;
    AUParameterTree *_parameterTree;
    NSMutableArray *_userPresets;
    BOOL _isLoadedInProcess;
    NSObject<OS_dispatch_queue> *_presetMonitoringQueue;
    NSObject<OS_dispatch_source> *_presetFolderWatcher;
    id *_MIDIOutputEventBlock;
    id *_MIDIOutputEventListBlock;
    id *_MIDIOutputEventHostBlock;
    id *_MIDIOutputEventListHostBlock;
    BOOL _shouldUseMIDI2;
}


@property (readonly, nonatomic) int AudioUnitMIDIProtocol; // ivar: _AudioUnitMIDIProtocol
@property (nonatomic) NSInteger MIDIOutputBufferSizeHint;
@property (copy, nonatomic) id *MIDIOutputEventBlock;
@property (copy, nonatomic) id *MIDIOutputEventListBlock;
@property (readonly, copy, nonatomic) NSArray *MIDIOutputNames;
@property (readonly, nonatomic) BOOL allParameterValues; // ivar: _allParameterValues
@property (readonly, copy, nonatomic) NSString *audioUnitName;
@property (readonly, copy, nonatomic) NSString *audioUnitShortName; // ivar: _audioUnitShortName
@property (readonly, nonatomic) BOOL canProcessInPlace; // ivar: _canProcessInPlace
@property (readonly, copy, nonatomic) NSArray *channelCapabilities;
@property (copy, nonatomic) NSArray *channelMap; // ivar: _channelMap
@property (readonly, nonatomic) *OpaqueAudioComponent component;
@property (readonly, nonatomic) AudioComponentDescription componentDescription; // ivar: _componentDescription
@property (readonly, copy, nonatomic) NSString *componentName;
@property (readonly, nonatomic) unsigned int componentVersion;
@property (copy, nonatomic) NSString *contextName; // ivar: _contextName
@property (retain, nonatomic) AUAudioUnitPreset *currentPreset; // ivar: _currentPreset
@property (readonly, copy, nonatomic) NSArray *factoryPresets; // ivar: _factoryPresets
@property (copy, nonatomic) NSDictionary *fullState;
@property (copy, nonatomic) NSDictionary *fullStateForDocument;
@property (nonatomic) int hostMIDIProtocol; // ivar: _hostMIDIProtocol
@property (readonly, nonatomic) AUAudioUnitBusArray *inputBusses;
@property (readonly, nonatomic) id *internalRenderBlock;
@property (readonly, nonatomic) BOOL isLoadedInProcess;
@property (readonly, nonatomic) CGFloat latency; // ivar: _latency
@property (readonly, copy, nonatomic) NSString *manufacturerName;
@property (nonatomic) unsigned int maximumFramesToRender;
@property (readonly, nonatomic) NSArray *migrateFromPlugin; // ivar: _migrateFromPlugin
@property (readonly, nonatomic, getter=isMusicDeviceOrEffect) BOOL musicDeviceOrEffect;
@property (copy, nonatomic) id *musicalContextBlock; // ivar: _musicalContextBlock
@property (readonly, nonatomic) AUAudioUnitBusArray *outputBusses;
@property (retain, nonatomic) AUParameterTree *parameterTree;
@property (copy, nonatomic) id *profileChangedBlock; // ivar: _profileChangedBlock
@property (readonly, nonatomic) BOOL providesUserInterface;
@property (readonly, nonatomic) id *renderBlock;
@property (readonly, nonatomic) id *renderContextObserver;
@property (nonatomic) NSInteger renderQuality; // ivar: _renderQuality
@property (readonly, nonatomic) BOOL renderResourcesAllocated; // ivar: _renderResourcesAllocated
@property (nonatomic, getter=isRenderingOffline) BOOL renderingOffline; // ivar: _renderingOffline
@property (nonatomic) BOOL requestViewControllerSynchronously; // ivar: _requestViewControllerSynchronously
@property (readonly, nonatomic) id *scheduleMIDIEventBlock;
@property (readonly, nonatomic) id *scheduleMIDIEventListBlock;
@property (readonly, nonatomic) id *scheduleParameterBlock;
@property (nonatomic) BOOL shouldBypassEffect; // ivar: _shouldBypassEffect
@property (readonly, nonatomic) BOOL supportsMPE; // ivar: _supportsMPE
@property (readonly, nonatomic) BOOL supportsUserPresets;
@property (readonly, nonatomic) CGFloat tailTime; // ivar: _tailTime
@property (copy, nonatomic) id *transportStateBlock; // ivar: _transportStateBlock
@property (readonly, copy, nonatomic) NSArray *userPresets;
@property (readonly, nonatomic) NSInteger virtualMIDICableCount; // ivar: _virtualMIDICableCount


+(BOOL)_deleteUserPreset:(id)arg0 error:(*id)arg1 ;
+(BOOL)_saveUserPreset:(id)arg0 state:(id)arg1 error:(*id)arg2 ;
+(id)__presetFromPath:(id)arg0 ;
+(id)__sanitizeFileName:(id)arg0 ;
+(id)__userPresetPath:(id)arg0 error:(*id)arg1 ;
+(id)_monitorUserPresets:(id)arg0 callback:(id)arg1 ;
+(id)_presetStateFor:(id)arg0 error:(*id)arg1 ;
+(id)auAudioUnitForAudioUnit:(struct OpaqueAudioComponentInstance *)arg0 ;
+(id)keyPathsForValuesAffectingAllParameterValues;
+(void)__sanitizePresetNumber:(id)arg0 ;
+(void)_loadUserPresets:(id)arg0 error:(*id)arg1 ;
+(void)instantiateWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 completionHandler:(id)arg2 ;
+(void)instantiateWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 connectionProvider:(struct function<NSXPCConnection *(NSUUID *)> )arg2 completionHandler:(id)arg3 ;
+(void)registerSubclass:(Class)arg0 asComponentDescription:(struct AudioComponentDescription )arg1 name:(id)arg2 version:(unsigned int)arg3 ;
-(*void)auv2GetParameterSynchronizer;
-(*void)eventSchedule;
-(*void)scheduledParameterRefresher;
-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(BOOL)deleteUserPreset:(id)arg0 error:(*id)arg1 ;
-(BOOL)disableProfile:(id)arg0 cable:(unsigned char)arg1 onChannel:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)enableProfile:(id)arg0 cable:(unsigned char)arg1 onChannel:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)isSpeechSynthesisProvider;
-(BOOL)saveUserPreset:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldChangeToFormat:(id)arg0 forBus:(id)arg1 ;
-(NSInteger)tokenByAddingRenderObserver:(id)arg0 ;
-(float)getV2Parameter:(NSUInteger)arg0 sequenceNumber:(unsigned int)arg1 ;
-(id)_valueForProperty:(id)arg0 error:(*id)arg1 ;
-(id)cachedViewController;
-(id)init;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 error:(*id)arg1 ;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)messageChannelFor:(id)arg0 ;
-(id)osWorkgroup;
-(id)parametersForOverviewWithCount:(NSInteger)arg0 ;
-(id)presetStateFor:(id)arg0 error:(*id)arg1 ;
-(id)profileStateForCable:(unsigned char)arg0 channel:(unsigned char)arg1 ;
-(id)supportedViewConfigurations:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(int)remoteProcessIdentifier;
-(struct ? )remoteProcessAuditToken;
-(struct OpaqueAudioComponentInstance *)audioUnit;
-(void)_setValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(void)addRenderObserver:(*unk)arg0 userData:(*void)arg1 ;
-(void)dealloc;
-(void)deallocateRenderResources;
-(void)deliverV2Parameters:(*uint8_t)arg0 ;
-(void)flushEventSchedule;
-(void)internalDeallocateRenderResources;
-(void)invalidateAudioUnit;
-(void)removeRenderObserver:(*unk)arg0 userData:(*void)arg1 ;
-(void)removeRenderObserver:(NSInteger)arg0 ;
-(void)requestViewControllerWithCompletionHandler:(id)arg0 ;
-(void)reset;
-(void)selectViewConfiguration:(id)arg0 ;
-(void)setCachedViewController:(id)arg0 ;
-(void)setLoadedOutOfProcess;
-(void)setV2Parameter:(NSUInteger)arg0 value:(float)arg1 bufferOffset:(unsigned int)arg2 sequenceNumber:(unsigned int)arg3 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)setupMIDIConversion;
-(void)startUserPresetFolderMonitoring;
-(void)tearDownExtension;


@end


#endif