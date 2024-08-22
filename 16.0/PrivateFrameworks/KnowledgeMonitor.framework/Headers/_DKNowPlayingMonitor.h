// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKNOWPLAYINGMONITOR_H
#define _DKNOWPLAYINGMONITOR_H

@class DKMonitor, _DKEvent, AVOutputContext;



@interface _DKNowPlayingMonitor : DKMonitor {
    _DKEvent *_previousEvent;
    unsigned int _bmSaveState;
}


@property (nonatomic) unsigned int lastPlaybackState; // ivar: _lastPlaybackState
@property (retain, nonatomic) AVOutputContext *outputContext; // ivar: _outputContext


+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventFilterBlock:(SEL)arg0 ;
+(id)_eventWithBundleIdentifier:(id)arg0 metadata:(id)arg1 ;
+(id)entitlements;
+(id)eventStream;
+(void)setPlaybackState:(unsigned int)arg0 bundleId:(id)arg1 track:(id)arg2 outputDeviceIDs:(id)arg3 mediaType:(id)arg4 iTunesStoreIdentifier:(id)arg5 iTunesSubscriptionIdentifier:(id)arg6 ;
-(id)_metadataFromInfo:(id)arg0 outputDevices:(id)arg1 ;
-(id)init;
-(void)_nowPlayingInfoDidChange:(*void)arg0 outputDevices:(id)arg1 ;
-(void)_registerForNowPlayingNotifications;
-(void)deactivate;
-(void)dealloc;
-(void)outputDevicesDidChange:(id)arg0 ;
-(void)saveBMEventWithCurrent:(id)arg0 outputDevices:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif