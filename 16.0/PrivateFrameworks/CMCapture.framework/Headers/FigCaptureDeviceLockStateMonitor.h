// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREDEVICELOCKSTATEMONITOR_H
#define FIGCAPTUREDEVICELOCKSTATEMONITOR_H

@class NSMutableArray, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigCaptureDeviceLockStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_monitorQueue;
    NSMutableArray *_deviceLockStateObservers;
    int _deviceLockStateChangedToken;
    NSDictionary *_mobileKeyBagOptions;
    BOOL _deviceIsLocked;
    BOOL _invalid;
}




+(id)sharedDeviceLockStateMonitor;
+(void)initialize;
-(id)init;
-(void)addDeviceLockStateObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeDeviceLockStateObserver:(id)arg0 ;


@end


#endif