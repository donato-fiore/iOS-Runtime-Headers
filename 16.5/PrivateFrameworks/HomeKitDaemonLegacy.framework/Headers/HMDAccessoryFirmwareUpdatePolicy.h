// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYFIRMWAREUPDATEPOLICY_H
#define HMDACCESSORYFIRMWAREUPDATEPOLICY_H

@class NSString;
@protocol HMDAccessoryFirmwareUpdatePolicy, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHAPAccessory.h"

@interface HMDAccessoryFirmwareUpdatePolicy : NSObject <HMDAccessoryFirmwareUpdatePolicy>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)evaluate;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 ;
-(id)logIdentifier;
-(void)configure;
-(void)evaluateAndNotify;
-(void)notify:(BOOL)arg0 ;


@end


#endif