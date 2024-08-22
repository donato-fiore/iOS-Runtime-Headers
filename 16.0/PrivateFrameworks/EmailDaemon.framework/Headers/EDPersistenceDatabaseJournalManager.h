// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPERSISTENCEDATABASEJOURNALMANAGER_H
#define EDPERSISTENCEDATABASEJOURNALMANAGER_H

@class NSMutableIndexSet, NSMapTable, NSString;
@protocol EFLoggable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabaseJournal.h"

@interface EDPersistenceDatabaseJournalManager : NSObject <EFLoggable>

 {
    os_unfair_lock_s _journalLock;
    EDPersistenceDatabaseJournal *_currentJournal;
    BOOL _shouldDeleteCurrentJournal;
    NSMutableIndexSet *_journalNumbers;
    NSMutableIndexSet *_pendingDeleteJournalNumbers;
    NSMapTable *_journalsByIndexes;
}


@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *checkExistingQueue; // ivar: _checkExistingQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *deleteQueue; // ivar: _deleteQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *journalDirectoryPath; // ivar: _journalDirectoryPath
@property (readonly, nonatomic) EDPersistenceDatabaseJournal *oldestJournal;
@property (readonly) Class superclass;


+(id)log;
-(id)_getJournalWithBlock:(id)arg0 ;
-(id)currentJournalCreateIfNeeded:(BOOL)arg0 ;
-(id)initWithBasePath:(id)arg0 ;
-(void)_deleteJournalNumber:(NSUInteger)arg0 ;
-(void)_journalNoLongerReferenced:(id)arg0 ;
-(void)mergedJournal:(id)arg0 ;
-(void)waitForDeletes;


@end


#endif