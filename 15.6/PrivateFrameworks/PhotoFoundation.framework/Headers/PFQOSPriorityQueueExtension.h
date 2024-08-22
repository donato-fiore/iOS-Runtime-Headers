// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFQOSPRIORITYQUEUEEXTENSION_H
#define PFQOSPRIORITYQUEUEEXTENSION_H

@protocol PFQOSPriorityEnqueuing;


#import "PFPriorityQueueExtension.h"

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>





-(id)initWithConcurrentScheduling:(BOOL)arg0 ;
-(void)enqueueWithCurrentQOSPriority:(id)arg0 ;
-(void)enqueueWithQOSPriority:(unsigned int)arg0 block:(id)arg1 ;


@end


#endif