// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIEMPTYTASK_H
#define HMIEMPTYTASK_H



#import "HMITask.h"

@interface HMIEmptyTask : HMITask

@property (readonly) CGFloat duration; // ivar: _duration


-(id)initWithTaskID:(int)arg0 duration:(CGFloat)arg1 ;
-(void)mainInsideAutoreleasePool;


@end


#endif