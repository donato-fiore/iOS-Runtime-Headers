// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDEVICEORIENTATIONMANAGER_H
#define CKDEVICEORIENTATIONMANAGER_H

@class BKSAccelerometer, NSString, NSMutableSet;
@protocol BKSAccelerometerDelegate, CKDeviceOrientationManagerDelegate;

#import <Foundation/Foundation.h>


@interface CKDeviceOrientationManager : NSObject <BKSAccelerometerDelegate>



@property (retain, nonatomic) BKSAccelerometer *accelerometer; // ivar: _accelerometer
@property (readonly, nonatomic) NSInteger currentDeviceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKDeviceOrientationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *listenerKeys; // ivar: _listenerKeys
@property (readonly, nonatomic, getter=isListeningForOrientationEvents) BOOL listeningForOrientationEvents;
@property (readonly) Class superclass;


-(BOOL)_wantsOrientationEvents;
-(NSInteger)_springboardDeviceLockOrientation;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_broadcastOrientation:(NSInteger)arg0 ;
-(void)_updateListeningState;
-(void)accelerometer:(id)arg0 didAccelerateWithTimeStamp:(CGFloat)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5 ;
-(void)accelerometer:(id)arg0 didChangeDeviceOrientation:(NSInteger)arg1 ;
-(void)beginListeningForOrientationEventsWithKey:(id)arg0 ;
-(void)dealloc;
-(void)endListeningForOrientationEventsWithKey:(id)arg0 ;
-(void)invalidate;


@end


#endif