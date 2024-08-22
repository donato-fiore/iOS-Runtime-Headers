// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBCOREMOTIONMANAGER_H
#define WEBCOREMOTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface WebCoreMotionManager : NSObject {
    RetainPtr<CMMotionManager> m_motionManager;
    RetainPtr<CLLocationManager> m_locationManager;
    WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter, WTF::EnableWeakPtrThreadingAssertions::Yes> m_deviceMotionClients;
    WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter, WTF::EnableWeakPtrThreadingAssertions::Yes> m_deviceOrientationClients;
    RetainPtr<NSTimer> m_updateTimer;
    BOOL m_gyroAvailable;
    BOOL m_headingAvailable;
    BOOL m_initialized;
}




+(id)sharedManager;
-(BOOL)gyroAvailable;
-(BOOL)headingAvailable;
-(id)init;
-(void)addMotionClient:(*void)arg0 ;
-(void)addOrientationClient:(*void)arg0 ;
-(void)checkClientStatus;
-(void)dealloc;
-(void)initializeOnMainThread;
-(void)removeMotionClient:(*void)arg0 ;
-(void)removeOrientationClient:(*void)arg0 ;
-(void)sendAccelerometerData:(id)arg0 ;
-(void)sendMotionData:(id)arg0 withHeading:(id)arg1 ;
-(void)update;


@end


#endif