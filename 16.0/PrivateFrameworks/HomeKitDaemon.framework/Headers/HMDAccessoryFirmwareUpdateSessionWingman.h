// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATESESSIONWINGMAN_H
#define HMDACCESSORYFIRMWAREUPDATESESSIONWINGMAN_H

@protocol HMDAccessoryFirmwareUpdateSessionWingman;

#import <Foundation/Foundation.h>


@interface HMDAccessoryFirmwareUpdateSessionWingman : NSObject <HMDAccessoryFirmwareUpdateSessionWingman>



@property (readonly) NSUInteger initialSessionState;


-(id)newSchedulerWithAccessory:(id)arg0 firmwareUpdateSession:(id)arg1 workQueue:(id)arg2 ;


@end


#endif