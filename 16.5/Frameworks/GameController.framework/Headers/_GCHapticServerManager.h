// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCHAPTICSERVERMANAGER_H
#define _GCHAPTICSERVERMANAGER_H

@class NSMutableDictionary, BKSApplicationStateMonitor;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _GCHapticServerManager : NSObject {
    NSUInteger _nextClientID;
    NSUInteger _tickCount;
    float _tickLengthSeconds;
    BOOL _running;
    BOOL _idle;
    NSUInteger _channelID;
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *_logicalHapticDevices;
    NSMutableDictionary *_clientInvalidationHandlers;
    NSMutableDictionary *_hapticPlayers;
    BKSApplicationStateMonitor *_appMonitor;
}


@property (nonatomic) BOOL activeEvents; // ivar: _activeEvents
@property (retain, nonatomic) NSMutableDictionary *clients; // ivar: _clients
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *runloopQueue; // ivar: _runloopQueue


+(id)sharedInstance;
-(BOOL)acceptNewConnection:(id)arg0 fromHapticsEnabledApp:(id)arg1 ;
-(BOOL)playersHaveImpendingCommandsForStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(BOOL)readClientDataForStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(id)__onqueue_reserveChannels:(NSUInteger)arg0 forClient:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)enterRunloop;
-(void)hapticClientProxyInitialized:(id)arg0 ;
-(void)identifyCompletedClients;
-(void)logicalDeviceWasUnregistered:(id)arg0 ;
-(void)notifyPlayerNoLongerRetained:(id)arg0 ;
-(void)processActiveEventsForStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(void)processScheduledCommandsForStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(void)readListCommand:(struct HapticCommand )arg0 client:(id)arg1 renderTime:(CGFloat)arg2 ;
-(void)readParamCurveListCommand:(struct HapticCommand )arg0 client:(id)arg1 ;
-(void)removeHapticClient:(id)arg0 ;
-(void)scheduleCommand:(*void)arg0 ;
-(void)spawnInputThread;


@end


#endif