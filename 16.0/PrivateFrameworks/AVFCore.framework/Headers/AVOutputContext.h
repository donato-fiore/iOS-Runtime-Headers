// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTCONTEXT_H
#define AVOUTPUTCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AVOutputContextInternal.h"

@interface AVOutputContext : NSObject <NSSecureCoding>

 {
    AVOutputContextInternal *_outputContext;
}


@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) *OpaqueFigRoutingContext figRoutingContext;


+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(BOOL)supportsSecureCoding;
+(Class)defaultOutputContextImplClass;
+(id)addSharedAudioOutputContext;
+(id)allSharedAudioOutputContexts;
+(id)auxiliaryOutputContext;
+(id)commChannelUUIDCommunicationChannelManagerCreator:(SEL)arg0 ;
+(id)defaultCommunicationChannelManagerCreator:(SEL)arg0 ;
+(id)defaultSharedOutputContext;
+(id)iTunesAudioContext;
+(id)outputContext;
+(id)outputContextForControllingOutputDeviceGroupWithID:(id)arg0 ;
+(id)outputContextForControllingOutputDeviceGroupWithID:(id)arg0 options:(id)arg1 ;
+(id)outputContextForID:(id)arg0 ;
+(id)outputContextWithFigRoutingContextCreator:(id)arg0 ;
// +(id)outputContextWithFigRoutingContextCreator:(id)arg0 communicationChannelManagerCreator:(unk)arg1  ;
// +(id)outputContextWithFigRoutingContextCreator:(id)arg0 outputDeviceTranslator:(unk)arg1  ;
// +(id)outputContextWithFigRoutingContextCreator:(id)arg0 volumeController:(unk)arg1  ;
+(id)preferredOutputDevicesForAudioSession:(id)arg0 ;
+(id)sharedAudioPresentationOutputContext;
+(id)sharedSystemAudioContext;
+(id)sharedSystemRemotePoolContext;
+(id)sharedSystemScreenContext;
+(void)initialize;
+(void)resetOutputDeviceForAllOutputContexts;
-(BOOL)canSetVolume;
-(BOOL)getApplicationProcessID:(*int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)providesControlForAllVolumeFeatures;
-(BOOL)setOutputDevice:(id)arg0 forFeatures:(NSUInteger)arg1 ;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(BOOL)supportsMultipleOutputDevices;
-(NSInteger)volumeControlType;
-(NSUInteger)hash;
-(NSUInteger)outputDeviceFeatures;
-(float)volume;
-(id)ID;
-(id)communicationChannelDelegate;
-(id)contextID;
-(id)description;
-(id)impl;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOutputContextImpl:(id)arg0 ;
-(id)openCommunicationChannelWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)outgoingCommunicationChannel;
-(id)outputContextType;
-(id)outputDevice;
-(id)outputDevices;
-(id)predictedOutputDevice;
-(int)applicationProcessID;
-(void)addOutputDevice:(id)arg0 ;
-(void)addOutputDevice:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)decreaseVolumeByCount:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)increaseVolumeByCount:(NSInteger)arg0 ;
-(void)outputContextImpl:(id)arg0 didChangeOutputDeviceWithInitiator:(id)arg1 ;
-(void)outputContextImpl:(id)arg0 didChangeOutputDevicesWithInitiator:(id)arg1 reason:(id)arg2 deviceID:(id)arg3 previousDeviceIDs:(id)arg4 ;
-(void)outputContextImpl:(id)arg0 didCloseCommunicationChannel:(id)arg1 ;
-(void)outputContextImpl:(id)arg0 didExpireWithReplacement:(id)arg1 ;
-(void)outputContextImpl:(id)arg0 didInitiateDestinationChange:(id)arg1 ;
-(void)outputContextImpl:(id)arg0 didReceiveData:(id)arg1 fromCommunicationChannel:(id)arg2 ;
-(void)outputContextImplDidChangeCanSetVolume:(id)arg0 ;
-(void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)arg0 ;
-(void)outputContextImplDidChangePredictedOutputDevice:(id)arg0 ;
-(void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)arg0 ;
-(void)outputContextImplDidChangeVolume:(id)arg0 ;
-(void)outputContextImplDidChangeVolumeControlType:(id)arg0 ;
-(void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)arg0 ;
-(void)removeOutputDevice:(id)arg0 ;
-(void)removeOutputDevice:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetPredictedOutputDevice;
-(void)setApplicationProcessID:(int)arg0 ;
-(void)setCommunicationChannelDelegate:(id)arg0 ;
-(void)setOutputDevice:(id)arg0 options:(id)arg1 ;
-(void)setOutputDevice:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)setOutputDevices:(id)arg0 ;
-(void)setOutputDevices:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)setVolume:(float)arg0 ;


@end


#endif