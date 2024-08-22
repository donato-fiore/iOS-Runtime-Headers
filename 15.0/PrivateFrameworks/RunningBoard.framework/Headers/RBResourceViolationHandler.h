// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBRESOURCEVIOLATIONHANDLER_H
#define RBRESOURCEVIOLATIONHANDLER_H

@protocol RBAssertionManaging, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface RBResourceViolationHandler : NSObject {
    id<RBAssertionManaging> *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
}






@end


#endif