// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUNETWORKREACHABILITY_H
#define SUNETWORKREACHABILITY_H

@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUNetworkReachability : NSObject {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)isAvailable;
-(id)init;


@end


#endif