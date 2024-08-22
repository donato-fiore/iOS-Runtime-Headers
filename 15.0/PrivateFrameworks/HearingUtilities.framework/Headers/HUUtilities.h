// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUUTILITIES_H
#define HUUTILITIES_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HUUtilities : NSObject {
    NSDictionary *_pickableRoutes;
    int _wirelessSplitterNotifyToken;
    BOOL _wirelessSplitterEnabled;
    os_unfair_lock_s _routingLock;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue; // ivar: _routingQueue
@property (nonatomic) BOOL takingConnection; // ivar: _takingConnection


+(id)XDCObjectFromObject:(id)arg0 ;
+(id)objectFromXDCObject:(id)arg0 ;
+(id)sharedUtilities;
-(BOOL)deviceIsTinker;
-(BOOL)hearingAidRouteAvailable;
-(BOOL)hearingAidStreamSelected;
-(BOOL)liveListenRouteSelected;
-(BOOL)oldRoutes:(id)arg0 equalToNewRoutes:(id)arg1 ;
-(BOOL)wirelessSplitterEnabled;
-(id)currentPickableAudioRoutes;
-(id)currentPickableAudioRoutesIfExist;
-(id)init;
-(void)addHearingFeatureUsage:(NSUInteger)arg0 ;
-(void)checkAudioPlayingWithQueue:(id)arg0 andCompletion:(id)arg1 ;
-(void)clearAudioRoutes;
-(void)dealloc;
-(void)mediaServerDied;
-(void)pauseNowPlaying:(BOOL)arg0 withQueue:(id)arg1 andCompletion:(id)arg2 ;
-(void)pickableAudioRoutesDidChange:(id)arg0 ;
-(void)registerNotifications;
-(void)updateHearingFeatureUsage;
-(void)updateWirelessSplitterState;


@end


#endif