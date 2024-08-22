// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVOICESHORTCUTCACHE_H
#define WFVOICESHORTCUTCACHE_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface WFVoiceShortcutCache : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (copy, nonatomic) NSArray *voiceShortcuts; // ivar: _voiceShortcuts
@property (readonly, copy, nonatomic) NSMutableArray *waitingFetchRequests; // ivar: _waitingFetchRequests


+(BOOL)shouldCacheForCurrentProcess;
-(id)init;
-(void)clear;
-(void)databaseDidChange;
-(void)dealloc;
-(void)getCachedVoiceShortcuts:(id)arg0 ;
-(void)registerForDatabaseNotifications;
-(void)setCachedVoiceShortcuts:(id)arg0 ;
-(void)unregisterFromDatabaseNotifications;


@end


#endif