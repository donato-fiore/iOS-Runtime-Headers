// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSAMNOTIFICATIONINFO_H
#define MSAMNOTIFICATIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MSAlertManager.h"

@interface MSAMNotificationInfo : NSObject {
    *__CFUserNotification _userNotification;
    *__CFRunLoopSource _runLoopSource;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (weak, nonatomic) MSAlertManager *owner; // ivar: _owner
@property (retain, nonatomic) NSString *personID; // ivar: _personID
@property (nonatomic) *__CFRunLoopSource runLoopSource;
@property (nonatomic) *__CFUserNotification userNotification;


+(id)info;
-(void)dealloc;


@end


#endif