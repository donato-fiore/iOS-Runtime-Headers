// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOLUMEMONITOR_H
#define CSVOLUMEMONITOR_H

@protocol OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}




+(id)sharedInstance;
-(BOOL)_fetchSystemVolumeForCategory:(id)arg0 usingSystemController:(id)arg1 volume:(*float)arg2 ;
-(BOOL)_supportAVSystemVolumeFetch;
-(float)_getNewSystemVolumesWithNotification:(id)arg0 category:(id)arg1 ;
-(float)alarmVolume;
-(float)musicVolume;
-(id)init;
-(void)_notifyObserver:(id)arg0 volumeDidChanged:(float)arg1 forAudioCategory:(id)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_startObservingSystemControllerLifecycle;
-(void)dealloc;
-(void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)arg0 ;
-(void)musicVolumeWithCompletion:(id)arg0 ;
-(void)startObservingSystemVolumes;
-(void)systemControllerDied:(id)arg0 ;
-(void)systemVolumeDidChange:(id)arg0 ;


@end


#endif