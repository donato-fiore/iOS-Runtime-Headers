// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMDEVICEORIENTATIONMANAGER_H
#define CMDEVICEORIENTATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface CMDeviceOrientationManager : NSObject {
    id *_internal;
}




+(BOOL)isAlwaysOn;
+(BOOL)isAvailable;
+(void)dummySelector:(id)arg0 ;
+(void)initialize;
-(BOOL)isDeviceOrientationActive;
-(BOOL)isDeviceOrientationAvailable;
-(BOOL)orientationNotificationsDisabled;
-(id)deviceOrientationBlocking;
-(id)init;
-(id)initPrivate;
-(id)stringForOrientation:(int)arg0 ;
-(void)dealloc;
-(void)deallocPrivate;
-(void)onDeviceOrientation:(struct Sample *)arg0 ;
-(void)onMotionPreferencesUpdated;
-(void)onNotification:(id)arg0 ;
-(void)setDeviceOrientationCallbackModePrivate:(int)arg0 ;
-(void)signalAndReleaseSemaphoreIfNecessaryPrivate;
-(void)start;
-(void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startDeviceOrientationUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)stop;
-(void)stopDeviceOrientationUpdates;
-(void)stopDeviceOrientationUpdatesPrivate;
-(void)updateAggregateDictionaryPrivate;


@end


#endif