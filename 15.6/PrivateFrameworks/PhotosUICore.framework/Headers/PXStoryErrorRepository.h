// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYERRORREPOSITORY_H
#define PXSTORYERRORREPOSITORY_H

@class NSMutableDictionary, NSMutableArray, NSString, NSArray, NSDictionary;
@protocol PXStoryErrorReporter, PXStoryQueueParticipant, OS_dispatch_queue;


#import "PXObservable.h"

@interface PXStoryErrorRepository : PXObservable <PXStoryErrorReporter, PXStoryQueueParticipant>

 {
    NSMutableDictionary *_errorsByComponent;
    NSMutableArray *_errors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSDictionary *errorsByComponent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;


+(id)analyticsNameForComponent:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)setError:(id)arg0 forComponent:(id)arg1 ;


@end


#endif