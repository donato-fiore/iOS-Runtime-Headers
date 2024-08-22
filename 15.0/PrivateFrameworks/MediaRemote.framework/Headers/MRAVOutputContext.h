// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVOUTPUTCONTEXT_H
#define MRAVOUTPUTCONTEXT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "MRAVOutputDevice.h"

@interface MRAVOutputContext : NSObject {
    NSArray *_outputDevices;
    NSArray *_outputDevicesSnapshot;
    BOOL _postOutputDeviceChangedScheduled;
    BOOL _postOutputDevicesChangedScheduled;
}


@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (retain, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSArray *outputDevicesSnapshot;
@property (readonly, nonatomic) NSArray *personalDeviceUIDs;
@property (readonly, nonatomic) NSArray *personalDevices;
@property (readonly, nonatomic) MRAVOutputDevice *predictedOutputDevice;
@property (readonly, nonatomic) BOOL supportsMultipleBluetoothOutputDevices;
@property (readonly, nonatomic) BOOL supportsVolumeControl;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) float volume;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;


+(id)iTunesContext;
+(id)notificationQueue;
+(id)sharedAudioPresentationContext;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
-(void)_notifyChangesInOutputDevicesWithAdded:(id)arg0 removed:(id)arg1 updated:(id)arg2 existing:(id)arg3 newDevices:(id)arg4 ;
-(void)_reloadOutputDevices;
-(void)_reloadWithOutputDevices:(id)arg0 ;
-(void)_scheduleOutputContextDeviceDidChangeNotification;
-(void)_scheduleOutputContextDevicesDidChangeNotification;
-(void)addOutputDevices:(id)arg0 initiator:(id)arg1 fadeAudio:(BOOL)arg2 withCallbackQueue:(id)arg3 block:(id)arg4 ;
-(void)addOutputDevices:(id)arg0 initiator:(id)arg1 withCallbackQueue:(id)arg2 block:(id)arg3 ;
-(void)addOutputDevices:(id)arg0 withCallbackQueue:(id)arg1 block:(id)arg2 ;
-(void)removeAllOutputDevicesWithCallbackQueue:(id)arg0 block:(id)arg1 ;
-(void)removeOutputDevices:(id)arg0 initiator:(id)arg1 fadeAudio:(BOOL)arg2 withCallbackQueue:(id)arg3 block:(id)arg4 ;
-(void)removeOutputDevices:(id)arg0 initiator:(id)arg1 withCallbackQueue:(id)arg2 block:(id)arg3 ;
-(void)removeOutputDevices:(id)arg0 withCallbackQueue:(id)arg1 block:(id)arg2 ;


@end


#endif