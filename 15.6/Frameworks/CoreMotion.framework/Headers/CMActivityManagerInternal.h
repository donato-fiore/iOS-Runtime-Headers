// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMACTIVITYMANAGERINTERNAL_H
#define CMACTIVITYMANAGERINTERNAL_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CMActivityManagerInternal : NSObject {
    *void fLocationdConnection;
    id *fActivityHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    BOOL fSubscribedToMotionState;
    NSObject<OS_dispatch_semaphore> *fSidebandOverrideSemaphore;
    NSObject<OS_dispatch_queue> *fSidebandOverrideQueue;
    BOOL fSidebandOverrideWaiting;
    NSInteger fSidebandOverrideResult;
    NSObject<OS_dispatch_semaphore> *fMotionStateSimSemaphore;
    NSObject<OS_dispatch_queue> *fMotionStateSimQueue;
    BOOL fMotionStateSimWaiting;
    NSInteger fMotionStateSimResult;
    NSInteger fMotionStateYouthSimResult;
}




-(id)init;
-(void)connect;
-(void)dealloc;
-(void)disconnect;
-(void)overrideOscarSideband:(BOOL)arg0 withState:(NSInteger)arg1 ;
-(void)simulateMotionState:(BOOL)arg0 withState:(NSInteger)arg1 ;
-(void)simulateMotionStateYouthWithState:(NSInteger)arg0 ;
-(void)startActivityUpdatesWithHandlerPrivate:(id)arg0 ;
-(void)stopActivityUpdatesPrivate;


@end


#endif