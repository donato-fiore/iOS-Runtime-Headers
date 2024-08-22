// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAGGREGATETASK_H
#define _CNAGGREGATETASK_H

@class NSArray;


#import "CNTask.h"

@interface _CNAggregateTask : CNTask

@property (readonly, nonatomic) NSArray *tasks; // ivar: _tasks


-(BOOL)cancel;
-(id)description;
-(id)initWithName:(id)arg0 tasks:(id)arg1 ;
-(id)run:(*id)arg0 ;
-(id)runSubtask:(id)arg0 error:(*id)arg1 ;


@end


#endif