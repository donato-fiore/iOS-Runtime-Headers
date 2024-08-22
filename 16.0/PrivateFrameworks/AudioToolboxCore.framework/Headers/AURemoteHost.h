// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUREMOTEHOST_H
#define AUREMOTEHOST_H

@class NSXPCConnection, NSMutableArray, NSUUID;
@protocol AUAudioUnitXPCProtocol, OS_voucher, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AUAudioUnit.h"
#import "AUParameterTree.h"

@interface AURemoteHost : NSObject <AUAudioUnitXPCProtocol>

 {
    AUAudioUnit *_audioUnit;
    NSXPCConnection *_remoteHostXPCConnection;
    optional<AUOOPRenderingServerUser> _renderServerUser;
    NSObject<OS_voucher> *_initializationVoucher;
    AUParameterTree *_cachedParameterTree;
    reply_watchdog_factory _replyWatchdogFactory;
    NSObject<OS_dispatch_queue> *_presetMonitoringQueue;
    NSObject<OS_dispatch_source> *_presetFolderWatcher;
    NSMutableArray *_userPresets;
    shared_ptr<auoop::WorkgroupMirror> _workgroupMirror;
    KVOAggregator _kvoAggregator;
    vector<AURemoteMessageChannel *, std::allocator<AURemoteMessageChannel *>> _remoteMessageChannels;
}


@property (readonly, nonatomic) NSUUID *audioUnitUUID; // ivar: _audioUnitUUID
@property (readonly, nonatomic) AudioComponentDescription componentDescription; // ivar: _componentDescription
@property (nonatomic) int deferPropertyChangeNotifications; // ivar: _deferPropertyChangeNotifications
@property (readonly, nonatomic) NSMutableArray *pendingChangedProperties; // ivar: _pendingChangedProperties
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyObserverQueue; // ivar: _propertyObserverQueue


+(void)_staticInit;
-(BOOL)_identifyBus:(id)arg0 scope:(*unsigned int)arg1 element:(*unsigned int)arg2 ;
-(id)_fetchAndClearPendingChangedProperties;
-(id)_getBus:(unsigned int)arg0 scope:(unsigned int)arg1 error:(*id)arg2 ;
-(id)_getSpeechSynthesisProviderAudioUnit;
-(id)audioUnit;
-(id)currentParameterTree;
-(id)initWithInputItems:(id)arg0 xpcConnection:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 xpcConnection:(id)arg1 timeOutHandler:(struct function<void ()> )arg2 ;
-(id)initWithInputItems_internal:(id)arg0 xpcConnection:(id)arg1 ;
-(void)addPropertyObserver:(id)arg0 context:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)cancelSpeechRequest:(id)arg0 ;
-(void)close:(id)arg0 ;
-(void)createRenderPipe:(int)arg0 formats:(id)arg1 maxFrames:(unsigned int)arg2 midiOutSizeHint:(unsigned int)arg3 resources:(id)arg4 reply:(id)arg5 ;
-(void)dealloc;
-(void)deleteUserPreset:(id)arg0 reply:(id)arg1 ;
-(void)destroyRenderPipe:(unsigned int)arg0 reply:(id)arg1 ;
-(void)disableProfile:(id)arg0 cable:(unsigned char)arg1 onChannel:(unsigned char)arg2 reply:(id)arg3 ;
-(void)enableProfile:(id)arg0 cable:(unsigned char)arg1 onChannel:(unsigned char)arg2 reply:(id)arg3 ;
-(void)getBusses:(unsigned int)arg0 reply:(id)arg1 ;
-(void)getCustomMessageChannelFor:(id)arg0 reply:(id)arg1 ;
-(void)getParameter:(NSUInteger)arg0 sequenceNumber:(unsigned int)arg1 reply:(id)arg2 ;
-(void)getParameterTree:(id)arg0 ;
-(void)getSpeechVoices:(id)arg0 ;
-(void)initialize:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)loadUserPresets:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)open:(id)arg0 ;
-(void)openImpl:(id)arg0 reply:(id)arg1 ;
-(void)parameterNode:(id)arg0 displayNameWithLength:(NSInteger)arg1 reply:(id)arg2 ;
-(void)parameterStringFromValue:(float)arg0 currentValue:(BOOL)arg1 address:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)parameterValueFromString:(id)arg0 address:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)parametersForOverviewWithCount:(NSInteger)arg0 reply:(id)arg1 ;
-(void)presetStateFor:(id)arg0 reply:(id)arg1 ;
-(void)profileStateForCable:(unsigned char)arg0 channel:(unsigned char)arg1 reply:(id)arg2 ;
-(void)removePropertyObserver:(id)arg0 context:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)reset:(id)arg0 ;
-(void)saveUserPreset:(id)arg0 state:(id)arg1 reply:(id)arg2 ;
-(void)selectViewConfiguration:(id)arg0 reply:(id)arg1 ;
-(void)setBlocks;
-(void)setBusCount:(NSUInteger)arg0 scope:(unsigned int)arg1 reply:(id)arg2 ;
-(void)setBusFormat:(unsigned int)arg0 scope:(unsigned int)arg1 format:(id)arg2 reply:(id)arg3 ;
-(void)setBusName:(unsigned int)arg0 scope:(unsigned int)arg1 name:(id)arg2 reply:(id)arg3 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 reply:(id)arg2 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 propagateError:(BOOL)arg2 reply:(id)arg3 ;
-(void)startUserPresetFolderMonitoring;
-(void)supportedViewConfigurations:(id)arg0 reply:(id)arg1 ;
-(void)syncParameter:(NSUInteger)arg0 value:(float)arg1 extOriginator:(NSUInteger)arg2 hostTime:(NSUInteger)arg3 eventType:(unsigned int)arg4 ;
-(void)synthesizeSpeechRequest:(id)arg0 reply:(id)arg1 ;
-(void)uninitialize:(id)arg0 ;
-(void)updateHostCallbacks:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)updateWorkgroupMirror:(id)arg0 reply:(id)arg1 ;
-(void)valueForKey:(id)arg0 reply:(id)arg1 ;
-(void)valueForProperty:(id)arg0 propagateError:(BOOL)arg1 reply:(id)arg2 ;


@end


#endif