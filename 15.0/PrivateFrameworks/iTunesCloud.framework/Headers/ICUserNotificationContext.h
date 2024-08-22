// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICUSERNOTIFICATIONCONTEXT_H
#define ICUSERNOTIFICATIONCONTEXT_H


#import <Foundation/Foundation.h>


@interface ICUserNotificationContext : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) *__CFRunLoopSource runLoopSourceRef; // ivar: _runLoopSourceRef


-(void)clearRunLoop;


@end


#endif