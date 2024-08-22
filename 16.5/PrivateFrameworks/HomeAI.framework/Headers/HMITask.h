// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMITASK_H
#define HMITASK_H

@class HMFOperation, NSDictionary;



@interface HMITask : HMFOperation

@property (copy) id *progressBlock; // ivar: _progressBlock
@property (readonly) NSDictionary *results;
@property (readonly) int taskID; // ivar: _taskID


-(id)initWithTaskID:(int)arg0 ;
-(id)initWithTaskID:(int)arg0 timeout:(CGFloat)arg1 ;
-(void)main;
-(void)mainInsideAutoreleasePool;


@end


#endif