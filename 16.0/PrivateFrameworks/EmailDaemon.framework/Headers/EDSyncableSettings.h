// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSYNCABLESETTINGS_H
#define EDSYNCABLESETTINGS_H

@class EFCancelationToken, NSUserDefaults, NSUbiquitousKeyValueStore, EFLocked;
@protocol EFAssertableScheduler;

#import <Foundation/Foundation.h>


@interface EDSyncableSettings : NSObject {
    EFCancelationToken *_cancelable;
    id<EFAssertableScheduler> *_scheduler;
    NSUserDefaults *_defaults;
    NSUbiquitousKeyValueStore *_store;
    EFLocked *_changeActionsByKey;
}


@property (copy, nonatomic) id *proxyChangeHandler; // ivar: _proxyChangeHandler


-(id)init;
-(id)initWithDefaults:(id)arg0 store:(id)arg1 ;
-(id)observeChangesForKey:(id)arg0 cloudKey:(id)arg1 conflictResolver:(id)arg2 ;
-(void)_storeChangedExternally:(id)arg0 ;
-(void)beginSyncing;
-(void)dealloc;


@end


#endif