// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIHOMETASK_H
#define HMIHOMETASK_H

@class NSUUID;


#import "HMITask.h"

@interface HMIHomeTask : HMITask

@property (readonly) NSUUID *homeUUID; // ivar: _homeUUID


-(id)initWithTaskID:(int)arg0 homeUUID:(id)arg1 timeout:(CGFloat)arg2 ;


@end


#endif