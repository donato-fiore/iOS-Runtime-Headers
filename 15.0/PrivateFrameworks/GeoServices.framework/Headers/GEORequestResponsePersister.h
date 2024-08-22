// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOREQUESTRESPONSEPERSISTER_H
#define GEOREQUESTRESPONSEPERSISTER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "GEOSQLiteDB.h"

@interface GEORequestResponsePersister : NSObject {
    GEOSQLiteDB *_db;
    NSObject<OS_dispatch_source> *_pruneTimer;
}




-(NSUInteger)getTotalSize:(*id)arg0 ;
-(id)enumerateAllEntriesWithBlock:(id)arg0 ;
-(id)enumerateEntriesInRange:(id)arg0 withBlock:(id)arg1 ;
-(id)enumerateEntriesOfType:(int)arg0 inRange:(id)arg1 withBlock:(id)arg2 ;
-(id)enumerateEntriesOfType:(int)arg0 withBlock:(id)arg1 ;
-(id)findRequest:(id)arg0 withBlock:(id)arg1 ;
-(id)findResponse:(id)arg0 withBlock:(id)arg1 ;
-(id)init;
-(unsigned int)_restoreOrphanedEntries:(*id)arg0 ;
-(unsigned int)restoreOrphanedEntries:(*id)arg0 ;
-(void)_persistEvent:(id)arg0 ;
-(void)_pruneDBToDefaultAge:(*id)arg0 ;
-(void)_pruneDBToDefaultSize:(*id)arg0 ;
-(void)_pruneDBToSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)_pruneEntriesOlderThan:(id)arg0 error:(*id)arg1 ;
-(void)_reschedulePruner;
-(void)_runAllPruners:(*id)arg0 ;
-(void)dealloc;
-(void)persistRequestTask:(id)arg0 url:(id)arg1 request:(id)arg2 ;
-(void)persistResponseTask:(id)arg0 error:(id)arg1 ;
-(void)persistResponseTask:(id)arg0 response:(id)arg1 ;
-(void)persistResponseTaskCanceled:(id)arg0 ;
-(void)pruneDBToDefaultAge:(*id)arg0 ;
-(void)pruneDBToDefaultSize:(*id)arg0 ;
-(void)pruneDBToSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)pruneEntriesOlderThan:(id)arg0 error:(*id)arg1 ;
-(void)runAllPruners:(*id)arg0 ;


@end


#endif