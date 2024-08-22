// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACUTILITYTOOLSERVER_H
#define CACUTILITYTOOLSERVER_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CACUtilityToolServer : NSObject {
    NSObject<OS_dispatch_queue> *_toolServerDispatchQueue;
    NSObject<OS_xpc_object> *_feedbackListener;
}




+(id)sharedInstance;
-(id)init;


@end


#endif