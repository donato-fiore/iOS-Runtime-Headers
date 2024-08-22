// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDEFAULTAUDIOROUTECHANGEMONITORMAC_H
#define CSDEFAULTAUDIOROUTECHANGEMONITORMAC_H



#import "CSEventMonitor.h"

@interface CSDefaultAudioRouteChangeMonitorMac : CSEventMonitor



+(id)sharedInstance;
-(BOOL)isDefaultInputBuiltInMic;
-(BOOL)isDefaultOutputBultInSpeaker;
-(unsigned int)defaultOutputAudioDeviceID;


@end


#endif