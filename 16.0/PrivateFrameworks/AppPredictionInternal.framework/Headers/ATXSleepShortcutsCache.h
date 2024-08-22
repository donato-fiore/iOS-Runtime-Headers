// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSLEEPSHORTCUTSCACHE_H
#define ATXSLEEPSHORTCUTSCACHE_H

@class ATXGenericFileBasedCache;

#import <Foundation/Foundation.h>


@interface ATXSleepShortcutsCache : NSObject {
    ATXGenericFileBasedCache *_cache;
}




-(id)_cache;
-(void)_fetchAndCacheSleepShortcutsWithTransaction:(id)arg0 completion:(id)arg1 ;
-(void)cacheSleepShortcutsIfNecessary;
-(void)fetchSleepShortcutsWithCompletion:(id)arg0 ;


@end


#endif