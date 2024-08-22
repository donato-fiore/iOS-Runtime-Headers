// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOUSBHOSTINTERESTNOTIFIER_H
#define IOUSBHOSTINTERESTNOTIFIER_H

@class NSRecursiveLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IOUSBHostInterestNotifier : NSObject

@property (nonatomic) *unk callback; // ivar: _callback
@property (nonatomic) BOOL destroyed; // ivar: _destroyed
@property (retain, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (nonatomic) unsigned int matchingIterator; // ivar: _matchingIterator
@property (nonatomic) *IONotificationPort notificationPortRef; // ivar: _notificationPortRef
@property (nonatomic) unsigned int notifier; // ivar: _notifier
@property (weak, nonatomic) NSObject *owner; // ivar: _owner
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) unsigned int service; // ivar: _service


-(id)initWithOwner:(id)arg0 callback:(*unk)arg1 ;
-(id)initWithOwner:(id)arg0 matchingDictionary:(id)arg1 callback:(*unk)arg2 ;
-(id)initWithOwner:(id)arg0 service:(unsigned int)arg1 callback:(*unk)arg2 ;
-(void)dealloc;
-(void)destroy;


@end


#endif