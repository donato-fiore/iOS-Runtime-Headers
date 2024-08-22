// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTIMEBALLCACHE_H
#define MNTIMEBALLCACHE_H

@class GEOSQLiteDB;

#import <Foundation/Foundation.h>


@interface MNTimeballCache : NSObject {
    GEOSQLiteDB *_db;
}




-(BOOL)_setupDBWithDrop:(BOOL)arg0 ;
-(id)_errorBlockWithCompletionBlock:(SEL)arg0 ;
-(id)initWithDBFilePath:(id)arg0 ;
-(void)_handleResult:(BOOL)arg0 forStatement:(id)arg1 error:(id)arg2 completionBlock:(id)arg3 ;
-(void)clearCache:(id)arg0 ;
-(void)dealloc;
-(void)deleteRouteUpdateForDestination:(id)arg0 completionBlock:(id)arg1 ;
// -(void)getEntriesScheduledForRefreshAfter:(id)arg0 entryBlock:(id)arg1 completionBlock:(unk)arg2  ;
// -(void)getEntriesUpdatedAfter:(id)arg0 entryBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(void)getEntryForDestination:(id)arg0 completionBlock:(id)arg1 ;
-(void)pruneCache:(id)arg0 ;
-(void)setNextRefreshDate:(id)arg0 forDestination:(id)arg1 completionBlock:(id)arg2 ;
-(void)setRouteUpdate:(id)arg0 forDestination:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif