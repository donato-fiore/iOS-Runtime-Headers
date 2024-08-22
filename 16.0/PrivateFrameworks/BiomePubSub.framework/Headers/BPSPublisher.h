// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSPUBLISHER_H
#define BPSPUBLISHER_H

@class NSString;
@protocol BPSPublisher;

#import <Foundation/Foundation.h>


@interface BPSPublisher : NSObject <BPSPublisher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)bufferWithSize:(NSUInteger)arg0 prefetch:(NSUInteger)arg1 whenFull:(NSUInteger)arg2 ;
-(id)collect;
-(id)combineLatestwithOther:(id)arg0 ;
// -(id)connectableSinkWithCompletion:(id)arg0 shouldContinue:(unk)arg1  ;
// -(id)correlateWithCurrent:(id)arg0 comparator:(id)arg1 correlateHandler:(unk)arg2  ;
-(id)debounceFor:(CGFloat)arg0 getTimestamp:(id)arg1 ;
// -(id)drivableSinkWithBookmark:(id)arg0 completion:(id)arg1 shouldContinue:(unk)arg2  ;
-(id)filterWithIsIncluded:(id)arg0 ;
-(id)flatMapWithTransform:(id)arg0 ;
-(id)groupByKey:(id)arg0 ;
// -(id)handleEventsReceiveSubscription:(id)arg0 receiveOutput:(unk)arg1 receiveCompletion:(id)arg2 receiveCancel:(unk)arg3 receiveRequest:(id)arg4  ;
-(id)last;
-(id)mapWithTransform:(id)arg0 ;
-(id)mergeWithOther:(id)arg0 ;
-(id)mergeWithOthers:(id)arg0 ;
-(id)multicastCreateSubject:(id)arg0 ;
-(id)multicastSubject:(id)arg0 ;
-(id)orderedMergeWithOther:(id)arg0 comparator:(id)arg1 ;
-(id)orderedMergeWithOthers:(id)arg0 comparator:(id)arg1 ;
-(id)reduce:(id)arg0 ;
-(id)reduceWithInitial:(id)arg0 nextPartialResult:(id)arg1 ;
-(id)removeDuplicatesWithIsDuplicate:(id)arg0 ;
-(id)scanWithInitial:(id)arg0 nextPartialResult:(id)arg1 ;
-(id)sequenceWithSequence:(id)arg0 ;
// -(id)sinkWithBookmark:(id)arg0 completion:(id)arg1 receiveInput:(unk)arg2  ;
// -(id)sinkWithCompletion:(id)arg0 receiveInput:(unk)arg1  ;
// -(id)sinkWithCompletion:(id)arg0 shouldContinue:(unk)arg1  ;
-(id)throttleFor:(CGFloat)arg0 latest:(BOOL)arg1 getTimestamp:(id)arg2 ;
-(id)timerFor:(CGFloat)arg0 getTimestamp:(id)arg1 ;
// -(id)windowByKey:(id)arg0 assigner:(unk)arg1  ;
-(id)windowWithAssigner:(id)arg0 ;
-(id)zipWithOther:(id)arg0 ;
-(id)zipWithOthers:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif