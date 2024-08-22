// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATESCHEDULERWINGMAN_H
#define HMDACCESSORYFIRMWAREUPDATESCHEDULERWINGMAN_H

@class NSNotificationCenter;
@protocol HMDAccessoryFirmwareUpdateSchedulerWingman;

#import <Foundation/Foundation.h>


@interface HMDAccessoryFirmwareUpdateSchedulerWingman : NSObject <HMDAccessoryFirmwareUpdateSchedulerWingman>



@property (readonly) NSNotificationCenter *notificationCenter;


-(id)newBackgroundSchedulerWithIdentifier:(id)arg0 ;
-(id)newInitialDelayTimerWithDelay:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(id)policyForAccessory:(id)arg0 sessionState:(NSUInteger)arg1 workQueue:(id)arg2 ;


@end


#endif