// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFIGROUTINGCONTEXTOUTPUTCONTEXTIMPL_H
#define AVFIGROUTINGCONTEXTOUTPUTCONTEXTIMPL_H

@class NSDictionary, NSString, NSArray;
@protocol AVOutputContextImpl, AVFigRoutingContextOutputDeviceTranslator, AVFigRoutingContextCommunicationChannelManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVOutputContextCommunicationChannel.h"
#import "AVOutputDevice.h"
#import "AVOutputContext.h"

@interface AVFigRoutingContextOutputContextImpl : NSObject <AVOutputContextImpl>

 {
    id *_routingContextCreator;
    id<AVFigRoutingContextOutputDeviceTranslator> *_deviceTranslator;
    *OpaqueFigVolumeControllerState _volumeController;
    id *_commChannelManagerCreator;
    id<AVFigRoutingContextCommunicationChannelManager> *_commChannelManager;
    AVWeakReference *_weakObserver;
    BOOL _usesRouteConfigUpdatedNotification;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSDictionary *_destinationChangesForRouteChangeIDs;
}


@property (readonly, nonatomic) NSString *ID;
@property (readonly, copy, nonatomic) NSString *associatedAudioDeviceID;
@property (readonly) BOOL canSetVolume;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *OpaqueFigRoutingContext figRoutingContext; // ivar: _routingContext
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property (readonly, nonatomic) NSString *outputContextType;
@property (readonly, nonatomic) AVOutputDevice *outputDevice;
@property (readonly) NSArray *outputDevices;
@property (weak) AVOutputContext *parentOutputContext; // ivar: _parentContext
@property (readonly) AVOutputDevice *predictedOutputDevice;
@property (readonly) BOOL providesControlForAllVolumeFeatures;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsMultipleBluetoothOutputDevices;
@property (readonly) BOOL supportsMultipleOutputDevices;
@property (readonly) float volume;


+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(id)addSharedAudioOutputContextImpl;
+(id)allSharedAudioOutputContextImpls;
+(id)auxiliaryOutputContext;
+(id)defaultSharedOutputContextImpl;
+(id)iTunesAudioContext;
+(id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg0 options:(id)arg1 ;
+(id)outputContextImplForID:(id)arg0 type:(id)arg1 ;
+(id)platformDependentScreenOrVideoContext;
+(id)routingContextFactory;
+(id)sharedAudioPresentationOutputContext;
+(id)sharedSystemAudioContext;
+(id)sharedSystemRemotePoolContext;
+(id)sharedSystemScreenContext;
+(struct OpaqueFigRoutingContext *)copySystemVideoRoutingContext;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithFigRoutingContext:(struct OpaqueFigRoutingContext *)arg0 routingContextReplacementBlock:(id)arg1 ;
// -(id)initWithFigRoutingContext:(struct OpaqueFigRoutingContext *)arg0 routingContextReplacementBlock:(id)arg1 outputDeviceTranslator:(unk)arg2 volumeController:(id)arg3 communicationChannelManagerCreator:(struct OpaqueFigVolumeControllerState *)arg4  ;
-(id)initWithFigRoutingContextCreator:(id)arg0 ;
-(id)initWithRoutingContextUUID:(id)arg0 type:(id)arg1 ;
-(id)openCommunicationChannelWithOptions:(id)arg0 error:(*id)arg1 ;
-(struct __CFDictionary *)_createSelectRouteOptionsForSetOutputDeviceOptions:(id)arg0 ;
-(void)_canSetMasterVolumeDidChangeForRoutingContextWithID:(struct __CFString *)arg0 ;
-(void)_canUseForRoutingContextDidChangeForRoutingContextWIthID:(struct __CFString *)arg0 ;
-(void)_currentRouteChanged;
-(void)_groupConfigurationChanged;
-(void)_masterVolumeDidChangeForRoutingContextWithID:(struct __CFString *)arg0 ;
-(void)_predictedSelectedRouteDescriptorChanged;
-(void)_remoteControlChannelAvailabilityChanged;
-(void)_routeChangeEndedWithID:(id)arg0 reason:(struct __CFString *)arg1 ;
-(void)_routeChangeStartedWithID:(id)arg0 ;
-(void)_routeConfigUpdateEndedWithID:(struct __CFString *)arg0 reason:(struct __CFString *)arg1 ;
-(void)_routeConfigUpdateStartedWithID:(struct __CFString *)arg0 ;
-(void)_routeConfigUpdatedWithID:(struct __CFString *)arg0 reason:(struct __CFString *)arg1 initiator:(struct __CFString *)arg2 endedError:(struct __CFString *)arg3 deviceID:(struct __CFString *)arg4 previousDeviceIDs:(struct __CFArray *)arg5 ;
-(void)_sendCommand:(struct __CFString *)arg0 completionHandler:(id)arg1 ;
-(void)_serverConnectionDied;
-(void)_systemPickerVideoRouteChanged;
-(void)addOutputDevice:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)communicationChannelManager:(id)arg0 didCloseCommunicationChannel:(id)arg1 ;
-(void)communicationChannelManager:(id)arg0 didReceiveData:(id)arg1 fromCommunicationChannel:(id)arg2 ;
-(void)dealloc;
-(void)outputContextDidChangeApplicationProcessID:(id)arg0 ;
-(void)removeOutputDevice:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif