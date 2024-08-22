// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATEREGISTERTASK_H
#define HMDACCESSORYFIRMWAREUPDATEREGISTERTASK_H



#import "HMDAccessoryFirmwareUpdateTask.h"

@interface HMDAccessoryFirmwareUpdateRegisterTask : HMDAccessoryFirmwareUpdateTask {
    BOOL _userInitiated;
}




-(BOOL)isUserInitiated;
-(BOOL)shouldRun;
-(id)criteria;
-(id)initWithSession:(id)arg0 profile:(id)arg1 initialDelay:(CGFloat)arg2 ;
-(void)run;


@end


#endif