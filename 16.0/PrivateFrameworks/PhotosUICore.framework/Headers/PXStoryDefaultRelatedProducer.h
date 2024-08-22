// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYDEFAULTRELATEDPRODUCER_H
#define PXSTORYDEFAULTRELATEDPRODUCER_H

@class NSMutableArray;
@protocol PXStoryRelatedProducer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryDefaultRelatedProducer : NSObject <PXStoryRelatedProducer>



@property (readonly, nonatomic) NSMutableArray *activeRequests; // ivar: _activeRequests
@property (readonly, nonatomic) NSUInteger targetUpNextCount; // ivar: _targetUpNextCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_relatedResultFromUpNextResult:(id)arg0 error:(id)arg1 ;
+(id)_requestForConfiguration:(id)arg0 targetUpNextMemoryCount:(NSUInteger)arg1 musicCurationParameters:(id)arg2 error:(*id)arg3 ;
-(id)initWithTargetUpNextCount:(NSUInteger)arg0 ;
-(id)requestConfigurationsRelatedToConfiguration:(id)arg0 withOptions:(NSUInteger)arg1 musicCurationParameters:(id)arg2 resultHandler:(id)arg3 ;


@end


#endif