// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSEARCHABLEINDEXMANAGER_H
#define EDSEARCHABLEINDEXMANAGER_H

@class NSString;
@protocol EFLoggable, EDMessageChangeHookResponder;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDSearchableIndex.h"
#import "EDSearchableIndexPersistence.h"
#import "EDSearchableIndexScheduler.h"

@interface EDSearchableIndexManager : NSObject <EFLoggable, EDMessageChangeHookResponder>



@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDSearchableIndex *index;
@property (nonatomic) BOOL needsReindex; // ivar: _needsReindex
@property (nonatomic) BOOL needsToScheduleRecurringActivity; // ivar: _needsToScheduleRecurringActivity
@property (readonly, nonatomic) EDSearchableIndexPersistence *persistence;
@property (readonly, nonatomic) EDSearchableIndexScheduler *scheduler;
@property (readonly) Class superclass;


+(id)log;
-(id)initWithDatabase:(id)arg0 messagePersistence:(id)arg1 richLinkPersistence:(id)arg2 hookResponder:(id)arg3 ;
-(void)_removeAllItemsFromIndexAndWait:(BOOL)arg0 options:(NSUInteger)arg1 ;
-(void)_removeItemsForPersistedMessages:(id)arg0 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg0 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg0 budgetConfiguration:(id)arg1 ;
-(void)persistenceDidAddDataDetectionResults:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidAddLabels:(id)arg0 removeLabels:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidChangeFlags:(id)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidDeleteMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidUpdateData:(id)arg0 message:(id)arg1 ;
-(void)removeAllItemsFromIndexAndWait:(BOOL)arg0 skipInvalidation:(BOOL)arg1 ;
-(void)scheduleRecurringActivity;
-(void)test_tearDown;


@end


#endif