// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOKINTERESTNOTIFICATION_H
#define IOKINTERESTNOTIFICATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IOKInterestNotificationRef.h"

@interface IOKInterestNotification : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) IOKInterestNotificationRef *notificationRef; // ivar: _notificationRef
@property (nonatomic) unsigned int object; // ivar: _object
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)dealloc;


@end


#endif