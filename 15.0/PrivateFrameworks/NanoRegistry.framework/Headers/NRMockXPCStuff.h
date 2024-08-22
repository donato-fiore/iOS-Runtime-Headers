// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRMOCKXPCSTUFF_H
#define NRMOCKXPCSTUFF_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NRMockXPCStuff : NSObject {
    NSMutableDictionary *_mockListeners;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(id)init;


@end


#endif