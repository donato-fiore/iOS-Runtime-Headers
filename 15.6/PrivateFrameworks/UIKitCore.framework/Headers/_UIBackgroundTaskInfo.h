// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBACKGROUNDTASKINFO_H
#define _UIBACKGROUNDTASKINFO_H

@class BKSProcessAssertion, NSString;

#import <Foundation/Foundation.h>


@interface _UIBackgroundTaskInfo : NSObject {
    NSUInteger _taskId;
    id *_expireHandler;
    BKSProcessAssertion *_processAssertion;
    NSString *_taskName;
    NSInteger _creationTime;
    BOOL _alreadyWarnedAboutExpiration;
}




+(id)backgroundTaskAssertionQueue;
-(id)description;
-(id)initWithProcessAssertion:(id)arg0 taskName:(id)arg1 expirationHandler:(id)arg2 ;
-(void)dealloc;
-(void)fireExpirationHandler;
-(void)invalidate;


@end


#endif