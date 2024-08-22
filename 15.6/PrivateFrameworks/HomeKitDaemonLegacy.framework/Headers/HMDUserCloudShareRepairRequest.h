// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERCLOUDSHAREREPAIRREQUEST_H
#define HMDUSERCLOUDSHAREREPAIRREQUEST_H

@class HMUserCloudShareRepairInfo;


#import "HMDUserCloudShareRequest.h"

@interface HMDUserCloudShareRepairRequest : HMDUserCloudShareRequest

@property (readonly) HMUserCloudShareRepairInfo *repairInfo; // ivar: _repairInfo


-(id)description;
-(id)initWithStartDate:(id)arg0 containerID:(id)arg1 home:(id)arg2 repairInfo:(id)arg3 ;


@end


#endif