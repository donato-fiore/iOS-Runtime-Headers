// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTTASKGROUP_H
#define MTTASKGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MTTaskGroup : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) NSArray *tasks; // ivar: _tasks


+(id)taskGroupWithTasks:(id)arg0 completionBlock:(id)arg1 ;
-(id)description;


@end


#endif