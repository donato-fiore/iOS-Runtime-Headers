// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPAPPLIANCECONTROLCLUSTERSIGNALSTATENOTIFICATIONPARAMS_H
#define CHIPAPPLIANCECONTROLCLUSTERSIGNALSTATENOTIFICATIONPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPApplianceControlClusterSignalStateNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *applianceStatus; // ivar: _applianceStatus
@property (retain, nonatomic) NSNumber *applianceStatus2; // ivar: _applianceStatus2
@property (retain, nonatomic) NSNumber *remoteEnableFlagsAndDeviceStatus2; // ivar: _remoteEnableFlagsAndDeviceStatus2


-(id)init;


@end


#endif