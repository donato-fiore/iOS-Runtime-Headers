// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSSESSIONREMOTEOBSERVER_H
#define CPSSESSIONREMOTEOBSERVER_H

@class NSString;
@protocol CPSSessionObserving, NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface CPSSessionRemoteObserver : NSObject <CPSSessionObserving>

 {
    id<NSXPCProxyCreating> *_xpcProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)observerWithXPCProxy:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithXPCProxy:(id)arg0 ;


@end


#endif