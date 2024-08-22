// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKNOTIFICATIONOBSERVER_H
#define VKNOTIFICATIONOBSERVER_H

@protocol VKNotificationObserverDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface VKNotificationObserver : NSObject {
    id<VKNotificationObserverDelegate> *_target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}




-(id)initWithTarget:(id)arg0 taskContext:(*void)arg1 ;
-(void)_receivedFlushTileCachesNotification;
-(void)_receivedLocalChangedNotification;
-(void)_receivedMemoryNotification;
-(void)dealloc;


@end


#endif