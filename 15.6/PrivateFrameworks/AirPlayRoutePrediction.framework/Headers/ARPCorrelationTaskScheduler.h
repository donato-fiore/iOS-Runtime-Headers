// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPCORRELATIONTASKSCHEDULER_H
#define ARPCORRELATIONTASKSCHEDULER_H

@class NSDate, BPSSink;
@protocol _DKKnowledgeQuerying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ARPCorrelationTaskScheduler : NSObject

@property (copy) NSDate *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BPSSink *sinkAccessories; // ivar: _sinkAccessories
@property (readonly, nonatomic) BPSSink *sinkMediaAccessories; // ivar: _sinkMediaAccessories
@property (readonly, nonatomic) BPSSink *sinkScenes; // ivar: _sinkScenes


-(id)initWithKnowledgeStore:(id)arg0 ;
-(void)_executeCorrelationTask;
-(void)_executeHomeControlMicrolocationCorrelationTask;
-(void)_executeHomeControlNextActionCorrelationTask;
-(void)dealloc;
-(void)executeCorrelationTask;
-(void)homeKitEventInserted;
-(void)microLocationEventInserted:(id)arg0 ;
-(void)nowPlayingEventInserted:(id)arg0 ;


@end


#endif