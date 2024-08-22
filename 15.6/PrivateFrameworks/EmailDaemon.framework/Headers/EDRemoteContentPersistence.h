// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDREMOTECONTENTPERSISTENCE_H
#define EDREMOTECONTENTPERSISTENCE_H

@class NSBackgroundActivityScheduler, NSString;
@protocol EFContentProtectionObserver, EDPersistenceDatabaseSchemaProvider, EDPersistenceDatabaseProtectedSchemaProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"

@interface EDRemoteContentPersistence : NSObject <EFContentProtectionObserver, EDPersistenceDatabaseSchemaProvider, EDPersistenceDatabaseProtectedSchemaProvider>

 {
    NSInteger _currentRowCount;
    NSInteger _protectedRowCount;
}


@property (readonly, nonatomic) NSBackgroundActivityScheduler *analyticsScheduler; // ivar: _analyticsScheduler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // ivar: _contentProtectionQueue
@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumRemoteContentLinks; // ivar: _maximumRemoteContentLinks
@property (nonatomic) NSUInteger pruneThreshold; // ivar: _pruneThreshold
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useAdditionalTable; // ivar: _useAdditionalTable


+(id)_remoteContentLinksTableSchemaWithName:(id)arg0 ;
+(id)protectedTablesAndForeignKeysToResolve:(*id)arg0 ;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(BOOL)_addRemoteContentLinks:(id)arg0 withDate:(id)arg1 toTable:(id)arg2 withConnection:(id)arg3 newLinks:(*id)arg4 ;
-(BOOL)addRemoteContentLinks:(id)arg0 newLinks:(*id)arg1 ;
-(BOOL)pruneAllRemoteContentLinksWithMinimumCount:(NSUInteger)arg0 ;
-(BOOL)updateRequestCountForRemoteContentLinks:(id)arg0 updateLastSeen:(BOOL)arg1 ;
-(NSInteger)_rowCountForTable:(id)arg0 ;
-(NSUInteger)_currentRowCount;
-(NSUInteger)_protectedRowCount;
-(NSUInteger)countOfLinksLastSeenSince:(id)arg0 ;
-(NSUInteger)countOfUnrequestedLinks;
-(id)_getRemoteContentURLInfoForTable:(id)arg0 orderedBy:(NSInteger)arg1 inReverseOrder:(BOOL)arg2 limit:(NSInteger)arg3 connection:(id)arg4 error:(*id)arg5 ;
-(id)getRemoteContentURLInfoOrderedBy:(NSInteger)arg0 inReverseOrder:(BOOL)arg1 limit:(NSInteger)arg2 error:(*id)arg3 ;
-(id)initWithDatabase:(id)arg0 useAdditionalTable:(BOOL)arg1 ;
-(id)remoteContentLinksBelowCount:(NSUInteger)arg0 limit:(NSUInteger)arg1 ;
-(void)_decrementCurrentRowCountBy:(NSUInteger)arg0 ;
-(void)_decrementProtectedRowCountBy:(NSUInteger)arg0 ;
-(void)_incrementCurrentRowCountBy:(NSUInteger)arg0 ;
-(void)_incrementProtectedRowCountBy:(NSUInteger)arg0 ;
-(void)_initializeCurrentRowCount;
-(void)_initializeProtectedRowCount;
-(void)_refillFromAdditionalTable;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)dealloc;
-(void)test_tearDown;


@end


#endif