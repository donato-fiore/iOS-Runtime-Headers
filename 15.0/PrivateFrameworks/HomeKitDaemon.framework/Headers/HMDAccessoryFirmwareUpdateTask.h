// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATETASK_H
#define HMDACCESSORYFIRMWAREUPDATETASK_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDAccessoryFirmwareUpdateTask, OS_xpc_object;


#import "HMDHAPAccessory.h"
#import "HMDAccessoryFirmwareUpdateProfile.h"
#import "HMDAccessoryFirmwareUpdateSession.h"

@interface HMDAccessoryFirmwareUpdateTask : HMFObject <HMFLogging, HMDAccessoryFirmwareUpdateTask>



@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSInteger accessoryActiveTransport;
@property (readonly) NSObject<OS_xpc_object> *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat initialDelay; // ivar: _initialDelay
@property (readonly, weak) HMDAccessoryFirmwareUpdateProfile *profile; // ivar: _profile
@property (readonly, weak) HMDAccessoryFirmwareUpdateSession *session; // ivar: _session
@property (readonly, nonatomic) BOOL shouldRun;
@property (readonly) BOOL shouldRunOnCurrentDevice;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUserInitiated) BOOL userInitiated;


+(id)logCategory;
-(id)initWithSession:(id)arg0 profile:(id)arg1 initialDelay:(CGFloat)arg2 ;
-(id)privateDescription;
-(void)run;


@end


#endif