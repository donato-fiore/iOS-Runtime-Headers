// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBPROCESSMONITOROBSERVERCONNECTION_H
#define RBPROCESSMONITOROBSERVERCONNECTION_H

@class NSString;
@protocol RBProcessMonitorObserverConnection, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface RBProcessMonitorObserverConnection : NSObject <RBProcessMonitorObserverConnection>

 {
    NSObject<OS_xpc_object> *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)sendMessage:(id)arg0 replyQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif