// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKNOTIFICATIONCONFLICTCACHE_H
#define CUIKNOTIFICATIONCONFLICTCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUIKNotificationConflictCache : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_fetchQueue;
}




+(id)sharedInstance;
-(BOOL)_updateNotification:(id)arg0 withCacheObject:(id)arg1 ;
-(id)conflictsForNotification:(id)arg0 ;
-(id)init;
-(void)updateConflictsForNotification:(id)arg0 synchronously:(BOOL)arg1 withCompletion:(id)arg2 ;


@end


#endif