// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTCFUSERNOTIFICATION_H
#define MTCFUSERNOTIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MTOSTransaction.h"

@interface MTCFUserNotification : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) *__CFUserNotification notification; // ivar: _notification
@property (retain, nonatomic) MTOSTransaction *transaction; // ivar: _transaction




@end


#endif