// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKSCREENSHARINGMONITOR_H
#define _DKSCREENSHARINGMONITOR_H

@class DKMonitor, AVOutputContext, BMScreenSharingStream;



@interface _DKScreenSharingMonitor : DKMonitor

@property (nonatomic) NSInteger currentMirroringDeviceCount; // ivar: _currentMirroringDeviceCount
@property (retain, nonatomic) AVOutputContext *outputContext; // ivar: _outputContext
@property (retain, nonatomic) BMScreenSharingStream *screenSharingStream; // ivar: _screenSharingStream


+(id)entitlements;
+(id)eventStream;
-(id)init;
-(void)deactivate;
-(void)mirroringDidChange:(id)arg0 ;
-(void)registerForScreenMirroringNotifications;
-(void)start;
-(void)stop;


@end


#endif