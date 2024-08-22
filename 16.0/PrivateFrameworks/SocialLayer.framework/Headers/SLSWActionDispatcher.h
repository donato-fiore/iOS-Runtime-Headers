// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLSWACTIONDISPATCHER_H
#define SLSWACTIONDISPATCHER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SLSWActionDispatcher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)bundleIDForProcess:(id)arg0 error:(*id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_sendAction:(id)arg0 toProcess:(id)arg1 completion:(id)arg2 ;
-(void)dispatchAction:(id)arg0 toProcess:(id)arg1 completion:(id)arg2 ;
-(void)dispatchAction:(id)arg0 withAssertionForProcess:(id)arg1 completion:(id)arg2 ;


@end


#endif