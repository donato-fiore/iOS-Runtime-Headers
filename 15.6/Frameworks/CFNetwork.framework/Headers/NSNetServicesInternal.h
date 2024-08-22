// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSNETSERVICESINTERNAL_H
#define NSNETSERVICESINTERNAL_H

@class NSMutableArray;
@protocol OS_tcp_listener;

#import <Foundation/Foundation.h>


@interface NSNetServicesInternal : NSObject {
    NSMutableArray *_monitors;
    NSObject<OS_tcp_listener> *_listener;
    *__CFRunLoop _scheduledRunLoop;
    *__CFString _scheduledMode;
}




-(void)dealloc;


@end


#endif