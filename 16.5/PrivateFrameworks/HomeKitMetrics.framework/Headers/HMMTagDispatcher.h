// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTAGDISPATCHER_H
#define HMMTAGDISPATCHER_H

@class NSPointerArray, NSString, NSMutableDictionary;
@protocol HMMTagDispatching, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMMTagDispatcher : NSObject <HMMTagDispatching>



@property (retain, nonatomic) NSPointerArray *allTagProcessors; // ivar: _allTagProcessors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger nextStaleCheckTime; // ivar: _nextStaleCheckTime
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *tagObservers; // ivar: _tagObservers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithWorkQueue:(id)arg0 ;
-(id)initWithWorkQueue:(id)arg0 startTime:(NSUInteger)arg1 ;
-(void)registerTagObserver:(id)arg0 forTags:(id)arg1 ;
-(void)submitTaggedEvent:(id)arg0 processorList:(id)arg1 ;
-(void)unregisterTagObserver:(id)arg0 forTags:(id)arg1 ;


@end


#endif