// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDVISIBLEMESSAGESRELOADREGISTRY_H
#define EDVISIBLEMESSAGESRELOADREGISTRY_H

@class NSHashTable, EFDebouncer;
@protocol EFAssertableScheduler;

#import <Foundation/Foundation.h>


@interface EDVisibleMessagesReloadRegistry : NSObject {
    os_unfair_lock_s _lock;
    NSHashTable *_observers;
    id<EFAssertableScheduler> *_observationScheduler;
    EFDebouncer *_reloadDebouncer;
    int _notifyToken;
}




+(id)log;
-(id)addObserver:(id)arg0 ;
-(id)init;
-(void)_reloadVisibleMessages;
-(void)_scheduleVisibleMessageReload;
-(void)dealloc;


@end


#endif