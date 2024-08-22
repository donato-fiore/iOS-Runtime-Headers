// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATESTAGINGTASK_H
#define HMDACCESSORYFIRMWAREUPDATESTAGINGTASK_H



#import "HMDAccessoryFirmwareUpdateTask.h"

@interface HMDAccessoryFirmwareUpdateStagingTask : HMDAccessoryFirmwareUpdateTask {
    BOOL _userInitiated;
}




-(BOOL)isUserInitiated;
-(BOOL)shouldRun;
-(id)criteria;
-(id)initWithSession:(id)arg0 profile:(id)arg1 userInitiated:(BOOL)arg2 delay:(BOOL)arg3 ;
-(void)run;


@end


#endif