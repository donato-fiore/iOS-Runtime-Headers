// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3PROTOSYNCIMPORTOPERATION_H
#define ML3PROTOSYNCIMPORTOPERATION_H

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "ML3ImportOperation.h"
#import "ML3DatabaseConnection.h"

@interface ML3ProtoSyncImportOperation : ML3ImportOperation {
    unsigned int _totalSyncPackageCount;
    unsigned int _syncPackageNum;
    BOOL _syncSessionStarted;
    int _syncType;
    ML3DatabaseConnection *_connection;
    BOOL _isServerImport;
    NSInteger _readSourceState;
    BOOL _isReadSourceCancelled;
    BOOL _importFinished;
    NSMutableSet *_syncIdsToUnlink;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_readSource;
}




-(BOOL)_performImportWithTransaction:(id)arg0 ;
-(BOOL)_processMediaItemOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processPlaylistOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processSyncError:(id)arg0 ;
-(BOOL)_processSyncHeader:(id)arg0 ;
-(BOOL)_processSyncOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processSyncPackage:(id)arg0 withImportSession:(*void)arg1 ;
-(NSUInteger)importSource;
-(id)initWithDatabaseImport:(id)arg0 ;
-(void)_unlinkUnavailableMediaItems;
-(void)cancel;
-(void)main;


@end


#endif