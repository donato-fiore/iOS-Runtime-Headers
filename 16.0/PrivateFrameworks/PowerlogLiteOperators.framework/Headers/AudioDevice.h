// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDIODEVICE_H
#define AUDIODEVICE_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "PLAudioAgent.h"

@interface AudioDevice : NSObject

@property (copy, nonatomic) id *audioPropertyHandlerBlock; // ivar: _audioPropertyHandlerBlock
@property (weak, nonatomic) PLAudioAgent *ctx; // ivar: _ctx
@property (nonatomic) unsigned int deviceID; // ivar: _deviceID
@property (nonatomic) BOOL isDirty; // ivar: _isDirty
@property (nonatomic) BOOL isInput; // ivar: _isInput
@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (retain) NSDate *lastUpdateTime; // ivar: _lastUpdateTime
@property (nonatomic) unsigned int sourceID; // ivar: _sourceID
@property (nonatomic) unsigned int transType; // ivar: _transType
@property (nonatomic) float volume; // ivar: _volume


-(BOOL)getAudioDeviceIsMute;
-(BOOL)getAudioDeviceIsRunningSomewhere;
-(BOOL)updateDefaultAudioDeviceInfo;
-(float)getAudioDeviceVolume;
-(id)initInputDeviceWithCtx:(id)arg0 ;
-(id)initOutputDeviceWithCtx:(id)arg0 ;
-(unsigned int)getAudioDeviceSource;
-(unsigned int)getAudioDeviceTransportType;
-(void)addAudioDeviceListener;
-(void)cleanAndUpdateDeviceInfo;
-(void)flushAndUpdateDeviceInfoWithBlock:(id)arg0 ;
-(void)handleAudioDevicePropertyChange:(unsigned int)arg0 addresses:(struct AudioObjectPropertyAddress *)arg1 ;
-(void)initAudioPropertyHandler;
-(void)removeAudioDeviceListener;


@end


#endif