// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPCFUSERNOTIFICATION_H
#define HDSPCFUSERNOTIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDSPCFUserNotification : NSObject

@property (readonly, copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) *__CFUserNotification notification; // ivar: _notification


+(id)userNotificationWithIdentifier:(id)arg0 notification:(struct __CFUserNotification *)arg1 actionHandler:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 notification:(struct __CFUserNotification *)arg1 actionHandler:(id)arg2 ;


@end


#endif