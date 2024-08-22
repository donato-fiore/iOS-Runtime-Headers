// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCKABSTRACTSYNCCONTROLLER_H
#define IMDCKABSTRACTSYNCCONTROLLER_H

@protocol IMDCKAbstractSyncControllerDelegate;

#import <Foundation/Foundation.h>

#import "IMDCKSyncState.h"

@interface IMDCKAbstractSyncController : NSObject

@property (weak) NSObject<IMDCKAbstractSyncControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isSyncing; // ivar: _isSyncing
@property (nonatomic) NSUInteger recordsRead; // ivar: _recordsRead
@property (nonatomic) NSUInteger recordsWriteFailed; // ivar: _recordsWriteFailed
@property (nonatomic) NSUInteger recordsWritten; // ivar: _recordsWritten
@property (readonly, nonatomic) IMDCKSyncState *syncState;


-(BOOL)_fetchedAllChangesFromCloudKit;
-(NSInteger)syncControllerRecordType;
-(id)ckUtilities;
-(id)describeRecordCounts;
-(id)errorAnalyzer;
-(id)syncStateDebuggingInfo:(id)arg0 ;
-(void)addSyncDebuggingInfoToDictionary:(id)arg0 ;
-(void)clearLocalSyncState:(NSUInteger)arg0 ;
-(void)countRecordOnRead:(BOOL)arg0 didSucceed:(BOOL)arg1 ;
-(void)resetRecordCounts;
-(void)setBroadcastedSyncStateStateToFinished;
-(void)setBroadcastedSyncStateStateToStarting;
-(void)setBroadcastedSyncStateToDeleting;
-(void)setBroadcastedSyncStateToDownloading;
-(void)setBroadcastedSyncStateToStartingInitialSync;
-(void)setBroadcastedSyncStateToStartingPeriodicSync;
-(void)setBroadcastedSyncStateToUploading;
-(void)syncBatchCompleted:(NSUInteger)arg0 ;


@end


#endif