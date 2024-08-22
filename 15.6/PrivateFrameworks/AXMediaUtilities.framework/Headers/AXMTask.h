// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMTASK_H
#define AXMTASK_H


#import <Foundation/Foundation.h>


@interface AXMTask : NSObject

@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (copy, nonatomic) id *taskCompleteBlock; // ivar: _taskCompleteBlock


-(void)markAsComplete:(BOOL)arg0 ;


@end


#endif