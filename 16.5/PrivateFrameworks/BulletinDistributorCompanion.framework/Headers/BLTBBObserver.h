// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTBBOBSERVER_H
#define BLTBBOBSERVER_H

@class BBObserver, NSLock, NSString;
@protocol BLTBBObserverDelegateDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BLTBBObserverDelegate.h"

@interface BLTBBObserver : NSObject <BLTBBObserverDelegateDelegate>

 {
    BBObserver *_actualObserver;
    NSLock *_actualObserverLock;
    BLTBBObserverDelegate *_delegateSurrogate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_name;
    NSUInteger _priority;
    BOOL _isGateway;
    NSUInteger _observerFeed;
    BOOL _hasFeed;
}




+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(id)surrogateGatewayWithQueue:(id)arg0 calloutQueue:(id)arg1 name:(id)arg2 priority:(NSUInteger)arg3 ;
+(id)surrogateWithQueue:(id)arg0 calloutQueue:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithQueue:(id)arg0 calloutQueue:(id)arg1 name:(id)arg2 priority:(NSUInteger)arg3 isGateway:(BOOL)arg4 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_reconnectObserver;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)noteServerConnectionStateChanged:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setObserverFeed:(NSUInteger)arg0 ;


@end


#endif