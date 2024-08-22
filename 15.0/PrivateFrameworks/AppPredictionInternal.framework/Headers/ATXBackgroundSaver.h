// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXBACKGROUNDSAVER_H
#define ATXBACKGROUNDSAVER_H

@class _PASLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXBackgroundSaver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_block;
    _PASLock *_lock;
}




-(id)init;
-(id)initWithQueue:(id)arg0 block:(id)arg1 ;
-(void)_cancelSaveTimer;
-(void)_cancelSaveTimerWithLockWitness:(id)arg0 ;
-(void)dealloc;
-(void)scheduleSave;
-(void)scheduleSaveImmediately;


@end


#endif