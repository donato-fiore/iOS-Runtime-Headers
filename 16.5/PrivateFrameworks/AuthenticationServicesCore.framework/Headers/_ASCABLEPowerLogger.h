// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ASCABLEPOWERLOGGER_H
#define _ASCABLEPOWERLOGGER_H


#import <Foundation/Foundation.h>


@interface _ASCABLEPowerLogger : NSObject {
    os_unfair_lock_s _lock;
    BOOL _didSendStartedEvent;
    BOOL _didSendFinishedEvent;
}




-(id)init;
-(void)dealloc;
-(void)logAuthenticationFinishedEventIfNeeded;
-(void)logAuthenticationStartedEventIfNeeded;


@end


#endif