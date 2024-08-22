// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMEDIASESSION_H
#define RMMEDIASESSION_H


#import <Foundation/Foundation.h>

#import "RMRelativeMotionManager.h"

@interface RMMediaSession : NSObject

@property (nonatomic) NSInteger clientMode; // ivar: _clientMode
@property (retain, nonatomic) RMRelativeMotionManager *manager; // ivar: _manager
@property (nonatomic) CGFloat sessionStartTimestamp; // ivar: _sessionStartTimestamp
@property BOOL sessionStartedWithTracking; // ivar: _sessionStartedWithTracking


+(BOOL)_isClientModeAvailable:(NSInteger)arg0 ;
+(BOOL)isAvailable;
-(BOOL)_start;
-(BOOL)isAXHeadTrackingSettingEnabled;
-(NSInteger)_currentAudioListenerPose:(*id)arg0 ;
-(NSInteger)_currentAudioListenerPose:(struct ? *)arg0 timestamp:(*CGFloat)arg1 ;
-(id)_initWithOptions:(id)arg0 ;
-(id)init;
-(void)_resetTrackingForAllClients;
-(void)_stop;
-(void)dealloc;
-(void)startMonitoringAXHeadTrackingSetting;
-(void)stopMonitoringAXHeadTrackingSetting;


@end


#endif