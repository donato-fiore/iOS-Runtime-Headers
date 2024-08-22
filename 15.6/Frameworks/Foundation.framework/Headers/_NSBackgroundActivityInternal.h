// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSBACKGROUNDACTIVITYINTERNAL_H
#define _NSBACKGROUNDACTIVITYINTERNAL_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSBackgroundActivityInternal : NSObject {
    NSString *_identifier;
    CGFloat _interval;
    CGFloat _tolerance;
    CGFloat _delay;
    id *_activity;
    id *_checkInHandler;
    BOOL _repeats;
    BOOL _preregistered;
    BOOL _appRefresh;
    NSObject<OS_xpc_object> *_additionalProperties;
    NSInteger _qualityOfService;
    NSObject<OS_xpc_object> *_currentActivity;
}




-(id)init;
-(void)dealloc;


@end


#endif