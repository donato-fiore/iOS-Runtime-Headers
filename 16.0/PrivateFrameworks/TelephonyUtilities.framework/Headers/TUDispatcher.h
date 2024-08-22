// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUDISPATCHER_H
#define TUDISPATCHER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUDispatcher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


+(id)dispatcherWithIdentifier:(id)arg0 ;
+(id)dispatcherWithQueue:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)qosUserInteractiveDispatchBlockForBlock:(SEL)arg0 ;
-(void)boostQualityOfService;
-(void)dispatchAsynchronousBlock:(id)arg0 ;
-(void)dispatchSynchronousBlock:(id)arg0 ;


@end


#endif