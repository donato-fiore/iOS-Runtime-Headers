// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSUPPRESSIONMANAGER_H
#define CMSUPPRESSIONMANAGER_H

@class NSString;
@protocol DPCWatchPresenceDelegate;

#import <Foundation/Foundation.h>


@interface CMSuppressionManager : NSObject <DPCWatchPresenceDelegate>

 {
    id *_internal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isAvailable;
-(id)init;
-(id)initPrivate;
-(id)viewObstructedBlocking;
-(struct CMSuppressionEventStruct )currentSuppressionEvent;
-(void)connect;
-(void)dealloc;
-(void)deallocPrivate;
-(void)didDetectSignificantUserInteraction;
-(void)feedDevicePresenceEvent:(NSInteger)arg0 timestamp:(CGFloat)arg1 ;
-(void)feedSmartPowerNapEvent:(NSInteger)arg0 timestamp:(CGFloat)arg1 ;
-(void)feedViewObstructedEvent:(NSInteger)arg0 timestamp:(CGFloat)arg1 ;
-(void)handleSmartPowerNapState:(unsigned char)arg0 ;
-(void)managerDidDetectEvent:(NSUInteger)arg0 ;
-(void)managerDidFindError:(NSUInteger)arg0 ;
-(void)onEclipseData:(struct Suppress *)arg0 ;
-(void)onNotification:(id)arg0 ;
-(void)onViewObstructedStateData:(struct ViewObstructedState *)arg0 ;
-(void)sendServiceRequestPrivate;
-(void)sendSuppressionEventToClientPrivate;
-(void)sendViewObstructedRequestPrivate;
-(void)sendViewObstructedStateToClientPrivate;
-(void)simulateSignificantUserInteraction;
-(void)startService;
-(void)startSuppressionUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startSuppressionUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startViewObstructedStateUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startViewObstructedStateUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)stopService;
-(void)stopSuppressionUpdates;
-(void)stopSuppressionUpdatesPrivate;
-(void)stopViewObstructedStateUpdates;
-(void)stopViewObstructedStateUpdatesPrivate;
-(void)updateCurrentSuppressionEvent:(NSInteger)arg0 timestamp:(CGFloat)arg1 reason:(NSUInteger)arg2 ;
-(void)updateSuppressionStateAndSendToClient;


@end


#endif