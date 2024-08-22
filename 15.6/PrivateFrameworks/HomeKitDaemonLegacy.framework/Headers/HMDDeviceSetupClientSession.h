// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDEVICESETUPCLIENTSESSION_H
#define HMDDEVICESETUPCLIENTSESSION_H

@class NSString;
@protocol HMFLogging, OS_os_log;


#import "HMDDeviceSetupSessionInternal.h"

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging>

 {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSupported;
+(NSInteger)role;
+(id)allowedClasses;
+(id)logCategory;
-(BOOL)processSessionData:(id)arg0 fromBundle:(id)arg1 outAccessoryUUID:(*id)arg2 error:(*id)arg3 ;
-(id)initWithHomeManager:(id)arg0 ;


@end


#endif