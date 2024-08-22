// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAPPLIANCECONTROLCLUSTERSIGNALSTATENOTIFICATIONPARAMS_H
#define MTRAPPLIANCECONTROLCLUSTERSIGNALSTATENOTIFICATIONPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRApplianceControlClusterSignalStateNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *applianceStatus; // ivar: _applianceStatus
@property (retain, nonatomic) NSNumber *applianceStatus2; // ivar: _applianceStatus2
@property (retain, nonatomic) NSNumber *remoteEnableFlagsAndDeviceStatus2; // ivar: _remoteEnableFlagsAndDeviceStatus2
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif