// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPPLAYERREPORTER_H
#define TVPPLAYERREPORTER_H

@class RTCReporting;

#import <Foundation/Foundation.h>

#import "TVPPlayer.h"

@interface TVPPlayerReporter : NSObject

@property (weak, nonatomic) TVPPlayer *player; // ivar: _player
@property (retain, nonatomic) id *reportingHierarchyToken; // ivar: _reportingHierarchyToken
@property (retain) RTCReporting *rtcAgent; // ivar: _rtcAgent


+(void)initialize;
-(id)initWithPlayer:(id)arg0 ;
-(void)_playerCurrentMediaItemDidChange:(id)arg0 ;
-(void)_playerCurrentMediaItemWillChange:(id)arg0 ;
-(void)_playerStateWillChange:(id)arg0 ;
-(void)_sendPlaybackStartupEventsIfNecessary;
-(void)_sendRTCEvent:(id)arg0 withCategory:(unsigned short)arg1 type:(unsigned short)arg2 values:(id)arg3 ;
-(void)_setupRTCAgent;
-(void)_tearDownRTCAgent;
-(void)dealloc;
-(void)sendPlaybackStartupMetricsManually;


@end


#endif