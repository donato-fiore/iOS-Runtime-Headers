// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVCONCRETEOUTPUTCONTEXT_H
#define MRAVCONCRETEOUTPUTCONTEXT_H

@class NSString, NSArray, NSMutableDictionary, AVOutputContext;
@protocol OS_dispatch_queue;


#import "MRAVOutputContext.h"
#import "MRAVOutputDeviceSourceInfo.h"

@interface MRAVConcreteOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    unsigned int _type;
    NSArray *_concreteOutputDevices;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _attemptingLogicalDeviceRecovery;
    BOOL _handlingAirPlayDevicesTimeOut;
    NSMutableDictionary *_notifications;
}


@property (retain, nonatomic) AVOutputContext *avOutputContext; // ivar: _avOutputContext
@property (copy, nonatomic) NSArray *concreteOutputDevices;
@property (nonatomic) BOOL isVolumeControlAvailable;


+(id)createOutputContextWithUniqueIdentifier:(id)arg0 ;
+(id)iTunesContext;
+(id)outputContextForLocalDevice;
+(id)outputContextForLocalDeviceDataSource:(SEL)arg0 ;
+(id)sharedAudioPresentationContext;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(void)setOutputContextForLocalDeviceDataSource:(id)arg0 ;
-(BOOL)supportsMultipleBluetoothOutputDevices;
-(BOOL)supportsVolumeControl;
-(float)volume;
-(id)contextID;
-(id)debugDescription;
-(id)description;
-(id)initWithAVOutputContext:(id)arg0 type:(unsigned int)arg1 ;
-(id)predictedOutputDevice;
-(id)uniqueIdentifier;
-(unsigned int)type;
-(void)_handleLocalDeviceDidChangeOutputContextNotification:(id)arg0 ;
-(void)_handleOutputContextSupportsVolumeDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDeviceDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDevicesDidChangeNotification:(id)arg0 ;
-(void)_handlePredictedOutputDeviceDidChangeNotification:(id)arg0 ;
-(void)_outputContextChangeInitiatedNotification:(id)arg0 ;
-(void)_reloadOutputDevices;
-(void)addOutputDevices:(id)arg0 initiator:(id)arg1 fadeAudio:(BOOL)arg2 withCallbackQueue:(id)arg3 block:(id)arg4 ;
-(void)attemptLogicalDeviceRecovery;
-(void)dealloc;
-(void)removeAllOutputDevicesWithCallbackQueue:(id)arg0 block:(id)arg1 ;
-(void)removeOutputDevices:(id)arg0 initiator:(id)arg1 fadeAudio:(BOOL)arg2 withCallbackQueue:(id)arg3 block:(id)arg4 ;
-(void)resetPredictedOutputDevice;
-(void)setOutputDevices:(id)arg0 initiator:(id)arg1 password:(id)arg2 fadeAudio:(BOOL)arg3 withCallbackQueue:(id)arg4 block:(id)arg5 ;
-(void)setVolume:(float)arg0 ;


@end


#endif