// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFIRSTUNLOCKQUEUE_H
#define NTKFIRSTUNLOCKQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKFirstUnlockQueue : NSObject {
    char * _name;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isSuspended;
    BOOL _isBeforeFirstUnlock;
    os_unfair_lock_s _suspendLock;
    int _notifyToken;
}




-(id)initWithName:(char *)arg0 ;
-(void)_firstUnlock;
-(void)_suspendThreadBeforeFirstUnlock;
-(void)dealloc;
-(void)dispatch:(id)arg0 ;


@end


#endif