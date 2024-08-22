// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATEAPPLYTASK_H
#define HMDACCESSORYFIRMWAREUPDATEAPPLYTASK_H

@class NSString;
@protocol HMFLogging, HMDAccessoryFirmwareUpdatePolicy;


#import "HMDAccessoryFirmwareUpdateTask.h"

@interface HMDAccessoryFirmwareUpdateApplyTask : HMDAccessoryFirmwareUpdateTask <HMFLogging>

 {
    BOOL _userInitiated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) NSObject<HMDAccessoryFirmwareUpdatePolicy> *policy; // ivar: _policy
@property (readonly) Class superclass;


-(BOOL)_isApplyAllowedByPolicy;
-(BOOL)isUserInitiated;
-(BOOL)shouldRun;
-(id)criteria;
-(id)initWithSession:(id)arg0 profile:(id)arg1 policy:(id)arg2 userInitiated:(BOOL)arg3 delay:(BOOL)arg4 ;
-(void)run;


@end


#endif