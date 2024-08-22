// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNOBSERVABLEEVENTDYNAMICQUEUEBUFFERINGSTRATEGY_H
#define _CNOBSERVABLEEVENTDYNAMICQUEUEBUFFERINGSTRATEGY_H

@class CNObservableEventBufferingStrategy;


#import "CNQueue.h"

@interface _CNObservableEventDynamicQueueBufferingStrategy : CNObservableEventBufferingStrategy

@property (readonly, nonatomic) CNQueue *queue; // ivar: _queue


-(BOOL)isSequenceTerminated;
-(id)allEvents;
-(id)initWithQueue:(id)arg0 ;
-(void)addEvent:(id)arg0 ;


@end


#endif