// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWRUNQUEUE_H
#define WFWORKFLOWRUNQUEUE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFWorkflowRunQueue : NSObject

@property (readonly, nonatomic) NSMutableDictionary *queueTable; // ivar: _queueTable


-(id)description;
-(id)init;
-(id)popRequestFromQueueWithType:(NSUInteger)arg0 identifier:(id)arg1 ;
-(id)queueForDescriptor:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(void)queueRequest:(id)arg0 inQueue:(id)arg1 ;


@end


#endif