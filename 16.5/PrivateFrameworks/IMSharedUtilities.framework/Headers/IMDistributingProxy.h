// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDISTRIBUTINGPROXY_H
#define IMDISTRIBUTINGPROXY_H

@class NSProxy, NSArray;
@protocol OS_dispatch_queue;



@interface IMDistributingProxy : NSProxy

@property (readonly, nonatomic, getter=isAsynchronous) BOOL asynchronous; // ivar: _asynchronous
@property (readonly, copy, nonatomic) id *filterBlock; // ivar: _filterBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (readonly, copy, nonatomic) NSArray *targets; // ivar: _targets


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithTargets:(id)arg0 ;
-(id)initWithTargets:(id)arg0 targetQueue:(id)arg1 asynchronous:(BOOL)arg2 filterBlock:(id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif