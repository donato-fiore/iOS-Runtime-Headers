// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMHEADPHONEMOTIONMANAGER_H
#define CMHEADPHONEMOTIONMANAGER_H

@protocol CMHeadphoneMotionManagerDelegate;

#import <Foundation/Foundation.h>

#import "CMHeadphoneMotionManagerInternal.h"
#import "CMDeviceMotion.h"

@interface CMHeadphoneMotionManager : NSObject {
    CMHeadphoneMotionManagerInternal *_internal;
}


@property (weak, nonatomic) NSObject<CMHeadphoneMotionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly) CMDeviceMotion *deviceMotion;
@property (readonly, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;
@property (readonly, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;


+(NSInteger)authorizationStatus;
-(id)init;
-(void)applyInitialReferencePrivate:(id)arg0 ;
-(void)dealloc;
-(void)notifyDeviceConnectedEventToClientPrivate;
-(void)notifyDeviceDisconnectedEventToClientPrivate;
-(void)onDeviceMotionEventPrivate:(id)arg0 ;
-(void)onDeviceMotionPrivate:(id)arg0 ;
-(void)pauseDeviceMotionStreamingPrivate;
-(void)resumeDeviceMotionStreamingPrivate;
-(void)startDeviceMotionUpdates;
-(void)startDeviceMotionUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startDeviceMotionUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)stopDeviceMotionUpdates;
-(void)stopDeviceMotionUpdatesPrivate;


@end


#endif