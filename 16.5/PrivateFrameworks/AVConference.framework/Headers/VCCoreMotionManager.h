// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCOREMOTIONMANAGER_H
#define VCCOREMOTIONMANAGER_H

@class CMMotionActivityManager, NSOperationQueue, CMMotionActivity;
@protocol OS_dispatch_queue, VCCoreMotionManagerDelegate;

#import <Foundation/Foundation.h>


@interface VCCoreMotionManager : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<VCCoreMotionManagerDelegate> *_coreMotionManagerDelegate;
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
}


@property (readonly) CMMotionActivity *motionActivity; // ivar: _motionActivity


-(id)coreMotionManagerDelegate;
-(id)initWithDelegate:(id)arg0 ;
-(unsigned char)getMotionActivityValueForMotionActivity:(id)arg0 ;
-(void)dealloc;
-(void)setCoreMotionManagerDelegate:(id)arg0 ;
-(void)startMonitoringMotionActivity;
-(void)stopMonitoringMotionActivity;


@end


#endif