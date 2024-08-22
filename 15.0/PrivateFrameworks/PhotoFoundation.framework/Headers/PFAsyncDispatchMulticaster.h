// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFASYNCDISPATCHMULTICASTER_H
#define PFASYNCDISPATCHMULTICASTER_H



#import "PFMulticaster.h"
#import "PFDispatchQueue.h"

@interface PFAsyncDispatchMulticaster : PFMulticaster {
    PFDispatchQueue *_sendQueue;
}




+(void)initialize;
-(id)_defaultDistributionQueue;
-(id)init;
-(void)_distributeAsyncDispatchSelector:(SEL)arg0 to:(id)arg1 distributionBlock:(id)arg2 ;
-(void)distributeSelector:(SEL)arg0 toReceivers:(id)arg1 distributionBlock:(id)arg2 ;
-(void)flushMessagesAndNotify:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif