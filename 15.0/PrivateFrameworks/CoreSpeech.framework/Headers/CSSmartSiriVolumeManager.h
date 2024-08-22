// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSMARTSIRIVOLUMEMANAGER_H
#define CSSMARTSIRIVOLUMEMANAGER_H

@class NSString;
@protocol CSVoiceTriggerDelegate, CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate, CSAutomaticVolumeEnabledMonitorDelegate, CSConnectionServiceDelegate, OS_dispatch_queue, CSSmartSiriVolumeProcessor;

#import <Foundation/Foundation.h>


@interface CSSmartSiriVolumeManager : NSObject <CSVoiceTriggerDelegate, CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate, CSAutomaticVolumeEnabledMonitorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSConnectionServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<CSSmartSiriVolumeProcessor> *smartSiriVolume; // ivar: _smartSiriVolume
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)getVolumeForTTSType:(NSUInteger)arg0 withOverrideMediaVolume:(id)arg1 WithRequestTime:(NSUInteger)arg2 ;
-(id)initWithSamplingRate:(float)arg0 withAsset:(id)arg1 ;
-(void)CSAlarmMonitor:(id)arg0 didReceiveAlarmChanged:(NSInteger)arg1 ;
-(void)CSAutomaticVolumeEnabledMonitor:(id)arg0 didReceiveEnabled:(BOOL)arg1 ;
-(void)CSTimerMonitor:(id)arg0 didReceiveTimerChanged:(NSInteger)arg1 ;
-(void)CSVolumeMonitor:(id)arg0 didReceiveAlarmVolumeChanged:(float)arg1 ;
-(void)CSVolumeMonitor:(id)arg0 didReceiveMusicVolumeChanged:(float)arg1 ;
-(void)setAsset:(id)arg0 ;
-(void)setPermanentVolumeOffsetWithDirection:(BOOL)arg0 ;
-(void)startSmartSiriVolume;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 ;


@end


#endif