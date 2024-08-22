// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASEJOURNAL_H
#define HDDATABASEJOURNAL_H

@class NSProgress, NSString, NSURL, NSLock, NSNumber;
@protocol HDJournalChapter, HDDatabaseJournalDelegate;

#import <Foundation/Foundation.h>

#import "HDDatabaseTransaction.h"

@interface HDDatabaseJournal : NSObject {
    os_unfair_lock_s _progressLock;
    NSProgress *_progressLock_observableProgress;
    NSProgress *_progressLock_internalProgress;
    os_unfair_lock_s _activeTransactionLock;
    os_unfair_lock_s _interruptionLock;
    HDDatabaseTransaction *_activeMergeTransaction;
    NSInteger _journalStatus;
    BOOL _interrupted;
    BOOL _invalidated;
    NSString *_lastInsertedEntryClassName;
    NSInteger _serializedDataEnumerationThreshold;
    NSURL *_URL;
    NSLock *_journalLock;
    id<HDJournalChapter> *_currentJournalChapter;
}


@property (weak, nonatomic) NSObject<HDDatabaseJournalDelegate> *delegate; // ivar: _delegate
@property (copy) NSNumber *maximumJournalBytes; // ivar: _maximumJournalBytes
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)addJournalEntries:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(BOOL)mergeWithProfile:(id)arg0 ;
-(BOOL)performMergeTransactionWithProfile:(id)arg0 transactionContext:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
-(NSInteger)journalChapterCount;
-(NSUInteger)sizeOnDisk;
-(id)_unitTesting_directoryURL;
-(id)description;
-(id)init;
-(id)initWithType:(NSInteger)arg0 path:(id)arg1 ;
-(id)progressForJournalMerge;
-(void)_unitTesting_closeCurrentJournalChapter;
-(void)_unitTesting_setJournalStatusRequiresMerge;
-(void)_unitTesting_setSerializedDataEnumerationThreshold:(NSInteger)arg0 ;
-(void)dealloc;
-(void)interruptJournalMerge;
-(void)invalidate;
-(void)lock;
-(void)resumeJournalMerge;
-(void)unlock;


@end


#endif