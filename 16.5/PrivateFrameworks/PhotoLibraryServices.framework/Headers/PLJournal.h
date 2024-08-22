// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLJOURNAL_H
#define PLJOURNAL_H

@class NSFileHandle, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "PLJournalFile.h"

@interface PLJournal : NSObject {
    PLJournalFile *_snapshotJournal;
    PLJournalFile *_changeJournal;
    unsigned char _snapshotMode;
    NSFileHandle *_fileHandleForAppendingUpdates;
}


@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) PLJournalFile *changeJournal;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) Class payloadClass; // ivar: _payloadClass
@property (readonly, nonatomic) PLJournalFile *pendingChangeJournal; // ivar: _pendingChangeJournal
@property (readonly, nonatomic) PLJournalFile *pendingSnapshotJournal; // ivar: _pendingSnapshotJournal
@property (readonly, nonatomic) PLJournalFile *prepareMarker; // ivar: _prepareMarker
@property (readonly, nonatomic) PLJournalFile *snapshotJournal;


+(BOOL)_finishFullSnapshotForBaseURL:(id)arg0 snapshotSucceeded:(BOOL)arg1 snapshotMode:(unsigned char)arg2 journals:(id)arg3 error:(*id)arg4 ;
// +(BOOL)_performSnapshotsForBaseURL:(id)arg0 snapshotMode:(unsigned char)arg1 payloadClasses:(id)arg2 snapshotJournalBlock:(id)arg3 createOnlyIfNecessary:(unk)arg4 error:(BOOL)arg5  ;
// +(BOOL)appendSnapshotsForBaseURL:(id)arg0 payloadClasses:(id)arg1 snapshotJournalBlock:(id)arg2 error:(unk)arg3  ;
+(BOOL)createSnapshotFinishMarkerForBaseURL:(id)arg0 error:(*id)arg1 ;
// +(BOOL)createSnapshotsForBaseURL:(id)arg0 payloadClasses:(id)arg1 snapshotJournalBlock:(id)arg2 createOnlyIfNecessary:(unk)arg3 error:(BOOL)arg4  ;
+(BOOL)recoverJournalsIfNecessaryForBaseURL:(id)arg0 payloadClasses:(id)arg1 error:(*id)arg2 ;
+(BOOL)removeSnapshotFinishMarkerForBaseURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)snapshotFinishMarkerExistsForBaseURL:(id)arg0 ;
+(id)journalURLForBaseURL:(id)arg0 payloadClassId:(id)arg1 journalType:(id)arg2 ;
+(id)metadataURLForBaseURL:(id)arg0 payloadClassId:(id)arg1 pending:(BOOL)arg2 ;
+(id)snapshotFinishMarkerURLForBaseURL:(id)arg0 ;
-(BOOL)_finishSnapshotWithMode:(unsigned char)arg0 snapshotSuccess:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_isPendingJournalAuthoritative;
// -(BOOL)_performSnapshotWithMode:(unsigned char)arg0 usingNextEntryBlock:(id)arg1 createOnlyIfNecessary:(unk)arg2 error:(BOOL)arg3  ;
-(BOOL)_prepareForSnapshotWithMode:(unsigned char)arg0 error:(*id)arg1 ;
-(BOOL)_recoverJournalWithError:(*id)arg0 ;
-(BOOL)_removeMetadataPending:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_replaceMetadataWithPendingMetadataError:(*id)arg0 ;
-(BOOL)_updateMetadataWithMetadata:(id)arg0 replace:(BOOL)arg1 pending:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)appendChangeEntries:(id)arg0 error:(*id)arg1 ;
-(BOOL)appendChangeEntryAfterPrepare:(id)arg0 error:(*id)arg1 ;
// -(BOOL)appendSnapshotUsingNextEntryBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)appendUpdatePayloadWithPayloadID:(id)arg0 rawAttributes:(id)arg1 error:(*id)arg2 ;
-(BOOL)coalesceChangesToSnapshotWithError:(*id)arg0 ;
// -(BOOL)createSnapshotUsingNextPayloadBlock:(id)arg0 createOnlyIfNecessary:(unk)arg1 error:(BOOL)arg2  ;
// -(BOOL)enumerateEntriesUsingBlock:(id)arg0 decodePayload:(unk)arg1 error:(BOOL)arg2  ;
// -(BOOL)enumeratePayloadsUsingBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)finishAppendChangeEntriesWithError:(*id)arg0 ;
-(BOOL)finishCreateSnapshot:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)prepareForAppendChangeEntriesWithError:(*id)arg0 ;
-(BOOL)prepareForCreateSnapshotWithError:(*id)arg0 ;
-(BOOL)removeJournalFilesWithError:(*id)arg0 ;
-(BOOL)snapshotJournalFileSize:(*NSUInteger)arg0 changeJournalFileSize:(*NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)countOfInsertEntriesWithError:(*id)arg0 ;
-(NSUInteger)currentPayloadVersionWithError:(*id)arg0 ;
-(id)_payloadTooNewErrorWithPayloadVersion:(NSInteger)arg0 ;
-(id)_readMetadataPending:(BOOL)arg0 ;
-(id)initWithBaseURL:(id)arg0 payloadClass:(Class)arg1 ;
-(id)metadataURLPending:(BOOL)arg0 ;
-(void)removeMetadata;


@end


#endif