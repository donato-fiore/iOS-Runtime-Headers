// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIREMOVEPERSONSMODELTASK_H
#define HMIREMOVEPERSONSMODELTASK_H

@class NSUUID;


#import "HMIHomeTask.h"

@interface HMIRemovePersonsModelTask : HMIHomeTask

@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID


+(id)logCategory;
-(id)initWithTaskID:(int)arg0 homeUUID:(id)arg1 sourceUUID:(id)arg2 ;
-(id)logIdentifier;
-(void)mainInsideAutoreleasePool;


@end


#endif