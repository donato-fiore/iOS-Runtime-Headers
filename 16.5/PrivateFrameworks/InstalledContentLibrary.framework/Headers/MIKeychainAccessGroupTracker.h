// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIKEYCHAINACCESSGROUPTRACKER_H
#define MIKEYCHAINACCESSGROUPTRACKER_H

@class NSCountedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MIKeychainAccessGroupTracker : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // ivar: _q
@property (retain, nonatomic) NSCountedSet *refs; // ivar: _refs


+(id)sharedTracker;
-(BOOL)_onQueue_addReferencesForBundle:(id)arg0 error:(*id)arg1 ;
-(BOOL)_onQueue_removeReferencesForBundle:(id)arg0 error:(*id)arg1 ;
-(BOOL)_onQueue_updateReferencesWithOldBundle:(id)arg0 newBundle:(id)arg1 error:(*id)arg2 ;
-(BOOL)_removeGroupsWithError:(id)arg0 error:(*id)arg1 ;
-(BOOL)addReferencesForBundle:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeReferencesForBundle:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateReferencesWithOldBundle:(id)arg0 newBundle:(id)arg1 error:(*id)arg2 ;
-(id)_keychainAccessGroupsForApp:(id)arg0 error:(*id)arg1 ;
-(id)_keychainAccessGroupsForBundle:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_onQueue_discoverReferences;
-(void)invalidateCache;
-(void)reconcile;


@end


#endif