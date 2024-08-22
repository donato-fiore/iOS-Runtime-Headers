// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOKMATCHINGNOTIFICATION_H
#define IOKMATCHINGNOTIFICATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IOKIterator.h"
#import "IOKMatchingNotificationRef.h"

@interface IOKMatchingNotification : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) IOKIterator *iterator; // ivar: _iterator
@property (readonly, nonatomic) IOKMatchingNotificationRef *notificationRef; // ivar: _notificationRef
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)dealloc;
-(void)primeNotification;


@end


#endif