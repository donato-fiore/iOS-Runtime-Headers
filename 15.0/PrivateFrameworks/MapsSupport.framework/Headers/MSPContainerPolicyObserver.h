// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPCONTAINERPOLICYOBSERVER_H
#define MSPCONTAINERPOLICYOBSERVER_H

@class NSString;
@protocol MSPContainerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSPContainerPolicyObserver : NSObject <MSPContainerObserver>

 {
    NSUInteger _lastKnownItemCount;
    NSUInteger _minimumDeletesForDataLoss;
    CGFloat _minimumDeleteRatioForDataLoss;
    NSObject<OS_dispatch_queue> *_observerQueue;
}


@property (nonatomic) NSUInteger dataLossPolicyOffenses; // ivar: _dataLossPolicyOffenses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL keepMetrics; // ivar: _keepMetrics
@property (readonly) Class superclass;


-(id)init;
-(id)observationQueueForContainer:(id)arg0 ;
-(void)container:(id)arg0 didEditWithNewContents:(id)arg1 orderedEdits:(id)arg2 cause:(NSInteger)arg3 context:(id)arg4 ;
-(void)containerWillEraseContents:(id)arg0 ;
-(void)setContainerItemCount:(NSUInteger)arg0 ;


@end


#endif