// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BGTASKSCHEDULERPROXY_H
#define BGTASKSCHEDULERPROXY_H


#import <Foundation/Foundation.h>


@interface BGTaskSchedulerProxy : NSObject



+(id)shared;
-(BOOL)registerForTaskWithIdentifier:(id)arg0 launchHandler:(id)arg1 ;


@end


#endif