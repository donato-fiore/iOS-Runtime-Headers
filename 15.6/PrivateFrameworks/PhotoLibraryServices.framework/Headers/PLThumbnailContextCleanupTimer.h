// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLTHUMBNAILCONTEXTCLEANUPTIMER_H
#define PLTHUMBNAILCONTEXTCLEANUPTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface PLThumbnailContextCleanupTimer : NSObject {
    id *_handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    os_unfair_lock_s _transactionLock;
    NSObject<OS_os_transaction> *_transaction;
}




-(id)initWithHandler:(id)arg0 ;
-(void)_timerFired;
-(void)activate;
-(void)invalidate;
-(void)startOrRestartTimer;


@end


#endif