// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIUPDATETORSOMODELTASK_H
#define HMIUPDATETORSOMODELTASK_H

@class NSSet;


#import "HMIHomeTask.h"

@interface HMIUpdateTorsoModelTask : HMIHomeTask

@property (readonly) NSSet *torsoAnnotations; // ivar: _torsoAnnotations


+(id)logCategory;
-(id)initWithTaskID:(int)arg0 homeUUID:(id)arg1 torsoAnnotations:(id)arg2 ;
-(void)mainInsideAutoreleasePool;


@end


#endif