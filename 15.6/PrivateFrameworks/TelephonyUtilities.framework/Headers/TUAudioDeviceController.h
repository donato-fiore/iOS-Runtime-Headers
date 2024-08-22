// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUAUDIODEVICECONTROLLER_H
#define TUAUDIODEVICECONTROLLER_H

@class AVAudioClient, AVAudioDevice, NSString, NSHashTable, NSArray;
@protocol TUAudioDeviceControllerActions, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions>



@property (weak, nonatomic) NSObject<TUAudioDeviceControllerActions> *actionsDelegate; // ivar: _actionsDelegate
@property (retain, nonatomic) AVAudioClient *audioClient; // ivar: _audioClient
@property (retain, nonatomic) AVAudioDevice *currentInputDevice;
@property (retain, nonatomic) AVAudioDevice *currentOutputDevice;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inputDevices;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(id)init;
-(id)initWithActionsDelegate:(id)arg0 serialQueue:(id)arg1 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)notifyDelegatesOfDeviceListChange;
-(void)removeDelegate:(id)arg0 ;
-(void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg0 ;
-(void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg0 ;
-(void)setFollowsSystemInputSetting:(BOOL)arg0 ;
-(void)setFollowsSystemOutputSetting:(BOOL)arg0 ;
-(void)setMixesVoiceWithMedia:(BOOL)arg0 ;


@end


#endif