// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVOPERATION_H
#define SSVOPERATION_H

@class NSOperation, NSMutableArray, NSError;
@protocol OS_dispatch_queue;



@interface SSVOperation : NSOperation {
    NSOperation *_childOperation;
    NSMutableArray *_childRequests;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL success; // ivar: _success


-(id)init;
-(void)addChildRequest:(id)arg0 ;
-(void)cancel;
-(void)dispatchAsync:(id)arg0 ;
-(void)dispatchSync:(id)arg0 ;
-(void)removeChildRequest:(id)arg0 ;
-(void)runChildOperation:(id)arg0 ;


@end


#endif