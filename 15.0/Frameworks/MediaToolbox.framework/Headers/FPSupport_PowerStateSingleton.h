// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSUPPORT_POWERSTATESINGLETON_H
#define FPSUPPORT_POWERSTATESINGLETON_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPSupport_PowerStateSingleton : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQ;
}




+(id)sharedFPSupportPowerStateSingleton;
-(id)init;
-(void)_didChangePowerState:(id)arg0 ;
-(void)dealloc;
-(void)postNotification;


@end


#endif